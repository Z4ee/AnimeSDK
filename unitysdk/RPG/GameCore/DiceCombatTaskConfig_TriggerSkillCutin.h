#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSKILLCUTIN_METHOD_3_6A08721189F41FBC_OFFSET UNITYSDK_OFFSET(0x1DB07D00)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSKILLCUTIN_METHOD_3_7685E704B8F00752_OFFSET UNITYSDK_OFFSET(0x1DB07CA0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSKILLCUTIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB07CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_TriggerSkillCutin_TypeDefinitionIndex = 15865;

	class DiceCombatTaskConfig_TriggerSkillCutin : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x10
		::System::UInt32 CutinID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSKILLCUTIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7685E704B8F00752(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillCutin*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillCutin*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSKILLCUTIN_METHOD_3_7685E704B8F00752_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6A08721189F41FBC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillCutin* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillCutin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSKILLCUTIN_METHOD_3_6A08721189F41FBC_OFFSET))(a1, a2);
		}
	};
}
