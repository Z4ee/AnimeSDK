#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameConstConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MarbleMainsubConfig; }
namespace RPG::GameCore { class MarbleNpcConfig; }
namespace System { class String; }

#define RPG_GAMECORE_MARBLEGAMECONFIG_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1BD18310)
#define RPG_GAMECORE_MARBLEGAMECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BD182D0)
#define RPG_GAMECORE_MARBLEGAMECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD18300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleGameConfig_TypeDefinitionIndex = 18180;

	class MarbleGameConfig : public ::RPG::GameCore::LittleGameConstConfig
	{
	public:
		::System::UInt32 TutorialLevel; // 0x10
		::System::Single DivideSpeed; // 0x14
		::System::Single Deceleration; // 0x18
		::System::Single LessDeceleration; // 0x1C
		::System::String* IceEffect; // 0x20
		::System::UInt32 HitAllyEffect; // 0x28
		::System::UInt32 LastHitEffect; // 0x2C
		::System::UInt32 HitEnemyEffect; // 0x30
		::System::UInt32 CriticalHitEnemyEffect; // 0x34
		::System::Single CriticalSpeed; // 0x38
		::System::UInt32 HitFiledEffect; // 0x3C
		::System::Single IdleTime; // 0x40
		::System::Single MinCollideSpeed; // 0x44
		::System::Single BornTimeLag; // 0x48
		::System::UInt32 BornEffect; // 0x4C
		::System::UInt32 DieEffect; // 0x50
		::System::UInt32 ReviveEffect; // 0x54
		::System::UInt32 HitEffect; // 0x58
		::System::UInt32 OffFieldEffect; // 0x5C
		::System::UInt32 SelectEffect; // 0x60
		::System::UInt32 LaunchMaxEffect; // 0x64
		::System::UInt32 IdleEffect; // 0x68
		::System::UInt32 ActionEffect; // 0x6C
		::System::UInt32 LevelUpEffect; // 0x70
		::System::UInt32 AbsorbEffect; // 0x74
		::System::UInt32 AbsorbedEffect; // 0x78
		::System::UInt32 AbsorbTrailEffect; // 0x7C
		::System::UInt32 GhostFireEffect; // 0x80
		::System::UInt32 ShieldEffect; // 0x84
		::System::UInt32 BulletHitEffect; // 0x88
		::System::UInt32 BulletSealId; // 0x8C
		::Il2CppArray<::System::String*>* BulletObjectNames; // 0x90
		::System::Single PlayerEnterTime; // 0x98
		::System::Single LoadTime; // 0x9C
		::System::Single PerformanceTime; // 0xA0
		::System::Single LaunchTime; // 0xA4
		::System::Single SelectTechTime; // 0xA8
		::System::Single TechUiTime; // 0xAC
		::System::Single PreLaunchTime; // 0xB0
		::System::Single PreRoundTime; // 0xB4
		::System::Single AILaunchTime; // 0xB8
		::Il2CppArray<::System::Single>* AILaunchBlankTime; // 0xC0
		::System::Single AISwitchRate; // 0xC8
		::System::Single AISwitchGap; // 0xCC
		::System::Single ExtraSimulateTime; // 0xD0
		::System::UInt32 KickOutTimes; // 0xD4
		::System::Int32 PvpWinScore; // 0xD8
		::System::Int32 PvpLoseScore; // 0xDC
		::System::Single SealLevelUpRate; // 0xE0
		::System::Single SealLevelUpStepRate; // 0xE4
		::System::Int32 MinAIRank; // 0xE8
		::System::Int32 MaxAIRank; // 0xEC
		::System::Single FirstEmojiRate; // 0xF0
		::System::Single NextEmojiRate; // 0xF4
		::System::Single CentripetalSpeed; // 0xF8
		::System::Single TangentSpeed; // 0xFC
		::System::UInt32 AbsorbSealId; // 0x100
		::System::UInt32 PaoPaoId; // 0x104
		::System::Single SimulateFinishDelay; // 0x108
		::System::Single StandardRadius; // 0x10C
		::System::UInt32 SpecifyKillSeal; // 0x110
		::System::UInt32 SpecifyKillScore; // 0x114
		::System::UInt32 Achievement1; // 0x118
		::System::UInt32 Achievement2; // 0x11C
		::System::UInt32 Achievement3; // 0x120
		::RPG::GameCore::MarbleNpcConfig* ANpcConfig; // 0x128
		::RPG::GameCore::MarbleNpcConfig* BNpcConfig; // 0x130
		::System::Single TriggerEventCd; // 0x138
		::System::Single NormalKillRate; // 0x13C
		::System::Int32 MassDamage; // 0x140
		::System::String* NpcSealName1; // 0x148
		::System::String* NpcSealName2; // 0x150
		::RPG::GameCore::MarbleMainsubConfig* MarbleMainsubConfig; // 0x158
		::Il2CppArray<::System::UInt32>* RankScoreInterval; // 0x160
		::Il2CppArray<::System::UInt32>* RankInterval; // 0x168

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEGAMECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleGameConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleGameConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEGAMECONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleGameConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleGameConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEGAMECONFIG_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
