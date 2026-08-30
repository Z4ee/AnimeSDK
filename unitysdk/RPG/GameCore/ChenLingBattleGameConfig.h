#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingBattleAIConfig; }
namespace RPG::GameCore { class ChenLingBattleAnimationConfig; }
namespace RPG::GameCore { class ChenLingBattleScoreSoldierConfig; }
namespace RPG::GameCore { class ChenLingDeathEffectConfig; }
namespace RPG::GameCore { class ChenLingRageModeConfig; }

#define RPG_GAMECORE_CHENLINGBATTLEGAMECONFIG_METHOD_2_30EE7D2A2FE8B411_OFFSET UNITYSDK_OFFSET(0x1CFA99E0)
#define RPG_GAMECORE_CHENLINGBATTLEGAMECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFAA170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleGameConfig_TypeDefinitionIndex = 15513;

	class ChenLingBattleGameConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint BowParabolaMaxHeight; // 0x10
		::RPG::GameCore::FixPoint BowParabolaKValue; // 0x18
		::RPG::GameCore::FixPoint SteeringAvoidanceFactor; // 0x20
		::RPG::GameCore::FixPoint MaxRadialForceCausedSpeed; // 0x28
		::RPG::GameCore::ChenLingDeathEffectConfig* DeathEffectConfig; // 0x30
		::RPG::GameCore::ChenLingBattleScoreSoldierConfig* BattleScoreSoldierConfig; // 0x38
		::RPG::MVector3 InitOffsetMin; // 0x40
		::RPG::MVector3 InitOffsetMax; // 0x4C
		::RPG::GameCore::FixPoint AttackForce; // 0x58
		::RPG::GameCore::FixPoint AttackForceDuration; // 0x60
		::System::Single AttackMaxWaitTime; // 0x68
		::RPG::MVector2 BattleFieldLowerLeftCorner; // 0x6C
		::RPG::MVector2 BattleFieldUpperRightCorner; // 0x74
		::System::Single BattleEndSettleDelayTime; // 0x7C
		::System::Single HighLightTime; // 0x80
		::System::Single HighLightTimeScale; // 0x84
		::RPG::GameCore::ChenLingBattleAnimationConfig* AnimationConfig; // 0x88
		::RPG::GameCore::FixPoint SeperationForceMagnitudeFactor; // 0x90
		::RPG::GameCore::FixPoint SeperationForceDuration; // 0x98
		::RPG::GameCore::ChenLingBattleAIConfig* AIConfig; // 0xA0
		::RPG::GameCore::ChenLingRageModeConfig* RageModeConfig; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEGAMECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_30EE7D2A2FE8B411(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleGameConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleGameConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEGAMECONFIG_METHOD_2_30EE7D2A2FE8B411_OFFSET))(a1, a2);
		}
	};
}
