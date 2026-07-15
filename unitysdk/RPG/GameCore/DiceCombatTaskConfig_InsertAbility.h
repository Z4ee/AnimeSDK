#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_INSERTABILITY_METHOD_3_1B17AE8BA2C76C65_OFFSET UNITYSDK_OFFSET(0x1C119190)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_INSERTABILITY_METHOD_3_BBBE23B9D89CCC99_OFFSET UNITYSDK_OFFSET(0x1C119270)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_INSERTABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C119260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_InsertAbility_TypeDefinitionIndex = 15453;

	class DiceCombatTaskConfig_InsertAbility : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::System::String* AbilityName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_INSERTABILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1B17AE8BA2C76C65(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_InsertAbility*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_InsertAbility*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_INSERTABILITY_METHOD_3_1B17AE8BA2C76C65_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BBBE23B9D89CCC99(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_InsertAbility* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_InsertAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_INSERTABILITY_METHOD_3_BBBE23B9D89CCC99_OFFSET))(a1, a2);
		}
	};
}
