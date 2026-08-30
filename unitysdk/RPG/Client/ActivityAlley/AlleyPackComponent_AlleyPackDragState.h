#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::ActivityAlley { class AlleyPackComponent; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE_ENTER_OFFSET UNITYSDK_OFFSET(0x1AD153C0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE_EXIT_OFFSET UNITYSDK_OFFSET(0x1AD17510)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE_TICK_OFFSET UNITYSDK_OFFSET(0x1AD15740)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE__CALCULATEINTERSECTPOS_OFFSET UNITYSDK_OFFSET(0x1AD18390)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE__CALCULATEPOS_OFFSET UNITYSDK_OFFSET(0x1AD18230)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE__CLEARSPEEDQUEUE_OFFSET UNITYSDK_OFFSET(0x1AD156D0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD10490)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE__GETMAXSPEED_OFFSET UNITYSDK_OFFSET(0x1AD17760)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE__TICKJOYSTICKINPUT_OFFSET UNITYSDK_OFFSET(0x1AD15810)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE__TICKMOUSEINPUT_OFFSET UNITYSDK_OFFSET(0x1AD16180)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE__TRYRECORDSPEED_OFFSET UNITYSDK_OFFSET(0x1AD175A0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE__UPDATEOWNERPOS_OFFSET UNITYSDK_OFFSET(0x1AD17CB0)

namespace RPG::Client::ActivityAlley
{
	inline static constexpr unsigned int AlleyPackComponent_AlleyPackDragState_TypeDefinitionIndex = 73991;

	class AlleyPackComponent_AlleyPackDragState : public ::System::Object
	{
	public:
		::RPG::Client::ActivityAlley::AlleyPackComponent* _Owner; // 0x10
		::System::Collections::Generic::Queue_1<::System::Single>* _SpeedQueue; // 0x18
		::UnityEngine::Vector3 _DragOffset; // 0x20
		::System::Single _BoundOffsetY; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE__CTOR_OFFSET))(this);
		}

		::System::Void Enter(::RPG::Client::ActivityAlley::AlleyPackComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE_ENTER_OFFSET))(this, a1);
		}

		::System::Void Tick(::RPG::Client::ActivityAlley::AlleyPackComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE_TICK_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE_EXIT_OFFSET))(this);
		}

		::System::Void _TickJoyStickInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE__TICKJOYSTICKINPUT_OFFSET))(this);
		}

		::System::Void _TickMouseInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE__TICKMOUSEINPUT_OFFSET))(this);
		}

		::UnityEngine::Vector3 _CalculatePos(::UnityEngine::Vector3 a1, ::UnityEngine::Bounds& a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Bounds&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE__CALCULATEPOS_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 _CalculateIntersectPos(::UnityEngine::Vector3 a1, ::UnityEngine::Ray a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Ray))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE__CALCULATEINTERSECTPOS_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateOwnerPos(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE__UPDATEOWNERPOS_OFFSET))(this, a1);
		}

		::System::Void _TryRecordSpeed(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE__TRYRECORDSPEED_OFFSET))(this, a1);
		}

		::System::Single _GetMaxSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE__GETMAXSPEED_OFFSET))(this);
		}

		::System::Void _ClearSpeedQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE__CLEARSPEEDQUEUE_OFFSET))(this);
		}
	};
}
