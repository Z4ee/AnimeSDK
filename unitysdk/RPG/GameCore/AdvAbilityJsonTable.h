#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AdventureAbilityConfig; }
namespace RPG::GameCore { class AdventureModifierConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ADVABILITYJSONTABLE_GETADVENTUREABILITY_OFFSET UNITYSDK_OFFSET(0xA812170)
#define RPG_GAMECORE_ADVABILITYJSONTABLE_GETADVENTUREMODIFIERCONFIG_OFFSET UNITYSDK_OFFSET(0xA812270)
#define RPG_GAMECORE_ADVABILITYJSONTABLE_LOADADVENTUREMODIFIERCONFIG_OFFSET UNITYSDK_OFFSET(0xA811A70)
#define RPG_GAMECORE_ADVABILITYJSONTABLE_LOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0xA811970)
#define RPG_GAMECORE_ADVABILITYJSONTABLE_UNLOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0xA811E90)
#define RPG_GAMECORE_ADVABILITYJSONTABLE__ADDGLOBALADVENTUREMODIFIERS_OFFSET UNITYSDK_OFFSET(0xA811FE0)
#define RPG_GAMECORE_ADVABILITYJSONTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0xA812370)
#define RPG_GAMECORE_ADVABILITYJSONTABLE__LOADADVENTUREABILITY_OFFSET UNITYSDK_OFFSET(0xA811BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvAbilityJsonTable_TypeDefinitionIndex = 45420;

	class AdvAbilityJsonTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AdventureModifierConfig*>** StaticGet__AdventureModifierConfigMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AdventureModifierConfig*>**)Il2CppClass::FromTypeDefinitionIndex(AdvAbilityJsonTable_TypeDefinitionIndex)->GetStaticField(0x41510);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AdventureAbilityConfig*>** StaticGet__AdvAbilityMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AdventureAbilityConfig*>**)Il2CppClass::FromTypeDefinitionIndex(AdvAbilityJsonTable_TypeDefinitionIndex)->GetStaticField(0x41518);
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

		static ::System::Void _AddGlobalAdventureModifiers(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AdventureModifierConfig*>* modifierMap, ::System::String* configPath)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AdventureModifierConfig*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVABILITYJSONTABLE__ADDGLOBALADVENTUREMODIFIERS_OFFSET))(modifierMap, configPath);
		}

		static ::System::Void _LoadAdventureAbility(::System::String* Path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVABILITYJSONTABLE__LOADADVENTUREABILITY_OFFSET))(Path);
		}

		static ::RPG::GameCore::AdventureAbilityConfig* GetAdventureAbility(::System::String* sAbilityName)
		{
			return ((::RPG::GameCore::AdventureAbilityConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVABILITYJSONTABLE_GETADVENTUREABILITY_OFFSET))(sAbilityName);
		}

		static ::RPG::GameCore::AdventureModifierConfig* GetAdventureModifierConfig(::System::String* ModifierName)
		{
			return ((::RPG::GameCore::AdventureModifierConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVABILITYJSONTABLE_GETADVENTUREMODIFIERCONFIG_OFFSET))(ModifierName);
		}
	};
}
