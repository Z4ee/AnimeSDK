#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_DICECOMBATPHYSIMPARAMETER_GETCURRESOLUTIONENEMYDICEHOLDOFFSETY_OFFSET UNITYSDK_OFFSET(0x94A0860)
#define RPG_CLIENT_DICECOMBATPHYSIMPARAMETER_GETINITANGLEVELOCITY_OFFSET UNITYSDK_OFFSET(0x949FAE0)
#define RPG_CLIENT_DICECOMBATPHYSIMPARAMETER_GETINITPOSITIONRANDOMOFFSET_OFFSET UNITYSDK_OFFSET(0x949FBA0)
#define RPG_CLIENT_DICECOMBATPHYSIMPARAMETER_GETINITVELOCITY_OFFSET UNITYSDK_OFFSET(0x949FA20)
#define RPG_CLIENT_DICECOMBATPHYSIMPARAMETER_GETPOSITIONDELTA_OFFSET UNITYSDK_OFFSET(0x949FC60)
#define RPG_CLIENT_DICECOMBATPHYSIMPARAMETER_GETPOSOFFSETBYDICETYPE_OFFSET UNITYSDK_OFFSET(0x949FCF0)
#define RPG_CLIENT_DICECOMBATPHYSIMPARAMETER_GETROTOFFSETBYDICETYPE_OFFSET UNITYSDK_OFFSET(0x949FF90)
#define RPG_CLIENT_DICECOMBATPHYSIMPARAMETER_GETUIPOSYOFFSETBYDICETYPE_OFFSET UNITYSDK_OFFSET(0x94A0230)
#define RPG_CLIENT_DICECOMBATPHYSIMPARAMETER_METHOD_5_FAE9C4050544FE63_1_OFFSET UNITYSDK_OFFSET(0x94A0500)
#define RPG_CLIENT_DICECOMBATPHYSIMPARAMETER_METHOD_5_FAE9C4050544FE63_2_OFFSET UNITYSDK_OFFSET(0x94A03E0)
#define RPG_CLIENT_DICECOMBATPHYSIMPARAMETER_METHOD_5_FAE9C4050544FE63_3_OFFSET UNITYSDK_OFFSET(0x94A0740)
#define RPG_CLIENT_DICECOMBATPHYSIMPARAMETER_METHOD_5_FAE9C4050544FE63_OFFSET UNITYSDK_OFFSET(0x94A0620)
#define RPG_CLIENT_DICECOMBATPHYSIMPARAMETER_METHOD_5_FC5102551AF3CB1A_OFFSET UNITYSDK_OFFSET(0x94A0980)
#define RPG_CLIENT_DICECOMBATPHYSIMPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x94A0A30)

namespace RPG::Client
{
	inline static constexpr unsigned int DiceCombatPhySimParameter_TypeDefinitionIndex = 48894;

