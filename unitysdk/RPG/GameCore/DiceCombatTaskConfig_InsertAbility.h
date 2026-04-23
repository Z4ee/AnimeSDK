#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_INSERTABILITY_METHOD_3_52A28A9EE010B9DF_OFFSET UNITYSDK_OFFSET(0x1887C620)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_INSERTABILITY_METHOD_3_BBBE23B9D89CCC99_OFFSET UNITYSDK_OFFSET(0x18877560)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_INSERTABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x18877510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_InsertAbility_TypeDefinitionIndex = 15230;

	class DiceCombatTaskConfig_InsertAbility : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::System::String* AbilityName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_INSERTABILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_52A28A9EE010B9DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_InsertAbility*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_InsertAbility*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_INSERTABILITY_METHOD_3_52A28A9EE010B9DF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BBBE23B9D89CCC99(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_InsertAbility* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_InsertAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_INSERTABILITY_METHOD_3_BBBE23B9D89CCC99_OFFSET))(a1, a2);
		}
	};
}
