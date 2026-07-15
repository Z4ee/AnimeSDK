#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/SignalSourceAsset.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define CINEMACHINE_CINEMACHINEFIXEDSIGNAL_AXISDURATION_OFFSET UNITYSDK_OFFSET(0x1727C830)
#define CINEMACHINE_CINEMACHINEFIXEDSIGNAL_AXISVALUE_OFFSET UNITYSDK_OFFSET(0x1727C9A0)
#define CINEMACHINE_CINEMACHINEFIXEDSIGNAL_GETSIGNAL_OFFSET UNITYSDK_OFFSET(0x1727C8C0)
#define CINEMACHINE_CINEMACHINEFIXEDSIGNAL_GET_SIGNALDURATION_OFFSET UNITYSDK_OFFSET(0x1727C690)
#define CINEMACHINE_CINEMACHINEFIXEDSIGNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1727C9F0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineFixedSignal_TypeDefinitionIndex = 37708;

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

		::System::Single AxisDuration(::UnityEngine::AnimationCurve* a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFIXEDSIGNAL_AXISDURATION_OFFSET))(this, a1);
		}

		::System::Void GetSignal(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFIXEDSIGNAL_GETSIGNAL_OFFSET))(this, a1, a2, a3);
		}

		::System::Single AxisValue(::UnityEngine::AnimationCurve* a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFIXEDSIGNAL_AXISVALUE_OFFSET))(this, a1, a2);
		}
	};
}
