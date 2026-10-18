#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_LOOKATTILTDATA_GET_CURRENTTILT_OFFSET UNITYSDK_OFFSET(0x1D00)
#define RPG_CLIENT_LOOKATTILTDATA_GET_CURRENTYTILT_OFFSET UNITYSDK_OFFSET(0x1D10)
#define RPG_CLIENT_LOOKATTILTDATA_GET_REALBLENDTIME_OFFSET UNITYSDK_OFFSET(0xEA790)
#define RPG_CLIENT_LOOKATTILTDATA_GET_TARGETTILT_OFFSET UNITYSDK_OFFSET(0x1D20)
#define RPG_CLIENT_LOOKATTILTDATA_GET_TILTCURVE_OFFSET UNITYSDK_OFFSET(0x94D0)
#define RPG_CLIENT_LOOKATTILTDATA_METHOD_2_1885BB151FF7D3C5_OFFSET UNITYSDK_OFFSET(0xEA7F0)
#define RPG_CLIENT_LOOKATTILTDATA_METHOD_2_7F6AA98BD4EEC9D6_OFFSET UNITYSDK_OFFSET(0xEA800)
#define RPG_CLIENT_LOOKATTILTDATA_METHOD_2_D259C291033FAF75_OFFSET UNITYSDK_OFFSET(0xEA890)
#define RPG_CLIENT_LOOKATTILTDATA_SET_CURRENTTILT_OFFSET UNITYSDK_OFFSET(0x14EA0)
#define RPG_CLIENT_LOOKATTILTDATA_SET_CURRENTYTILT_OFFSET UNITYSDK_OFFSET(0xEA770)
#define RPG_CLIENT_LOOKATTILTDATA_SET_TARGETTILT_OFFSET UNITYSDK_OFFSET(0xEA780)
#define RPG_CLIENT_LOOKATTILTDATA_SET_TILTCURVE_OFFSET UNITYSDK_OFFSET(0x94E0)

namespace RPG::Client
{
	inline static constexpr unsigned int LookAtTiltData_TypeDefinitionIndex = 68474;

	struct alignas(8) LookAtTiltData
	{
		::System::Single _CurrentTilt_k__BackingField; // 0x10
		::System::Single _CurrentYTilt_k__BackingField; // 0x14
		::System::Single _TargetTilt_k__BackingField; // 0x18
		::UnityEngine::AnimationCurve* _TiltCurve_k__BackingField; // 0x20
		::System::Single tiltLimit; // 0x28
		::System::Single tiltRotateYLimit; // 0x2C
		::UnityEngine::AnimationCurve* tiltRotateYBlendCurve; // 0x30
		::System::Single blendTime; // 0x38
		::System::Single spineRotationWeight; // 0x3C
		::System::Single neckRotationWeight; // 0x40
		::System::Single _blendSpeed; // 0x44
		::System::Single _overrideBlendTime; // 0x48
		::System::Single _curveTimer; // 0x4C
		::System::Single _preTiltByCurve; // 0x50

		::System::Single get_CurrentTilt()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTILTDATA_GET_CURRENTTILT_OFFSET))(this);
		}

		::System::Void set_CurrentTilt(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTILTDATA_SET_CURRENTTILT_OFFSET))(this, a1);
		}

		::System::Single get_CurrentYTilt()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTILTDATA_GET_CURRENTYTILT_OFFSET))(this);
		}

		::System::Void set_CurrentYTilt(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTILTDATA_SET_CURRENTYTILT_OFFSET))(this, a1);
		}

		::System::Single get_TargetTilt()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTILTDATA_GET_TARGETTILT_OFFSET))(this);
		}

		::System::Void set_TargetTilt(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTILTDATA_SET_TARGETTILT_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationCurve* get_TiltCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTILTDATA_GET_TILTCURVE_OFFSET))(this);
		}

		::System::Void set_TiltCurve(::UnityEngine::AnimationCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTILTDATA_SET_TILTCURVE_OFFSET))(this, a1);
		}

		::System::Single get_RealBlendTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTILTDATA_GET_REALBLENDTIME_OFFSET))(this);
		}

		::System::Void Method_2_1885BB151FF7D3C5(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTILTDATA_METHOD_2_1885BB151FF7D3C5_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_7F6AA98BD4EEC9D6(::System::Single a1, ::UnityEngine::AnimationCurve* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTILTDATA_METHOD_2_7F6AA98BD4EEC9D6_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_D259C291033FAF75(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTILTDATA_METHOD_2_D259C291033FAF75_OFFSET))(this, a1);
		}
	};
}
