#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMOVEGRIDCONTROLLER_MOVE_OFFSET UNITYSDK_OFFSET(0x1A2C9FE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMOVEGRIDCONTROLLER_RESET_OFFSET UNITYSDK_OFFSET(0x1A2CA140)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMOVEGRIDCONTROLLER_SETMOVEFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A2C9F90)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMOVEGRIDCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x1A2C9D50)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMOVEGRIDCONTROLLER_TESTMOVE_OFFSET UNITYSDK_OFFSET(0x1A2CA1B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMOVEGRIDCONTROLLER_TESTRESET_OFFSET UNITYSDK_OFFSET(0x1A2CA210)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMOVEGRIDCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A2C9DE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMOVEGRIDCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2CA2A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMOVEGRIDCONTROLLER__FINISHMOVE_OFFSET UNITYSDK_OFFSET(0x1A2C9F30)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyMoveGridController_TypeDefinitionIndex = 70881;

	class TrainPartyMoveGridController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::AnimationCurve* Curve; // 0x18
		::System::Single MoveTime; // 0x20
		::UnityEngine::Vector3 _OriginPos; // 0x24
		::System::Action* _FinishCallback; // 0x30
		::System::Single _TotalMoveDistance; // 0x38
		::System::Single _CurMoveTime; // 0x3C
		::System::Boolean _IsMoving; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMOVEGRIDCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMOVEGRIDCONTROLLER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMOVEGRIDCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void SetMoveFinishCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMOVEGRIDCONTROLLER_SETMOVEFINISHCALLBACK_OFFSET))(this, a1);
		}

		::System::Void Move(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMOVEGRIDCONTROLLER_MOVE_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMOVEGRIDCONTROLLER_RESET_OFFSET))(this);
		}

		::System::Void TestMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMOVEGRIDCONTROLLER_TESTMOVE_OFFSET))(this);
		}

		::System::Void TestReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMOVEGRIDCONTROLLER_TESTRESET_OFFSET))(this);
		}

		::System::Void _FinishMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMOVEGRIDCONTROLLER__FINISHMOVE_OFFSET))(this);
		}
	};
}
