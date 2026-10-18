#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class CCDIK; }
namespace RPG::Client { class LookAtIK; }
namespace RPG::Client::ActivityHipplen { class MonoBabyHipplen_Class_1_F5A99FD3A852F19F; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_COLLECTCOLLIDERS_OFFSET UNITYSDK_OFFSET(0xC43CAF0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_DISABLEALLCOLLIDERS_OFFSET UNITYSDK_OFFSET(0xC43C3A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_INIT_OFFSET UNITYSDK_OFFSET(0xC43C1F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_ISBALLFETCHCOLLIDER_OFFSET UNITYSDK_OFFSET(0xC43CC30)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_ISINTERACTCOLLIDER_OFFSET UNITYSDK_OFFSET(0xC43CBA0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_ISMOUTHCOLLIDER_OFFSET UNITYSDK_OFFSET(0xC43CCC0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_LOOKAT_OFFSET UNITYSDK_OFFSET(0xC43C4D0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_OVERRIDELOOKATTRANSITION_OFFSET UNITYSDK_OFFSET(0xC43C840)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_RESETLOOKATTRANSITION_OFFSET UNITYSDK_OFFSET(0xC43C910)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_RESETLOOKATWEIGHT_OFFSET UNITYSDK_OFFSET(0xC43C7C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_SETBALLFETCHCOLLIDERENABLED_OFFSET UNITYSDK_OFFSET(0xC43CE60)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_SETLOOKATWEIGHT_OFFSET UNITYSDK_OFFSET(0xC43C600)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_SETMOUTHCOLLIDERENABLED_OFFSET UNITYSDK_OFFSET(0xC43CDF0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_SETNECKIKENABLED_OFFSET UNITYSDK_OFFSET(0xC43CA90)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_SETNECKIKTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0xC43C9F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_SETNECKIKTIPBONE_OFFSET UNITYSDK_OFFSET(0xC43CD30)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_STOPLOOKAT_OFFSET UNITYSDK_OFFSET(0xC43C5A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_TICK_OFFSET UNITYSDK_OFFSET(0xC43BF30)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN__CTOR_OFFSET UNITYSDK_OFFSET(0xC43CF40)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int MonoBabyHipplen_TypeDefinitionIndex = 75600;

	class MonoBabyHipplen : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::LookAtIK* FFOBPOJECCP; // 0x18
		::RPG::Client::CCDIK* GILKONENFDP; // 0x20
		::UnityEngine::Transform* MGANMFGGELO; // 0x28
		::System::Int32 JKNBIDKHDLK; // 0x30
		::System::Single LFKMOIDKOEL; // 0x34
		::System::Single IPMECJCKIGM; // 0x38
		::System::Nullable_1<::UnityEngine::Vector3> EFDDOIEEKLF; // 0x3C
		::RPG::Client::ActivityHipplen::MonoBabyHipplen_Class_1_F5A99FD3A852F19F* OCNOHFNJFCF; // 0x50
		::Il2CppArray<::UnityEngine::Collider*>* _InteractColliders; // 0x58
		::Il2CppArray<::UnityEngine::Collider*>* _BallFetchColliders; // 0x60
		::UnityEngine::Collider* _MouthCollider; // 0x68
		::System::Single _CCDIKMoveSpeed; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN__CTOR_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_TICK_OFFSET))(this, a1);
		}

		::System::Void Init(::RPG::Client::AttachPointMapping* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AttachPointMapping*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_INIT_OFFSET))(this, a1);
		}

		::System::Void LookAt(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_LOOKAT_OFFSET))(this, a1);
		}

		::System::Void SetLookAtWeight(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_SETLOOKATWEIGHT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ResetLookAtWeight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_RESETLOOKATWEIGHT_OFFSET))(this, a1);
		}

		::System::Void OverrideLookAtTransition(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_OVERRIDELOOKATTRANSITION_OFFSET))(this, a1);
		}

		::System::Void ResetLookAtTransition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_RESETLOOKATTRANSITION_OFFSET))(this);
		}

		::System::Void StopLookAt(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_STOPLOOKAT_OFFSET))(this, a1);
		}

		::System::Void SetNeckIKTargetPosition(::UnityEngine::Vector3 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_SETNECKIKTARGETPOSITION_OFFSET))(this, a1, a2);
		}

		::System::Void SetNeckIKEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_SETNECKIKENABLED_OFFSET))(this, a1);
		}

		::System::Void CollectColliders()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_COLLECTCOLLIDERS_OFFSET))(this);
		}

		::System::Boolean IsInteractCollider(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_ISINTERACTCOLLIDER_OFFSET))(this, a1);
		}

		::System::Boolean IsBallFetchCollider(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_ISBALLFETCHCOLLIDER_OFFSET))(this, a1);
		}

		::System::Boolean IsMouthCollider(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_ISMOUTHCOLLIDER_OFFSET))(this, a1);
		}

		::System::Void SetNeckIKTipBone(::UnityEngine::Transform* a1, ::System::Int32 a2, ::RPG::Client::AttachPointMapping* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32, ::RPG::Client::AttachPointMapping*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_SETNECKIKTIPBONE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetMouthColliderEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_SETMOUTHCOLLIDERENABLED_OFFSET))(this, a1);
		}

		::System::Void SetBallFetchColliderEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_SETBALLFETCHCOLLIDERENABLED_OFFSET))(this, a1);
		}

		::System::Void DisableAllColliders()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_DISABLEALLCOLLIDERS_OFFSET))(this);
		}
	};
}
