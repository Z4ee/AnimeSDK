#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoView.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_85;
class Class_1_47EE63CB5C4DC8FC_5;
class Class_1_867B6CE75953535A;
class Class_2_9850514C0F89B91A;
class Class_3_7E25C9E6907AC48F;
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY_GETCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0x9A353A0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY_INITIALIZEVIEW_OFFSET UNITYSDK_OFFSET(0x9A35130)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY_ONHIT_OFFSET UNITYSDK_OFFSET(0x9A35550)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY_REGISTERLISTENERS_OFFSET UNITYSDK_OFFSET(0x9A35340)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY_RELEASEVIEW_OFFSET UNITYSDK_OFFSET(0x9A35280)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0x9A35230)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY_SETANIMBOOLPARAM_OFFSET UNITYSDK_OFFSET(0x9A356C0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY_SETANIMFLOATPARAM_OFFSET UNITYSDK_OFFSET(0x9A35730)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY_SETANIMTRIGGER_OFFSET UNITYSDK_OFFSET(0x9A357B0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY_SETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x9A354D0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x9A35440)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY__CTOR_OFFSET UNITYSDK_OFFSET(0x9A35820)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY___IFIXBASEPROXY_GETCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0x9A35840)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY___IFIXBASEPROXY_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0x9A35830)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY___IFIXBASEPROXY_SETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x9A359D0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY___IFIXBASEPROXY_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x9A35910)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MovieGameEnemy_TypeDefinitionIndex = 62365;

	class MovieGameEnemy : public ::RPG::Client::LittleGame::BaseMonoView
	{
	public:
		::Class_1_867B6CE75953535A* Field_6_0; // 0x18
		::Class_2_9850514C0F89B91A* Field_6_1; // 0x20
		::Class_3_7E25C9E6907AC48F* Field_6_2; // 0x28
		::UnityEngine::Animator* AnimatorController; // 0x30
		::UnityEngine::Transform* CenterTrans; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY__CTOR_OFFSET))(this);
		}

		::System::Void InitializeView(::Class_0_16E4307DCC419505_85* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Class_2_9850514C0F89B91A* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_85*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Class_2_9850514C0F89B91A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY_INITIALIZEVIEW_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SafeSetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY_SAFESETACTIVE_OFFSET))(this, a1);
		}

		::System::Void ReleaseView(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY_RELEASEVIEW_OFFSET))(this, a1);
		}

		::System::Void RegisterListeners(::Class_2_9850514C0F89B91A* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_9850514C0F89B91A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY_REGISTERLISTENERS_OFFSET))(this, a1);
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

		::System::Void OnHit(::Class_2_9850514C0F89B91A* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_9850514C0F89B91A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY_ONHIT_OFFSET))(this, a1);
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

		::System::Void __iFixBaseProxy_SafeSetActive(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY___IFIXBASEPROXY_SAFESETACTIVE_OFFSET))(this, P0);
		}

		::UnityEngine::Vector3 __iFixBaseProxy_GetCenterPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY___IFIXBASEPROXY_GETCENTERPOSITION_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_SetPosition(::UnityEngine::Vector3 P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY___IFIXBASEPROXY_SETPOSITION_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_SetLocalRotation(::UnityEngine::Quaternion P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEENEMY___IFIXBASEPROXY_SETLOCALROTATION_OFFSET))(this, P0);
		}
	};
}