	class DiceCombatPhySimParameter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector3 InitVelocityMin; // 0x18
		::UnityEngine::Vector3 InitVelocityMax; // 0x24
		::UnityEngine::Vector3 InitAngleVelocityMin; // 0x30
		::UnityEngine::Vector3 InitAngleVelocityMax; // 0x3C
		::System::Boolean OverrideGravity; // 0x48
		::System::Single OverrideGravityValue; // 0x4C
		::System::Single DiceMoveToCenterSpeed; // 0x50
		::System::Single DiceMoveToHoldSpeed; // 0x54
		::UnityEngine::Vector3 InitPositionRandomOffsetMin; // 0x58
		::UnityEngine::Vector3 InitPositionRandomOffsetMax; // 0x64
		::System::Single InitPositionDistance; // 0x70
		::System::Single CenterScaleRatio; // 0x74
		::System::Single HoldScaleRatio; // 0x78
		::System::Single EnemyHoldScaleRatio; // 0x7C
		::System::Single EnemyDiceHoldOffsetY43; // 0x80
		::System::Single EnemyDiceHoldOffsetY169; // 0x84
		::System::Single CenterDiceSpacing; // 0x88
		::System::Single HoldDiceSpacing; // 0x8C
		::System::Single EnemyCenterDiceSpacing; // 0x90
		::System::Single EnemyHoldDiceSpacing; // 0x94
		::UnityEngine::Vector3 Dice4PosOffset_PlayerCenter; // 0x98
		::UnityEngine::Vector3 Dice4RotOffset_PlayerCenter; // 0xA4
		::System::Single Dice4UIPosYOffset_PlayerCenter43; // 0xB0
		::System::Single Dice4UIPosYOffset_PlayerCenter169; // 0xB4
		::UnityEngine::Vector3 Dice6PosOffset_PlayerCenter; // 0xB8
		::UnityEngine::Vector3 Dice6RotOffset_PlayerCenter; // 0xC4
		::System::Single Dice6UIPosYOffset_PlayerCenter; // 0xD0
		::UnityEngine::Vector3 Dice8PosOffset_PlayerCenter; // 0xD4
		::UnityEngine::Vector3 Dice8RotOffset_PlayerCenter; // 0xE0
		::System::Single Dice8UIPosYOffset_PlayerCenter; // 0xEC
		::UnityEngine::Vector3 Dice12PosOffset_PlayerCenter; // 0xF0
		::UnityEngine::Vector3 Dice12RotOffset_PlayerCenter; // 0xFC
		::System::Single Dice12UIPosYOffset_PlayerCenter; // 0x108
		::UnityEngine::Vector3 Dice4PosOffset_PlayerHold; // 0x10C
		::UnityEngine::Vector3 Dice4RotOffset_PlayerHold; // 0x118
		::System::Single Dice4UIPosYOffset_PlayerHold; // 0x124
		::UnityEngine::Vector3 Dice6PosOffset_PlayerHold; // 0x128
		::UnityEngine::Vector3 Dice6RotOffset_PlayerHold; // 0x134
		::System::Single Dice6UIPosYOffset_PlayerHold; // 0x140
		::UnityEngine::Vector3 Dice8PosOffset_PlayerHold; // 0x144
		::UnityEngine::Vector3 Dice8RotOffset_PlayerHold; // 0x150
		::System::Single Dice8UIPosYOffset_PlayerHold; // 0x15C
		::UnityEngine::Vector3 Dice12PosOffset_PlayerHold; // 0x160
		::UnityEngine::Vector3 Dice12RotOffset_PlayerHold; // 0x16C
		::System::Single Dice12UIPosYOffset_PlayerHold; // 0x178
		::UnityEngine::Vector3 Dice4PosOffset_EnemyCenter; // 0x17C
		::UnityEngine::Vector3 Dice4RotOffset_EnemyCenter; // 0x188
		::System::Single Dice4UIPosYOffset_EnemyCenter43; // 0x194
		::System::Single Dice4UIPosYOffset_EnemyCenter169; // 0x198
		::UnityEngine::Vector3 Dice6PosOffset_EnemyCenter; // 0x19C
		::UnityEngine::Vector3 Dice6RotOffset_EnemyCenter; // 0x1A8
		::System::Single Dice6UIPosYOffset_EnemyCenter; // 0x1B4
		::UnityEngine::Vector3 Dice8PosOffset_EnemyCenter; // 0x1B8
		::UnityEngine::Vector3 Dice8RotOffset_EnemyCenter; // 0x1C4
		::System::Single Dice8UIPosYOffset_EnemyCenter; // 0x1D0
		::UnityEngine::Vector3 Dice12PosOffset_EnemyCenter; // 0x1D4
		::UnityEngine::Vector3 Dice12RotOffset_EnemyCenter; // 0x1E0
		::System::Single Dice12UIPosYOffset_EnemyCenter; // 0x1EC
		::UnityEngine::Vector3 Dice4PosOffset_EnemyHold; // 0x1F0
		::UnityEngine::Vector3 Dice4RotOffset_EnemyHold; // 0x1FC
		::System::Single Dice4UIPosYOffset_EnemyHold43; // 0x208
		::System::Single Dice4UIPosYOffset_EnemyHold169; // 0x20C
		::UnityEngine::Vector3 Dice6PosOffset_EnemyHold; // 0x210
		::UnityEngine::Vector3 Dice6RotOffset_EnemyHold; // 0x21C
		::System::Single Dice6UIPosYOffset_EnemyHold; // 0x228
		::UnityEngine::Vector3 Dice8PosOffset_EnemyHold; // 0x22C
		::UnityEngine::Vector3 Dice8RotOffset_EnemyHold; // 0x238
		::System::Single Dice8UIPosYOffset_EnemyHold43; // 0x244
		::System::Single Dice8UIPosYOffset_EnemyHold169; // 0x248
		::UnityEngine::Vector3 Dice12PosOffset_EnemyHold; // 0x24C
		::UnityEngine::Vector3 Dice12RotOffset_EnemyHold; // 0x258
		::System::Single Dice12UIPosYOffset_EnemyHold; // 0x264

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATPHYSIMPARAMETER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetInitVelocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATPHYSIMPARAMETER_GETINITVELOCITY_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetInitAngleVelocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATPHYSIMPARAMETER_GETINITANGLEVELOCITY_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetInitPositionRandomOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATPHYSIMPARAMETER_GETINITPOSITIONRANDOMOFFSET_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetPositionDelta(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATPHYSIMPARAMETER_GETPOSITIONDELTA_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetPosOffsetByDiceType(::RPG::GameCore::DiceCombatDiceType a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::DiceCombatDiceType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATPHYSIMPARAMETER_GETPOSOFFSETBYDICETYPE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 GetRotOffsetByDiceType(::RPG::GameCore::DiceCombatDiceType a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::DiceCombatDiceType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATPHYSIMPARAMETER_GETROTOFFSETBYDICETYPE_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GetUIPosYOffsetByDiceType(::RPG::GameCore::DiceCombatDiceType a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::DiceCombatDiceType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATPHYSIMPARAMETER_GETUIPOSYOFFSETBYDICETYPE_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GetCurResolutionEnemyDiceHoldOffsetY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATPHYSIMPARAMETER_GETCURRESOLUTIONENEMYDICEHOLDOFFSETY_OFFSET))(this);
		}

		::System::Single Method_5_FAE9C4050544FE63()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATPHYSIMPARAMETER_METHOD_5_FAE9C4050544FE63_OFFSET))(this);
		}

		::System::Single Method_5_FAE9C4050544FE63_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATPHYSIMPARAMETER_METHOD_5_FAE9C4050544FE63_1_OFFSET))(this);
		}

		::System::Single Method_5_FAE9C4050544FE63_2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATPHYSIMPARAMETER_METHOD_5_FAE9C4050544FE63_2_OFFSET))(this);
		}

		::System::Single Method_5_FAE9C4050544FE63_3()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATPHYSIMPARAMETER_METHOD_5_FAE9C4050544FE63_3_OFFSET))(this);
		}

		::System::Single Method_5_FC5102551AF3CB1A()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATPHYSIMPARAMETER_METHOD_5_FC5102551AF3CB1A_OFFSET))(this);
		}
	};
}
