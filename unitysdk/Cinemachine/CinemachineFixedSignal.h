#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/SignalSourceAsset.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define CINEMACHINE_CINEMACHINEFIXEDSIGNAL_AXISDURATION_OFFSET UNITYSDK_OFFSET(0x12B7CF90)
#define CINEMACHINE_CINEMACHINEFIXEDSIGNAL_AXISVALUE_OFFSET UNITYSDK_OFFSET(0x12B7D100)
#define CINEMACHINE_CINEMACHINEFIXEDSIGNAL_GETSIGNAL_OFFSET UNITYSDK_OFFSET(0x12B7D020)
#define CINEMACHINE_CINEMACHINEFIXEDSIGNAL_GET_SIGNALDURATION_OFFSET UNITYSDK_OFFSET(0x12B7CDF0)
#define CINEMACHINE_CINEMACHINEFIXEDSIGNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x12B7D150)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineFixedSignal_TypeDefinitionIndex = 36626;

	class CinemachineFixedSignal : public ::Cinemachine::SignalSourceAsset
	{
	public:
		::UnityEngine::AnimationCurve* m_XCurve; // 0x18
		::UnityEngine::AnimationCurve* m_YCurve; // 0x20
		::UnityEngine::AnimationCurve* m_ZCurve; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFIXEDSIGNAL__CTOR_OFFSET))(this);
		}

		::System::Single get_SignalDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFIXEDSIGNAL_GET_SIGNALDURATION_OFFSET))(this);
		}

		::System::Single AxisDuration(::UnityEngine::AnimationCurve* axis)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFIXEDSIGNAL_AXISDURATION_OFFSET))(this, axis);
		}

		::System::Void GetSignal(::System::Single timeSinceSignalStart, ::UnityEngine::Vector3& pos, ::UnityEngine::Quaternion& rot)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFIXEDSIGNAL_GETSIGNAL_OFFSET))(this, timeSinceSignalStart, pos, rot);
		}

		::System::Single AxisValue(::UnityEngine::AnimationCurve* axis, ::System::Single time)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFIXEDSIGNAL_AXISVALUE_OFFSET))(this, axis, time);
		}
	};
}
