#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/EvaluateAnimationCurve_1.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x161B6230)
#define MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_180D96D05146E077_OFFSET UNITYSDK_OFFSET(0x161B5B30)
#define MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_627557CE4CD0ABB4_OFFSET UNITYSDK_OFFSET(0x161B5A90)
#define MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x161B6340)
#define MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x161B6350)
#define MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_A6F875702993FA31_OFFSET UNITYSDK_OFFSET(0x161B57C0)
#define MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x161B6300)
#define MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_CEE72EAC18ECC163_OFFSET UNITYSDK_OFFSET(0x161B61D0)
#define MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_D5CE98C81E7D70E3_OFFSET UNITYSDK_OFFSET(0x161B6180)
#define MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_E9B750BB61FFD0D0_OFFSET UNITYSDK_OFFSET(0x161B59B0)
#define MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_F7E4906784B9935A_OFFSET UNITYSDK_OFFSET(0x161B5E20)
#define MOLEMOLE_EFFECTSIMULATE_FLOATCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x161B5750)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int FloatCurve_TypeDefinitionIndex = 64340;

	class FloatCurve : public ::MoleMole::EffectSimulate::EvaluateAnimationCurve_1<::System::Single>
	{
	public:
		::System::Boolean xUseCurve; // 0x90
		::UnityEngine::AnimationCurve* xCurve; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FLOATCURVE__CTOR_OFFSET))(this);
		}

		::System::Single Method_4_A6F875702993FA31(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_A6F875702993FA31_OFFSET))(this, a1, a2);
		}

		::System::Single Method_4_627557CE4CD0ABB4(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_627557CE4CD0ABB4_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_4_180D96D05146E077(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_180D96D05146E077_OFFSET))(this, a1);
		}

		::System::Void Method_4_F7E4906784B9935A(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_F7E4906784B9935A_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationCurve* Method_4_D5CE98C81E7D70E3(::System::Int32 a1)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_D5CE98C81E7D70E3_OFFSET))(this, a1);
		}

		::System::Void Method_4_CEE72EAC18ECC163(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_CEE72EAC18ECC163_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_151E25A63D14DDB0_OFFSET))(this);
		}

		::System::Void Method_4_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Single Method_4_E9B750BB61FFD0D0(::System::Single a1, ::System::Single a2, ::System::Boolean a3, ::UnityEngine::AnimationCurve* a4, ::UnityEngine::AnimationCurve* a5, ::UnityEngine::AnimationCurve* a6)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_E9B750BB61FFD0D0_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Method_4_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_832295EC279E5994_OFFSET))(this);
		}

		::System::String* Method_4_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FLOATCURVE_METHOD_4_88B60F3B95FAA4F1_OFFSET))(this);
		}
	};
}
