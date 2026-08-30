#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::ActivityAlley { class AlleyPackComponent; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE_ENTER_OFFSET UNITYSDK_OFFSET(0xC4BA6D0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE_EXIT_OFFSET UNITYSDK_OFFSET(0xC4BC820)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE_TICK_OFFSET UNITYSDK_OFFSET(0xC4BAA50)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE__CALCULATEINTERSECTPOS_OFFSET UNITYSDK_OFFSET(0xC4BD690)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE__CALCULATEPOS_OFFSET UNITYSDK_OFFSET(0xC4BD530)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE__CLEARSPEEDQUEUE_OFFSET UNITYSDK_OFFSET(0xC4BA9E0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xC4B57D0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE__GETMAXSPEED_OFFSET UNITYSDK_OFFSET(0xC4BCA60)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE__TICKJOYSTICKINPUT_OFFSET UNITYSDK_OFFSET(0xC4BAB20)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE__TICKMOUSEINPUT_OFFSET UNITYSDK_OFFSET(0xC4BB490)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE__TRYRECORDSPEED_OFFSET UNITYSDK_OFFSET(0xC4BC8B0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE__UPDATEOWNERPOS_OFFSET UNITYSDK_OFFSET(0xC4BCFB0)

namespace RPG::Client::ActivityAlley
{
	inline static constexpr unsigned int AlleyPackComponent_AlleyPackDragState_TypeDefinitionIndex = 73992;

	class AlleyPackComponent_AlleyPackDragState : public ::System::Object
	{
	public:
		::RPG::Client::ActivityAlley::AlleyPackComponent* _Owner; // 0x10
		::System::Collections::Generic::Queue_1<::System::Single>* _SpeedQueue; // 0x18
		::System::Single _BoundOffsetY; // 0x20
		::UnityEngine::Vector3 _DragOffset; // 0x24

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
