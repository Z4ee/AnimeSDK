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
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY_GETCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0xD520100)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY_INITIALIZEVIEW_OFFSET UNITYSDK_OFFSET(0xD51FE80)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY_ONHIT_OFFSET UNITYSDK_OFFSET(0xD5202B0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY_REGISTERLISTENERS_OFFSET UNITYSDK_OFFSET(0xD5200A0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY_RELEASEVIEW_OFFSET UNITYSDK_OFFSET(0xD51FFE0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0xD51FF90)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY_SETANIMBOOLPARAM_OFFSET UNITYSDK_OFFSET(0xD520420)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY_SETANIMFLOATPARAM_OFFSET UNITYSDK_OFFSET(0xD520490)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY_SETANIMTRIGGER_OFFSET UNITYSDK_OFFSET(0xD520510)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY_SETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0xD520230)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY_SETPOSITION_OFFSET UNITYSDK_OFFSET(0xD5201A0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY__CTOR_OFFSET UNITYSDK_OFFSET(0xD520580)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MovieGameEnemy_TypeDefinitionIndex = 76130;

	class MovieGameEnemy : public ::RPG::Client::LittleGame::BaseMonoView
	{
	public:
		::Class_1_D33B7D6901AE39E9* FKINCGODJEP; // 0x18
		::Class_2_FD51057495DB654F* KAKEIDJDNHJ; // 0x20
		::Class_3_7E25C9E6907AC48F* PDENFEFCAGN; // 0x28
		::UnityEngine::Animator* AnimatorController; // 0x30
		::UnityEngine::Transform* CenterTrans; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY__CTOR_OFFSET))(this);
		}

		::System::Void InitializeView(::Class_0_16E4307DCC419505_103* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Class_2_FD51057495DB654F* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_103*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Class_2_FD51057495DB654F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY_INITIALIZEVIEW_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SafeSetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY_SAFESETACTIVE_OFFSET))(this, a1);
		}

		::System::Void ReleaseView(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY_RELEASEVIEW_OFFSET))(this, a1);
		}

		::System::Void RegisterListeners(::Class_2_FD51057495DB654F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_FD51057495DB654F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY_REGISTERLISTENERS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetCenterPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY_GETCENTERPOSITION_OFFSET))(this);
		}

		::System::Void SetPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY_SETPOSITION_OFFSET))(this, a1);
		}

		::System::Void SetLocalRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY_SETLOCALROTATION_OFFSET))(this, a1);
		}

		::System::Void OnHit(::Class_2_FD51057495DB654F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_FD51057495DB654F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY_ONHIT_OFFSET))(this, a1);
		}

		::System::Void SetAnimBoolParam(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY_SETANIMBOOLPARAM_OFFSET))(this, a1, a2);
		}

		::System::Void SetAnimFloatParam(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY_SETANIMFLOATPARAM_OFFSET))(this, a1, a2);
		}

		::System::Void SetAnimTrigger(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY_SETANIMTRIGGER_OFFSET))(this, a1);
		}
	};
}
