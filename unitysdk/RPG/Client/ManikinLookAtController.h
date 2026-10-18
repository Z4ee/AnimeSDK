#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1129;
class SkirtIK;
namespace RPG::Client { class EmoEyeCtrl; }
namespace RPG::Client { class LookAtIK; }
namespace RPG::Client { class LookAtTargetConstraint; }
namespace RPG::Client { class StateIdleTimer; }
namespace System { class String; }
namespace UnityChan { class SpringManager; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MANIKINLOOKATCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xD513360)
#define RPG_CLIENT_MANIKINLOOKATCONTROLLER_DISABLELOOKAT_OFFSET UNITYSDK_OFFSET(0xD515B00)
#define RPG_CLIENT_MANIKINLOOKATCONTROLLER_DOLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD5158B0)
#define RPG_CLIENT_MANIKINLOOKATCONTROLLER_ENABLELOOKAT_OFFSET UNITYSDK_OFFSET(0xD515A40)
#define RPG_CLIENT_MANIKINLOOKATCONTROLLER_GET_ISLOOKATACTIVE_OFFSET UNITYSDK_OFFSET(0xD515CA0)
#define RPG_CLIENT_MANIKINLOOKATCONTROLLER_METHOD_5_50896BDA13FD77D3_OFFSET UNITYSDK_OFFSET(0xD513850)
#define RPG_CLIENT_MANIKINLOOKATCONTROLLER_METHOD_5_D1B1610D231872A2_OFFSET UNITYSDK_OFFSET(0xD5157A0)
#define RPG_CLIENT_MANIKINLOOKATCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD5137A0)
#define RPG_CLIENT_MANIKINLOOKATCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD513690)
#define RPG_CLIENT_MANIKINLOOKATCONTROLLER_SETOWNER_OFFSET UNITYSDK_OFFSET(0xD513310)
#define RPG_CLIENT_MANIKINLOOKATCONTROLLER_SET_ISLOOKATACTIVE_OFFSET UNITYSDK_OFFSET(0xD515CB0)
#define RPG_CLIENT_MANIKINLOOKATCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0xD5135D0)
#define RPG_CLIENT_MANIKINLOOKATCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD515CC0)

namespace RPG::Client
{
	inline static constexpr unsigned int ManikinLookAtController_TypeDefinitionIndex = 68505;

	class ManikinLookAtController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean _IsLookAtActive_k__BackingField; // 0x18
		::Il2CppArray<::System::String*>* LookAtStates; // 0x20
		::System::Single lookWaitTime; // 0x28
		::System::Single idleShowWaitTime; // 0x2C
		::System::Boolean RequireTargetMoveAfterAnimForbid; // 0x30
		::System::Single upWeight; // 0x34
		::System::Single forwardWeight; // 0x38
		::System::Single rightWeight; // 0x3C
		::System::Single OutOfConstraintTimer; // 0x40
		::RPG::Client::LookAtTargetConstraint* Constraint; // 0x48
		::RPG::Client::LookAtTargetConstraint* AnotherConstraint; // 0x50
		::System::Single ConstraintSpeed; // 0x58
		::UnityEngine::AnimationCurve* ConstraintCurve; // 0x60
		::System::Single OutConstraintSpeed; // 0x68
		::UnityEngine::AnimationCurve* OutConstraintCurve; // 0x70
		::Class_0_16E4307DCC419505_1129* MIPMCEJIAMC; // 0x78
		::RPG::Client::LookAtIK* FJLAEGFIMCK; // 0x80
		::RPG::Client::EmoEyeCtrl* KNOIJPMAFOB; // 0x88
		::SkirtIK* KOOBIGFLPKI; // 0x90
		::UnityChan::SpringManager* GKJGKIPPAIP; // 0x98
		::UnityEngine::Animator* NAHOHKAHBPK; // 0xA0
		::RPG::Client::StateIdleTimer* CPNEGCNHMLA; // 0xA8
		::System::Single JCJAPHGBLPB; // 0xB0
		::UnityEngine::Transform* DEKAPAGCCGL; // 0xB8
		::System::Single JBCLEIBCDJO; // 0xC0
		::Il2CppArray<::System::Int32>* HILDHBAKDFJ; // 0xC8
		::System::Single CBLICFGIKAC; // 0xD0
		::System::Nullable_1<::UnityEngine::Vector3> IPEKFACFJGG; // 0xD4
		::System::Nullable_1<::UnityEngine::Vector3> IIBBCLPNNDE; // 0xE4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANIKINLOOKATCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void SetOwner(::Class_0_16E4307DCC419505_1129* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1129*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANIKINLOOKATCONTROLLER_SETOWNER_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANIKINLOOKATCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANIKINLOOKATCONTROLLER_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANIKINLOOKATCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANIKINLOOKATCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Method_5_50896BDA13FD77D3(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANIKINLOOKATCONTROLLER_METHOD_5_50896BDA13FD77D3_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_D1B1610D231872A2(::System::Boolean& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANIKINLOOKATCONTROLLER_METHOD_5_D1B1610D231872A2_OFFSET))(this, a1);
		}

		::System::Void DoLateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANIKINLOOKATCONTROLLER_DOLATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void EnableLookAt(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANIKINLOOKATCONTROLLER_ENABLELOOKAT_OFFSET))(this, a1);
		}

		::System::Void DisableLookAt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANIKINLOOKATCONTROLLER_DISABLELOOKAT_OFFSET))(this);
		}

		::System::Boolean get_IsLookAtActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANIKINLOOKATCONTROLLER_GET_ISLOOKATACTIVE_OFFSET))(this);
		}

		::System::Void set_IsLookAtActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANIKINLOOKATCONTROLLER_SET_ISLOOKATACTIVE_OFFSET))(this, a1);
		}
	};
}
