#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class SkirtIK;
namespace RPG::Client { class EmoEyeCtrl; }
namespace RPG::Client { class LookAtIK; }
namespace RPG::Client { class LookAtTargetConstraint; }
namespace RPG::Client { class StateIdleTimer; }
namespace RPG::GameCore { class UI3DCharacterDataComponent; }
namespace System { class String; }
namespace UnityChan { class SpringManager; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MANIKINLOOKATCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x15C17620)
#define RPG_CLIENT_MANIKINLOOKATCONTROLLER_DISABLELOOKAT_OFFSET UNITYSDK_OFFSET(0x15C19AE0)
#define RPG_CLIENT_MANIKINLOOKATCONTROLLER_DOLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15C197C0)
#define RPG_CLIENT_MANIKINLOOKATCONTROLLER_ENABLELOOKAT_OFFSET UNITYSDK_OFFSET(0x15C19A20)
#define RPG_CLIENT_MANIKINLOOKATCONTROLLER_GET_STATICENABLED_OFFSET UNITYSDK_OFFSET(0x15C17530)
#define RPG_CLIENT_MANIKINLOOKATCONTROLLER_METHOD_5_45F2459C967E3311_OFFSET UNITYSDK_OFFSET(0x15C196B0)
#define RPG_CLIENT_MANIKINLOOKATCONTROLLER_METHOD_5_5EB6B43A59A0A89B_OFFSET UNITYSDK_OFFSET(0x15C17A90)
#define RPG_CLIENT_MANIKINLOOKATCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x15C179F0)
#define RPG_CLIENT_MANIKINLOOKATCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15C17920)
#define RPG_CLIENT_MANIKINLOOKATCONTROLLER_SETOWNER_OFFSET UNITYSDK_OFFSET(0x15C175D0)
#define RPG_CLIENT_MANIKINLOOKATCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x15C17860)
#define RPG_CLIENT_MANIKINLOOKATCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15C19BA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ManikinLookAtController_TypeDefinitionIndex = 65456;

	class ManikinLookAtController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::System::String*>* LookAtStates; // 0x18
		::System::Single lookWaitTime; // 0x20
		::System::Single idleShowWaitTime; // 0x24
		::System::Single upWeight; // 0x28
		::System::Single forwardWeight; // 0x2C
		::System::Single rightWeight; // 0x30
		::System::Single OutOfConstraintTimer; // 0x34
		::RPG::Client::LookAtTargetConstraint* Constraint; // 0x38
		::RPG::Client::LookAtTargetConstraint* AnotherConstraint; // 0x40
		::System::Single ConstraintSpeed; // 0x48
		::UnityEngine::AnimationCurve* ConstraintCurve; // 0x50
		::System::Single OutConstraintSpeed; // 0x58
		::UnityEngine::AnimationCurve* OutConstraintCurve; // 0x60
		::RPG::GameCore::UI3DCharacterDataComponent* Field_5_13; // 0x68
		::RPG::Client::LookAtIK* Field_5_14; // 0x70
		::RPG::Client::EmoEyeCtrl* Field_5_15; // 0x78
		::SkirtIK* Field_5_16; // 0x80
		::UnityChan::SpringManager* Field_5_17; // 0x88
		::UnityEngine::Animator* Field_5_18; // 0x90
		::RPG::Client::StateIdleTimer* Field_5_19; // 0x98
		::System::Single Field_5_20; // 0xA0
		::UnityEngine::Transform* Field_5_21; // 0xA8
		::System::Single Field_5_22; // 0xB0
		::Il2CppArray<::System::Int32>* Field_5_23; // 0xB8
		::System::Single Field_5_24; // 0xC0
		::System::Nullable_1<::UnityEngine::Vector3> Field_5_25; // 0xC4
		::System::Nullable_1<::UnityEngine::Vector3> Field_5_26; // 0xD4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANIKINLOOKATCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Boolean get_StaticEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MANIKINLOOKATCONTROLLER_GET_STATICENABLED_OFFSET))();
		}

		::System::Void SetOwner(::RPG::GameCore::UI3DCharacterDataComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UI3DCharacterDataComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANIKINLOOKATCONTROLLER_SETOWNER_OFFSET))(this, a1);
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

		::System::Void Method_5_5EB6B43A59A0A89B(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANIKINLOOKATCONTROLLER_METHOD_5_5EB6B43A59A0A89B_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_45F2459C967E3311(::System::Boolean& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANIKINLOOKATCONTROLLER_METHOD_5_45F2459C967E3311_OFFSET))(this, a1);
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
	};
}
