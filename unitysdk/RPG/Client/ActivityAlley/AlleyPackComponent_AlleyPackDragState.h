#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::ActivityAlley { class AlleyPackComponent; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE_ENTER_OFFSET UNITYSDK_OFFSET(0x9AACA60)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE_EXIT_OFFSET UNITYSDK_OFFSET(0x9AAE9F0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE_TICK_OFFSET UNITYSDK_OFFSET(0x9AACC40)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE__CALCULATEINTERSECTPOS_OFFSET UNITYSDK_OFFSET(0x9AAF7C0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE__CALCULATEPOS_OFFSET UNITYSDK_OFFSET(0x9AAF660)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE__CLEARSPEEDQUEUE_OFFSET UNITYSDK_OFFSET(0x9AACBD0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x9AA8C70)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE__GETMAXSPEED_OFFSET UNITYSDK_OFFSET(0x9AAEBC0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE__TICKJOYSTICKINPUT_OFFSET UNITYSDK_OFFSET(0x9AACD10)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE__TICKMOUSEINPUT_OFFSET UNITYSDK_OFFSET(0x9AAD6C0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE__TRYRECORDSPEED_OFFSET UNITYSDK_OFFSET(0x9AAEA80)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE__UPDATEOWNERPOS_OFFSET UNITYSDK_OFFSET(0x9AAF110)

namespace RPG::Client::ActivityAlley
{
	inline static constexpr unsigned int AlleyPackComponent_AlleyPackDragState_TypeDefinitionIndex = 68197;

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

		::System::Void Enter(::RPG::Client::ActivityAlley::AlleyPackComponent* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE_ENTER_OFFSET))(this, owner);
		}

		::System::Void Tick(::RPG::Client::ActivityAlley::AlleyPackComponent* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE_TICK_OFFSET))(this, owner);
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

		::UnityEngine::Vector3 _CalculatePos(::UnityEngine::Vector3 originPos, ::UnityEngine::Bounds& outBound, ::System::Single boundRatio, ::System::Single lerpRatio)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Bounds&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE__CALCULATEPOS_OFFSET))(this, originPos, outBound, boundRatio, lerpRatio);
		}

		::UnityEngine::Vector3 _CalculateIntersectPos(::UnityEngine::Vector3 originPos, ::UnityEngine::Ray ray)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Ray))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE__CALCULATEINTERSECTPOS_OFFSET))(this, originPos, ray);
		}

		::System::Void _UpdateOwnerPos(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE__UPDATEOWNERPOS_OFFSET))(this, position);
		}

		::System::Void _TryRecordSpeed(::UnityEngine::Vector3 beginPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGSTATE__TRYRECORDSPEED_OFFSET))(this, beginPos);
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
