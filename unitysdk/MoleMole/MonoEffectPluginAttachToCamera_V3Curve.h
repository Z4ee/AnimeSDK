#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x3D1B20)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_GET_STARTVALUE_OFFSET UNITYSDK_OFFSET(0x5C7760)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_GET_STOPVALUE_OFFSET UNITYSDK_OFFSET(0x6B8890)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_METHOD_2_2C825E716CE9F2F9_OFFSET UNITYSDK_OFFSET(0x6B8A00)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_METHOD_2_B4859502A23E740B_OFFSET UNITYSDK_OFFSET(0x10804100)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_METHOD_2_DF64B90BA25AAE64_OFFSET UNITYSDK_OFFSET(0x6B88D0)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x6B88C0)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_SET_STARTVALUE_OFFSET UNITYSDK_OFFSET(0x6B8880)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_SET_STOPVALUE_OFFSET UNITYSDK_OFFSET(0x6B88B0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginAttachToCamera_V3Curve_TypeDefinitionIndex = 56272;

	struct alignas(8) MonoEffectPluginAttachToCamera_V3Curve
	{
		::UnityEngine::AnimationCurve* xCurve; // 0x10
		::UnityEngine::AnimationCurve* yCurve; // 0x18
		::UnityEngine::AnimationCurve* zCurve; // 0x20
		::UnityEngine::Vector3 _startValue_k__BackingField; // 0x28
		::UnityEngine::Vector3 _stopValue_k__BackingField; // 0x34
		::UnityEngine::Vector2 _duration_k__BackingField; // 0x40

		::UnityEngine::Vector3 get_startValue()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_GET_STARTVALUE_OFFSET))(this);
		}

		::System::Void set_startValue(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_SET_STARTVALUE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_stopValue()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_GET_STOPVALUE_OFFSET))(this);
		}

		::System::Void set_stopValue(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_SET_STOPVALUE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_duration()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_GET_DURATION_OFFSET))(this);
		}

		::System::Void set_duration(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_SET_DURATION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_2_DF64B90BA25AAE64(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_METHOD_2_DF64B90BA25AAE64_OFFSET))(this, a1);
		}

		static ::System::Void Method_2_B4859502A23E740B(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_METHOD_2_B4859502A23E740B_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void Method_2_2C825E716CE9F2F9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_V3CURVE_METHOD_2_2C825E716CE9F2F9_OFFSET))(this);
		}
	};
}
