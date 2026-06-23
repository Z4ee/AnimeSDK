#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/EvaluateAnimationCurve_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_METHOD_4_2356514D84A0DDE4_OFFSET UNITYSDK_OFFSET(0x19114990)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_METHOD_4_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x19115190)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_METHOD_4_52DF83C4F40068CC_OFFSET UNITYSDK_OFFSET(0x191140D0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x19115210)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_METHOD_4_958E77D3D32E4233_OFFSET UNITYSDK_OFFSET(0x19114920)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_METHOD_4_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x19114FE0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_METHOD_4_9B65AEC684B9E219_OFFSET UNITYSDK_OFFSET(0x19114480)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_METHOD_4_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x19115220)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19115150)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_METHOD_4_E0C2AD9BB46EE35D_OFFSET UNITYSDK_OFFSET(0x19114A00)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_METHOD_4_E49226E55BF3741F_OFFSET UNITYSDK_OFFSET(0x191143C0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_METHOD_4_FAA3010CE1C759D3_OFFSET UNITYSDK_OFFSET(0x191142D0)
#define MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x19114040)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int Vector2Curve_TypeDefinitionIndex = 55584;

	class Vector2Curve : public ::MoleMole::EffectSimulate::EvaluateAnimationCurve_1<::UnityEngine::Vector2>
	{
	public:
		::System::Boolean sameOnVec; // 0x90
		::System::Boolean xUseCurve; // 0x91
		::UnityEngine::AnimationCurve* xCurve; // 0x98
		::System::Boolean yUseCurve; // 0xA0
		::UnityEngine::AnimationCurve* yCurve; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_4_52DF83C4F40068CC(::System::Single a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_METHOD_4_52DF83C4F40068CC_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 Method_4_E49226E55BF3741F(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_METHOD_4_E49226E55BF3741F_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_4_9B65AEC684B9E219(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_METHOD_4_9B65AEC684B9E219_OFFSET))(this, a1);
		}

		::System::Void Method_4_E0C2AD9BB46EE35D(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_METHOD_4_E0C2AD9BB46EE35D_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationCurve* Method_4_2356514D84A0DDE4(::System::Int32 a1)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_METHOD_4_2356514D84A0DDE4_OFFSET))(this, a1);
		}

		::System::Void Method_4_958E77D3D32E4233(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_METHOD_4_958E77D3D32E4233_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_97D83E4CB3B11935()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_METHOD_4_97D83E4CB3B11935_OFFSET))(this);
		}

		::System::Void Method_4_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_METHOD_4_CA373AA1C7054598_OFFSET))(this);
		}

		::System::String* Method_4_35EA095E1AFDD9C8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_METHOD_4_35EA095E1AFDD9C8_OFFSET))(this);
		}

		::System::Void Method_4_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_METHOD_4_832295EC279E5994_OFFSET))(this);
		}

		::System::Single Method_4_FAA3010CE1C759D3(::System::Single a1, ::System::Single a2, ::System::Boolean a3, ::UnityEngine::AnimationCurve* a4, ::UnityEngine::AnimationCurve* a5, ::UnityEngine::AnimationCurve* a6)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_METHOD_4_FAA3010CE1C759D3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Method_4_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_VECTOR2CURVE_METHOD_4_CA373AA1C7054598_1_OFFSET))(this);
		}
	};
}
