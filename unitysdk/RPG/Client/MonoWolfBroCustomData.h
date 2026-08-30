#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class WolfBroGunPlayPuzzleBoard; }
namespace RPG::GameCore { class PlayerLockTargetWeightOverrideConfig; }

#define RPG_CLIENT_MONOWOLFBROCUSTOMDATA_GET_GUNPLAYPUZZLEBOARD_OFFSET UNITYSDK_OFFSET(0x1C29A530)
#define RPG_CLIENT_MONOWOLFBROCUSTOMDATA_GET_ISBULLETCNTVALID_OFFSET UNITYSDK_OFFSET(0x1C29A4D0)
#define RPG_CLIENT_MONOWOLFBROCUSTOMDATA_SET_GUNPLAYPUZZLEBOARD_OFFSET UNITYSDK_OFFSET(0x1C29A540)
#define RPG_CLIENT_MONOWOLFBROCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C29A550)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoWolfBroCustomData_TypeDefinitionIndex = 68597;

	class MonoWolfBroCustomData : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean isBulletActivated; // 0x18
		::System::Int32 bulletCnt; // 0x1C
		::RPG::GameCore::PlayerLockTargetWeightOverrideConfig* LockTargetConfig; // 0x20
		::System::Single skillEnergyCast; // 0x28
		::System::Single skillEnergyLimit; // 0x2C
		::System::Single skillCloseCD; // 0x30
		::System::Single skillRestartCD; // 0x34
		::System::Single daddyTimeOnHit; // 0x38
		::RPG::Client::WolfBroGunPlayPuzzleBoard* _GunPlayPuzzleBoard_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOWOLFBROCUSTOMDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsBulletCntValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOWOLFBROCUSTOMDATA_GET_ISBULLETCNTVALID_OFFSET))(this);
		}

		::RPG::Client::WolfBroGunPlayPuzzleBoard* get_GunPlayPuzzleBoard()
		{
			return ((::RPG::Client::WolfBroGunPlayPuzzleBoard*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOWOLFBROCUSTOMDATA_GET_GUNPLAYPUZZLEBOARD_OFFSET))(this);
		}

		::System::Void set_GunPlayPuzzleBoard(::RPG::Client::WolfBroGunPlayPuzzleBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::WolfBroGunPlayPuzzleBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOWOLFBROCUSTOMDATA_SET_GUNPLAYPUZZLEBOARD_OFFSET))(this, a1);
		}
	};
}
