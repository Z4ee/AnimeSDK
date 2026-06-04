#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_DICECOMBATPHYSIMPARAMETER_GETCURRESOLUTIONENEMYDICEHOLDOFFSETY_OFFSET UNITYSDK_OFFSET(0xB7EF180)
#define RPG_CLIENT_DICECOMBATPHYSIMPARAMETER_GETINITANGLEVELOCITY_OFFSET UNITYSDK_OFFSET(0xB7EE400)
#define RPG_CLIENT_DICECOMBATPHYSIMPARAMETER_GETINITPOSITIONRANDOMOFFSET_OFFSET UNITYSDK_OFFSET(0xB7EE4C0)
#define RPG_CLIENT_DICECOMBATPHYSIMPARAMETER_GETINITVELOCITY_OFFSET UNITYSDK_OFFSET(0xB7EE340)
#define RPG_CLIENT_DICECOMBATPHYSIMPARAMETER_GETPOSITIONDELTA_OFFSET UNITYSDK_OFFSET(0xB7EE580)
#define RPG_CLIENT_DICECOMBATPHYSIMPARAMETER_GETPOSOFFSETBYDICETYPE_OFFSET UNITYSDK_OFFSET(0xB7EE610)
#define RPG_CLIENT_DICECOMBATPHYSIMPARAMETER_GETROTOFFSETBYDICETYPE_OFFSET UNITYSDK_OFFSET(0xB7EE8B0)
#define RPG_CLIENT_DICECOMBATPHYSIMPARAMETER_GETUIPOSYOFFSETBYDICETYPE_OFFSET UNITYSDK_OFFSET(0xB7EEB50)
#define RPG_CLIENT_DICECOMBATPHYSIMPARAMETER_METHOD_5_FAE9C4050544FE63_1_OFFSET UNITYSDK_OFFSET(0xB7EEE20)
#define RPG_CLIENT_DICECOMBATPHYSIMPARAMETER_METHOD_5_FAE9C4050544FE63_2_OFFSET UNITYSDK_OFFSET(0xB7EED00)
#define RPG_CLIENT_DICECOMBATPHYSIMPARAMETER_METHOD_5_FAE9C4050544FE63_3_OFFSET UNITYSDK_OFFSET(0xB7EF060)
#define RPG_CLIENT_DICECOMBATPHYSIMPARAMETER_METHOD_5_FAE9C4050544FE63_OFFSET UNITYSDK_OFFSET(0xB7EEF40)
#define RPG_CLIENT_DICECOMBATPHYSIMPARAMETER_METHOD_5_FC5102551AF3CB1A_OFFSET UNITYSDK_OFFSET(0xB7EF2A0)
#define RPG_CLIENT_DICECOMBATPHYSIMPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0xB7EF350)

