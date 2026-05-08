#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/EvaluateAnimationCurve_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_METHOD_4_011F18E07064382B_OFFSET UNITYSDK_OFFSET(0x16D2E350)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_METHOD_4_0173DC4321843C93_OFFSET UNITYSDK_OFFSET(0x16D2E740)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_METHOD_4_31BBB9AD8D2C3DC7_OFFSET UNITYSDK_OFFSET(0x16D2EDD0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_METHOD_4_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x16D2F6D0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_METHOD_4_52A48733D0A3CF08_OFFSET UNITYSDK_OFFSET(0x16D2E840)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_METHOD_4_5D1112DA42375E36_OFFSET UNITYSDK_OFFSET(0x16D2EE40)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x16D2F6C0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_METHOD_4_8F089EFDA7DA3A98_OFFSET UNITYSDK_OFFSET(0x16D2ED50)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_METHOD_4_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x16D2F790)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_METHOD_4_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x16D2F7D0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16D2F750)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_METHOD_4_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x16D2F4C0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_METHOD_4_FAA3010CE1C759D3_OFFSET UNITYSDK_OFFSET(0x16D2E650)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x16D2E290)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int Vector3Curve_TypeDefinitionIndex = 77702;

	class Vector3Curve : public ::MoleMole::EffectSimulate::EvaluateAnimationCurve_1<::UnityEngine::Vector3>
	{
	public:
		::System::Boolean sameOnVec; // 0x90
		::System::Boolean xUseCurve; // 0x91
		::UnityEngine::AnimationCurve* xCurve; // 0x98
		::System::Boolean yUseCurve; // 0xA0
		::UnityEngine::AnimationCurve* yCurve; // 0xA8
		::System::Boolean zUseCurve; // 0xB0
		::UnityEngine::AnimationCurve* zCurve; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_4_011F18E07064382B(::System::Single a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_METHOD_4_011F18E07064382B_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Method_4_0173DC4321843C93(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_METHOD_4_0173DC4321843C93_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_4_52A48733D0A3CF08(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_METHOD_4_52A48733D0A3CF08_OFFSET))(this, a1);
		}

		::System::Void Method_4_5D1112DA42375E36(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_METHOD_4_5D1112DA42375E36_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationCurve* Method_4_31BBB9AD8D2C3DC7(::System::Int32 a1)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_METHOD_4_31BBB9AD8D2C3DC7_OFFSET))(this, a1);
		}

		::System::Void Method_4_8F089EFDA7DA3A98(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_METHOD_4_8F089EFDA7DA3A98_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_D7852DE078ACC1F1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_METHOD_4_D7852DE078ACC1F1_OFFSET))(this);
		}

		::System::Void Method_4_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_METHOD_4_832295EC279E5994_OFFSET))(this);
		}

		::System::Single Method_4_FAA3010CE1C759D3(::System::Single a1, ::System::Single a2, ::System::Boolean a3, ::UnityEngine::AnimationCurve* a4, ::UnityEngine::AnimationCurve* a5, ::UnityEngine::AnimationCurve* a6)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_METHOD_4_FAA3010CE1C759D3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::String* Method_4_35EA095E1AFDD9C8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_METHOD_4_35EA095E1AFDD9C8_OFFSET))(this);
		}

		::System::Void Method_4_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_METHOD_4_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_4_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_METHOD_4_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_4_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR3CURVE_METHOD_4_CA373AA1C7054598_2_OFFSET))(this);
		}
	};
}
