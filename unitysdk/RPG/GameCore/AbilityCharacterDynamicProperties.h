#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_ABILITYCHARACTERDYNAMICPROPERTIES__CCTOR_OFFSET UNITYSDK_OFFSET(0xE467620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityCharacterDynamicProperties_TypeDefinitionIndex = 57892;

	class AbilityCharacterDynamicProperties : public ::System::Object
	{
	public:
		static ::RPG::GameCore::StringHash* StaticGet_s_StanceLock()
		{
			return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(AbilityCharacterDynamicProperties_TypeDefinitionIndex)->GetStaticField(0x145B0);
		}
		static ::RPG::GameCore::StringHash* StaticGet_s_LinkNumber()
		{
			return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(AbilityCharacterDynamicProperties_TypeDefinitionIndex)->GetStaticField(0x145B4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCHARACTERDYNAMICPROPERTIES__CCTOR_OFFSET))();
		}
	};
}