namespace RPG::Client
{
	inline static constexpr unsigned int DiceCombatPhySimParameter_TypeDefinitionIndex = 56440;

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
		::System::Single DiceMoveToExchangeSpeed; // 0x74
		::System::Single CenterScaleRatio; // 0x78
		::System::Single HoldScaleRatio; // 0x7C
		::System::Single EnemyHoldScaleRatio; // 0x80
		::System::Single EnemyDiceHoldOffsetY43; // 0x84
		::System::Single EnemyDiceHoldOffsetY169; // 0x88
		::System::Single CenterDiceSpacing; // 0x8C
		::System::Single HoldDiceSpacing; // 0x90
		::System::Single EnemyCenterDiceSpacing; // 0x94
		::System::Single EnemyHoldDiceSpacing; // 0x98
		::UnityEngine::Vector3 Dice4PosOffset_PlayerCenter; // 0x9C
		::UnityEngine::Vector3 Dice4RotOffset_PlayerCenter; // 0xA8
		::System::Single Dice4UIPosYOffset_PlayerCenter43; // 0xB4
		::System::Single Dice4UIPosYOffset_PlayerCenter169; // 0xB8
		::UnityEngine::Vector3 Dice6PosOffset_PlayerCenter; // 0xBC
		::UnityEngine::Vector3 Dice6RotOffset_PlayerCenter; // 0xC8
		::System::Single Dice6UIPosYOffset_PlayerCenter; // 0xD4
		::UnityEngine::Vector3 Dice8PosOffset_PlayerCenter; // 0xD8
		::UnityEngine::Vector3 Dice8RotOffset_PlayerCenter; // 0xE4
		::System::Single Dice8UIPosYOffset_PlayerCenter; // 0xF0
		::UnityEngine::Vector3 Dice12PosOffset_PlayerCenter; // 0xF4
		::UnityEngine::Vector3 Dice12RotOffset_PlayerCenter; // 0x100
		::System::Single Dice12UIPosYOffset_PlayerCenter; // 0x10C
		::UnityEngine::Vector3 Dice4PosOffset_PlayerHold; // 0x110
		::UnityEngine::Vector3 Dice4RotOffset_PlayerHold; // 0x11C
		::System::Single Dice4UIPosYOffset_PlayerHold; // 0x128
		::UnityEngine::Vector3 Dice6PosOffset_PlayerHold; // 0x12C
		::UnityEngine::Vector3 Dice6RotOffset_PlayerHold; // 0x138
		::System::Single Dice6UIPosYOffset_PlayerHold; // 0x144
		::UnityEngine::Vector3 Dice8PosOffset_PlayerHold; // 0x148
		::UnityEngine::Vector3 Dice8RotOffset_PlayerHold; // 0x154
		::System::Single Dice8UIPosYOffset_PlayerHold; // 0x160
		::UnityEngine::Vector3 Dice12PosOffset_PlayerHold; // 0x164
		::UnityEngine::Vector3 Dice12RotOffset_PlayerHold; // 0x170
		::System::Single Dice12UIPosYOffset_PlayerHold; // 0x17C
		::UnityEngine::Vector3 Dice4PosOffset_EnemyCenter; // 0x180
		::UnityEngine::Vector3 Dice4RotOffset_EnemyCenter; // 0x18C
		::System::Single Dice4UIPosYOffset_EnemyCenter43; // 0x198
		::System::Single Dice4UIPosYOffset_EnemyCenter169; // 0x19C
		::UnityEngine::Vector3 Dice6PosOffset_EnemyCenter; // 0x1A0
		::UnityEngine::Vector3 Dice6RotOffset_EnemyCenter; // 0x1AC
		::System::Single Dice6UIPosYOffset_EnemyCenter; // 0x1B8
		::UnityEngine::Vector3 Dice8PosOffset_EnemyCenter; // 0x1BC
		::UnityEngine::Vector3 Dice8RotOffset_EnemyCenter; // 0x1C8
		::System::Single Dice8UIPosYOffset_EnemyCenter; // 0x1D4
		::UnityEngine::Vector3 Dice12PosOffset_EnemyCenter; // 0x1D8
		::UnityEngine::Vector3 Dice12RotOffset_EnemyCenter; // 0x1E4
		::System::Single Dice12UIPosYOffset_EnemyCenter; // 0x1F0
		::UnityEngine::Vector3 Dice4PosOffset_EnemyHold; // 0x1F4
		::UnityEngine::Vector3 Dice4RotOffset_EnemyHold; // 0x200
		::System::Single Dice4UIPosYOffset_EnemyHold43; // 0x20C
		::System::Single Dice4UIPosYOffset_EnemyHold169; // 0x210
		::UnityEngine::Vector3 Dice6PosOffset_EnemyHold; // 0x214
		::UnityEngine::Vector3 Dice6RotOffset_EnemyHold; // 0x220
		::System::Single Dice6UIPosYOffset_EnemyHold; // 0x22C
		::UnityEngine::Vector3 Dice8PosOffset_EnemyHold; // 0x230
		::UnityEngine::Vector3 Dice8RotOffset_EnemyHold; // 0x23C
		::System::Single Dice8UIPosYOffset_EnemyHold43; // 0x248
		::System::Single Dice8UIPosYOffset_EnemyHold169; // 0x24C
		::UnityEngine::Vector3 Dice12PosOffset_EnemyHold; // 0x250
		::UnityEngine::Vector3 Dice12RotOffset_EnemyHold; // 0x25C
		::System::Single Dice12UIPosYOffset_EnemyHold; // 0x268

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
