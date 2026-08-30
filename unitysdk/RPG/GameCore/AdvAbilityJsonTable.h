#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AdventureAbilityConfig; }
namespace RPG::GameCore { class AdventureModifierConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ADVABILITYJSONTABLE_GETADVENTUREABILITY_OFFSET UNITYSDK_OFFSET(0xE4AF1F0)
#define RPG_GAMECORE_ADVABILITYJSONTABLE_GETADVENTUREMODIFIERCONFIG_OFFSET UNITYSDK_OFFSET(0xE4AF2E0)
#define RPG_GAMECORE_ADVABILITYJSONTABLE_LOADADVENTUREMODIFIERCONFIG_OFFSET UNITYSDK_OFFSET(0xE4AEB00)
#define RPG_GAMECORE_ADVABILITYJSONTABLE_LOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0xE4AEA10)
#define RPG_GAMECORE_ADVABILITYJSONTABLE_UNLOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0xE4AEF10)
#define RPG_GAMECORE_ADVABILITYJSONTABLE__ADDGLOBALADVENTUREMODIFIERS_OFFSET UNITYSDK_OFFSET(0xE4AF040)
#define RPG_GAMECORE_ADVABILITYJSONTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0xE4AF3D0)
#define RPG_GAMECORE_ADVABILITYJSONTABLE__LOADADVENTUREABILITY_OFFSET UNITYSDK_OFFSET(0xE4AEC60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvAbilityJsonTable_TypeDefinitionIndex = 56671;

	class AdvAbilityJsonTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AdventureAbilityConfig*>** StaticGet__AdvAbilityMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AdventureAbilityConfig*>**)Il2CppClass::FromTypeDefinitionIndex(AdvAbilityJsonTable_TypeDefinitionIndex)->GetStaticField(0x65A50);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AdventureModifierConfig*>** StaticGet__AdventureModifierConfigMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AdventureModifierConfig*>**)Il2CppClass::FromTypeDefinitionIndex(AdvAbilityJsonTable_TypeDefinitionIndex)->GetStaticField(0x65A58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVABILITYJSONTABLE__CCTOR_OFFSET))();
		}

		static ::System::Void LoadAllConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVABILITYJSONTABLE_LOADALLCONFIG_OFFSET))();
		}

		static ::System::Void UnloadAllConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVABILITYJSONTABLE_UNLOADALLCONFIG_OFFSET))();
		}

		static ::System::Void LoadAdventureModifierConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVABILITYJSONTABLE_LOADADVENTUREMODIFIERCONFIG_OFFSET))();
		}

		static ::System::Void _AddGlobalAdventureModifiers(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AdventureModifierConfig*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AdventureModifierConfig*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVABILITYJSONTABLE__ADDGLOBALADVENTUREMODIFIERS_OFFSET))(a1, a2);
		}

		static ::System::Void _LoadAdventureAbility(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVABILITYJSONTABLE__LOADADVENTUREABILITY_OFFSET))(a1);
		}

		static ::RPG::GameCore::AdventureAbilityConfig* GetAdventureAbility(::System::String* a1)
		{
			return ((::RPG::GameCore::AdventureAbilityConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVABILITYJSONTABLE_GETADVENTUREABILITY_OFFSET))(a1);
		}

		static ::RPG::GameCore::AdventureModifierConfig* GetAdventureModifierConfig(::System::String* a1)
		{
			return ((::RPG::GameCore::AdventureModifierConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVABILITYJSONTABLE_GETADVENTUREMODIFIERCONFIG_OFFSET))(a1);
		}
	};
}
