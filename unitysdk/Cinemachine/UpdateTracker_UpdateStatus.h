#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/UpdateTracker_UpdateClock.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

#define CINEMACHINE_UPDATETRACKER_UPDATESTATUS_GET_PREFERREDUPDATE_OFFSET UNITYSDK_OFFSET(0x1E554910)
#define CINEMACHINE_UPDATETRACKER_UPDATESTATUS_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E554980)
#define CINEMACHINE_UPDATETRACKER_UPDATESTATUS_SET_PREFERREDUPDATE_OFFSET UNITYSDK_OFFSET(0x1E554920)
#define CINEMACHINE_UPDATETRACKER_UPDATESTATUS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E554930)

namespace Cinemachine
{
	inline static constexpr unsigned int UpdateTracker_UpdateStatus_TypeDefinitionIndex = 34164;

	class UpdateTracker_UpdateStatus : public ::System::Object
	{
	public:
		// static const ::System::Int32 kWindowSize = 0x1E; // 0x0
		::System::Int32 lastFrameUpdated; // 0x10
		::System::Int32 numWindowFixedUpdateMoves; // 0x14
		::System::Int32 windowStart; // 0x18
		::System::Int32 numWindowLateUpdateMoves; // 0x1C
		::Cinemachine::UpdateTracker_UpdateClock _PreferredUpdate_k__BackingField; // 0x20
		::System::Int32 numWindows; // 0x24
		::UnityEngine::Matrix4x4 lastPos; // 0x28

		::System::Void _ctor(::System::Int32 currentFrame, ::UnityEngine::Matrix4x4 pos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CINEMACHINE_UPDATETRACKER_UPDATESTATUS__CTOR_OFFSET))(this, currentFrame, pos);
		}

		::Cinemachine::UpdateTracker_UpdateClock get_PreferredUpdate()
		{
			return ((::Cinemachine::UpdateTracker_UpdateClock(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UPDATETRACKER_UPDATESTATUS_GET_PREFERREDUPDATE_OFFSET))(this);
		}

		::System::Void set_PreferredUpdate(::Cinemachine::UpdateTracker_UpdateClock value)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::UpdateTracker_UpdateClock))((::PBYTE)hIl2Cpp + CINEMACHINE_UPDATETRACKER_UPDATESTATUS_SET_PREFERREDUPDATE_OFFSET))(this, value);
		}

		::System::Void OnUpdate(::System::Int32 currentFrame, ::Cinemachine::UpdateTracker_UpdateClock currentClock, ::UnityEngine::Matrix4x4 pos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Cinemachine::UpdateTracker_UpdateClock, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CINEMACHINE_UPDATETRACKER_UPDATESTATUS_ONUPDATE_OFFSET))(this, currentFrame, currentClock, pos);
		}
	};
}
