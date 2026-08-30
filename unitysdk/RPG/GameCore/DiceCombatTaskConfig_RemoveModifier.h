#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_REMOVEMODIFIER_METHOD_3_B1F4071340E9592F_OFFSET UNITYSDK_OFFSET(0x1D036B70)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_REMOVEMODIFIER_METHOD_3_F50DC1B34D7A5871_OFFSET UNITYSDK_OFFSET(0x1D036B10)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_REMOVEMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D036B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_RemoveModifier_TypeDefinitionIndex = 15889;

	class DiceCombatTaskConfig_RemoveModifier : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x10
		::System::UInt32 ModifierID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_REMOVEMODIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F50DC1B34D7A5871(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_RemoveModifier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_RemoveModifier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_REMOVEMODIFIER_METHOD_3_F50DC1B34D7A5871_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B1F4071340E9592F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_RemoveModifier* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_RemoveModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_REMOVEMODIFIER_METHOD_3_B1F4071340E9592F_OFFSET))(a1, a2);
		}
	};
}
