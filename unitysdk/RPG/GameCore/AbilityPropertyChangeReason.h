#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_GAMECORE_ABILITYPROPERTYCHANGEREASON__CCTOR_OFFSET UNITYSDK_OFFSET(0xE4723C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityPropertyChangeReason_TypeDefinitionIndex = 57880;

	class AbilityPropertyChangeReason : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_Damage()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AbilityPropertyChangeReason_TypeDefinitionIndex)->GetStaticField(0x101D0);
		}
		static ::System::String** StaticGet_LoseHP()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AbilityPropertyChangeReason_TypeDefinitionIndex)->GetStaticField(0x101D8);
		}
		static ::System::String** StaticGet_LoseHPByRatio()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AbilityPropertyChangeReason_TypeDefinitionIndex)->GetStaticField(0x101E0);
		}
		static ::System::String** StaticGet_SummonInit()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AbilityPropertyChangeReason_TypeDefinitionIndex)->GetStaticField(0x101E8);
		}
		static ::System::String** StaticGet_ByUseSkill()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AbilityPropertyChangeReason_TypeDefinitionIndex)->GetStaticField(0x101F0);
		}
		static ::System::String** StaticGet_SyncProperty()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AbilityPropertyChangeReason_TypeDefinitionIndex)->GetStaticField(0x101F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPROPERTYCHANGEREASON__CCTOR_OFFSET))();
		}
	};
}
