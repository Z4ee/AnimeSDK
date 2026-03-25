#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMOVEGRIDCONTROLLER_MOVE_OFFSET UNITYSDK_OFFSET(0xA605530)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMOVEGRIDCONTROLLER_RESET_OFFSET UNITYSDK_OFFSET(0xA605680)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMOVEGRIDCONTROLLER_SETMOVEFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0xA6054E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMOVEGRIDCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0xA6052B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMOVEGRIDCONTROLLER_TESTMOVE_OFFSET UNITYSDK_OFFSET(0xA6056F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMOVEGRIDCONTROLLER_TESTRESET_OFFSET UNITYSDK_OFFSET(0xA605750)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMOVEGRIDCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xA605340)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMOVEGRIDCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA6057E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMOVEGRIDCONTROLLER__FINISHMOVE_OFFSET UNITYSDK_OFFSET(0xA605490)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyMoveGridController_TypeDefinitionIndex = 61086;

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

		::System::Void SetMoveFinishCallback(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMOVEGRIDCONTROLLER_SETMOVEFINISHCALLBACK_OFFSET))(this, callback);
		}

		::System::Void Move(::System::Single distance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMOVEGRIDCONTROLLER_MOVE_OFFSET))(this, distance);
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
