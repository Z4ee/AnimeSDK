#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtSkillExtraConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTBATTLESKILLCONFIG_METHOD_3_092BA7DB2B1F4D98_OFFSET UNITYSDK_OFFSET(0x1BB89180)
#define RPG_GAMECORE_RTBATTLESKILLCONFIG_METHOD_3_735841C3354A9070_OFFSET UNITYSDK_OFFSET(0x1BB89120)
#define RPG_GAMECORE_RTBATTLESKILLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB89170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleSkillConfig_TypeDefinitionIndex = 16961;

	class RtBattleSkillConfig : public ::RPG::GameCore::RtSkillExtraConfigBase
	{
	public:
		::RPG::GameCore::FixPoint MoveStartTime; // 0x10
		::RPG::GameCore::FixPoint MoveFinishTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLESKILLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_735841C3354A9070(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBattleSkillConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBattleSkillConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLESKILLCONFIG_METHOD_3_735841C3354A9070_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_092BA7DB2B1F4D98(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBattleSkillConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBattleSkillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLESKILLCONFIG_METHOD_3_092BA7DB2B1F4D98_OFFSET))(a1, a2);
		}
	};
}
