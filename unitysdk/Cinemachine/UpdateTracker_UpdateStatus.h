#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/UpdateTracker_UpdateClock.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

#define CINEMACHINE_UPDATETRACKER_UPDATESTATUS_GET_PREFERREDUPDATE_OFFSET UNITYSDK_OFFSET(0x1D218B50)
#define CINEMACHINE_UPDATETRACKER_UPDATESTATUS_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1D2185D0)
#define CINEMACHINE_UPDATETRACKER_UPDATESTATUS_SET_PREFERREDUPDATE_OFFSET UNITYSDK_OFFSET(0x1D218B60)
#define CINEMACHINE_UPDATETRACKER_UPDATESTATUS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D218940)

namespace Cinemachine
{
	inline static constexpr unsigned int UpdateTracker_UpdateStatus_TypeDefinitionIndex = 37699;

	class UpdateTracker_UpdateStatus : public ::System::Object
	{
	public:
		// static const ::System::Int32 kWindowSize = 0x1E; // 0x0
		::System::Int32 lastFrameUpdated; // 0x10
		::UnityEngine::Matrix4x4 lastPos; // 0x14
		::System::Int32 numWindowFixedUpdateMoves; // 0x54
		::Cinemachine::UpdateTracker_UpdateClock _PreferredUpdate_k__BackingField; // 0x58
		::System::Int32 numWindows; // 0x5C
		::System::Int32 windowStart; // 0x60
		::System::Int32 numWindowLateUpdateMoves; // 0x64

		::System::Void _ctor(::System::Int32 a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CINEMACHINE_UPDATETRACKER_UPDATESTATUS__CTOR_OFFSET))(this, a1, a2);
		}

		::Cinemachine::UpdateTracker_UpdateClock get_PreferredUpdate()
		{
			return ((::Cinemachine::UpdateTracker_UpdateClock(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UPDATETRACKER_UPDATESTATUS_GET_PREFERREDUPDATE_OFFSET))(this);
		}

		::System::Void set_PreferredUpdate(::Cinemachine::UpdateTracker_UpdateClock a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::UpdateTracker_UpdateClock))((::PBYTE)hIl2Cpp + CINEMACHINE_UPDATETRACKER_UPDATESTATUS_SET_PREFERREDUPDATE_OFFSET))(this, a1);
		}

		::System::Void OnUpdate(::System::Int32 a1, ::Cinemachine::UpdateTracker_UpdateClock a2, ::UnityEngine::Matrix4x4 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Cinemachine::UpdateTracker_UpdateClock, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CINEMACHINE_UPDATETRACKER_UPDATESTATUS_ONUPDATE_OFFSET))(this, a1, a2, a3);
		}
	};
}
