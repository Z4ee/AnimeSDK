#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/MoveDirection.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client { class GridBasedEventData; }
namespace RPG::Client { class UIController; }
namespace UnityEngine::EventSystems { class AxisEventData; }
namespace UnityEngine::Events { template <typename T> class UnityEvent_1; }

#define RPG_CLIENT_GRIDBASEDMOVEMENT_DISABLEREPEATMOVEONCE_OFFSET UNITYSDK_OFFSET(0xA43FD90)
#define RPG_CLIENT_GRIDBASEDMOVEMENT_ENABLETWOAXISMOVE_OFFSET UNITYSDK_OFFSET(0xA43FDD0)
#define RPG_CLIENT_GRIDBASEDMOVEMENT_GET_ONMOVE_OFFSET UNITYSDK_OFFSET(0xA43FD30)
#define RPG_CLIENT_GRIDBASEDMOVEMENT_INIT_OFFSET UNITYSDK_OFFSET(0xA43FD40)
#define RPG_CLIENT_GRIDBASEDMOVEMENT_UNITYENGINE_EVENTSYSTEMS_IMOVEHANDLER_ONMOVE_OFFSET UNITYSDK_OFFSET(0xA440570)
#define RPG_CLIENT_GRIDBASEDMOVEMENT_UPDATE_OFFSET UNITYSDK_OFFSET(0xA43FE20)
#define RPG_CLIENT_GRIDBASEDMOVEMENT__CONVERT2VECTOR_OFFSET UNITYSDK_OFFSET(0xA440890)
#define RPG_CLIENT_GRIDBASEDMOVEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0xA440930)
#define RPG_CLIENT_GRIDBASEDMOVEMENT__DETERMINEMOVEDIR_OFFSET UNITYSDK_OFFSET(0xA440420)
#define RPG_CLIENT_GRIDBASEDMOVEMENT__TRYGETAXISVALUE_OFFSET UNITYSDK_OFFSET(0xA440070)

namespace RPG::Client
{
	inline static constexpr unsigned int GridBasedMovement_TypeDefinitionIndex = 66835;

	class GridBasedMovement : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Events::UnityEvent_1<::RPG::Client::GridBasedEventData*>* _OnMove_k__BackingField; // 0x18
		::System::Boolean UseUnityStickMove; // 0x20
		::System::Single MoveSpeed; // 0x24
		::System::Single MoveThreshold; // 0x28
		::System::Single FirstMoveThreshold; // 0x2C
		::RPG::Client::GridBasedEventData* _EventData; // 0x30
		::RPG::Client::UIController* _OwnerController; // 0x38
		::UnityEngine::Vector2 _MovingVector; // 0x40
		::System::Boolean _IsMoving; // 0x48
		::System::Boolean _DisableRepeatMoveOnce; // 0x49
		::System::Boolean _EnableTwoAxisMove; // 0x4A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDBASEDMOVEMENT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Events::UnityEvent_1<::RPG::Client::GridBasedEventData*>* get_OnMove()
		{
			return ((::UnityEngine::Events::UnityEvent_1<::RPG::Client::GridBasedEventData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDBASEDMOVEMENT_GET_ONMOVE_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::UIController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDBASEDMOVEMENT_INIT_OFFSET))(this, controller);
		}

		::System::Void DisableRepeatMoveOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDBASEDMOVEMENT_DISABLEREPEATMOVEONCE_OFFSET))(this);
		}

		::System::Void EnableTwoAxisMove(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDBASEDMOVEMENT_ENABLETWOAXISMOVE_OFFSET))(this, enable);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDBASEDMOVEMENT_UPDATE_OFFSET))(this);
		}

		::System::Void UnityEngine_EventSystems_IMoveHandler_OnMove(::UnityEngine::EventSystems::AxisEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDBASEDMOVEMENT_UNITYENGINE_EVENTSYSTEMS_IMOVEHANDLER_ONMOVE_OFFSET))(this, eventData);
		}

		::UnityEngine::Vector2Int _Convert2Vector(::UnityEngine::EventSystems::MoveDirection dir)
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID, ::UnityEngine::EventSystems::MoveDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDBASEDMOVEMENT__CONVERT2VECTOR_OFFSET))(this, dir);
		}

		::System::Boolean _TryGetAxisValue(::UnityEngine::Vector2& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDBASEDMOVEMENT__TRYGETAXISVALUE_OFFSET))(this, value);
		}

		::UnityEngine::Vector2Int _DetermineMoveDir(::UnityEngine::Vector2 raw, ::System::Single threshold)
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDBASEDMOVEMENT__DETERMINEMOVEDIR_OFFSET))(this, raw, threshold);
		}
	};
}
