#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_GAMECORE_ABILITYPROPERTYCHANGEREASON__CCTOR_OFFSET UNITYSDK_OFFSET(0xA7D2E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityPropertyChangeReason_TypeDefinitionIndex = 46547;

	class AbilityPropertyChangeReason : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_SummonInit()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AbilityPropertyChangeReason_TypeDefinitionIndex)->GetStaticField(0x13C40);
		}
		static ::System::String** StaticGet_LoseHPByRatio()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AbilityPropertyChangeReason_TypeDefinitionIndex)->GetStaticField(0x13C48);
		}
		static ::System::String** StaticGet_Damage()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AbilityPropertyChangeReason_TypeDefinitionIndex)->GetStaticField(0x13C50);
		}
		static ::System::String** StaticGet_LoseHP()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AbilityPropertyChangeReason_TypeDefinitionIndex)->GetStaticField(0x13C58);
		}
		static ::System::String** StaticGet_SyncProperty()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AbilityPropertyChangeReason_TypeDefinitionIndex)->GetStaticField(0x13C60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPROPERTYCHANGEREASON__CCTOR_OFFSET))();
		}
	};
}
