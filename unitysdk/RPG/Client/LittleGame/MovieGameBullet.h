#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoView.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_103;
class Class_1_47EE63CB5C4DC8FC_5;
class Class_1_D33B7D6901AE39E9;
class Class_2_FD51057495DB654F;
class Class_3_7E25C9E6907AC48F;
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_GETCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0xD51F6F0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_INITIALIZEVIEW_OFFSET UNITYSDK_OFFSET(0xD51F2F0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_ONHIT_OFFSET UNITYSDK_OFFSET(0xD51FA00)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_REGISTERLISTENERS_OFFSET UNITYSDK_OFFSET(0xD51F890)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_RELEASEVIEW_OFFSET UNITYSDK_OFFSET(0xD51F7F0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0xD51F790)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_SETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0xD51F980)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_SETPOSITION_OFFSET UNITYSDK_OFFSET(0xD51F8F0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET__CTOR_OFFSET UNITYSDK_OFFSET(0xD51FE70)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MovieGameBullet_TypeDefinitionIndex = 76127;

	class MovieGameBullet : public ::RPG::Client::LittleGame::BaseMonoView
	{
	public:
		::UnityEngine::Transform* CenterTrans; // 0x18
		::Class_1_D33B7D6901AE39E9* FKINCGODJEP; // 0x20
		::Class_2_FD51057495DB654F* KAKEIDJDNHJ; // 0x28
		::Class_3_7E25C9E6907AC48F* PDENFEFCAGN; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET__CTOR_OFFSET))(this);
		}

		::System::Void InitializeView(::Class_0_16E4307DCC419505_103* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Class_2_FD51057495DB654F* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_103*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Class_2_FD51057495DB654F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_INITIALIZEVIEW_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 GetCenterPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_GETCENTERPOSITION_OFFSET))(this);
		}

		::System::Void SafeSetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_SAFESETACTIVE_OFFSET))(this, a1);
		}

		::System::Void ReleaseView(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_RELEASEVIEW_OFFSET))(this, a1);
		}

		::System::Void RegisterListeners(::Class_2_FD51057495DB654F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_FD51057495DB654F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_REGISTERLISTENERS_OFFSET))(this, a1);
		}

		::System::Void SetPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_SETPOSITION_OFFSET))(this, a1);
		}

		::System::Void SetLocalRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_SETLOCALROTATION_OFFSET))(this, a1);
		}

		::System::Void OnHit(::Class_2_FD51057495DB654F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_FD51057495DB654F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEBULLET_ONHIT_OFFSET))(this, a1);
		}
	};
}
