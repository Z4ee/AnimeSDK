#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Animation/EaseType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }

#define PARADOXNOTION_ANIMATION_EASING_BACKINOUT_OFFSET UNITYSDK_OFFSET(0x1A214050)
#define PARADOXNOTION_ANIMATION_EASING_BACKIN_OFFSET UNITYSDK_OFFSET(0x1A213E50)
#define PARADOXNOTION_ANIMATION_EASING_BACKOUT_OFFSET UNITYSDK_OFFSET(0x1A213F40)
#define PARADOXNOTION_ANIMATION_EASING_BOUNCEINOUT_OFFSET UNITYSDK_OFFSET(0x1A213BF0)
#define PARADOXNOTION_ANIMATION_EASING_BOUNCEIN_OFFSET UNITYSDK_OFFSET(0x1A213880)
#define PARADOXNOTION_ANIMATION_EASING_BOUNCEOUT_OFFSET UNITYSDK_OFFSET(0x1A213A90)
#define PARADOXNOTION_ANIMATION_EASING_CIRCULARINOUT_OFFSET UNITYSDK_OFFSET(0x1A213270)
#define PARADOXNOTION_ANIMATION_EASING_CIRCULARIN_OFFSET UNITYSDK_OFFSET(0x1A213060)
#define PARADOXNOTION_ANIMATION_EASING_CIRCULAROUT_OFFSET UNITYSDK_OFFSET(0x1A213170)
#define PARADOXNOTION_ANIMATION_EASING_CUBICINOUT_OFFSET UNITYSDK_OFFSET(0x1A212860)
#define PARADOXNOTION_ANIMATION_EASING_CUBICIN_OFFSET UNITYSDK_OFFSET(0x1A212680)
#define PARADOXNOTION_ANIMATION_EASING_CUBICOUT_OFFSET UNITYSDK_OFFSET(0x1A212760)
#define PARADOXNOTION_ANIMATION_EASING_DIFFERENCE_OFFSET UNITYSDK_OFFSET(0x1A211D10)
#define PARADOXNOTION_ANIMATION_EASING_EASE_1_OFFSET UNITYSDK_OFFSET(0x1A211930)
#define PARADOXNOTION_ANIMATION_EASING_EASE_2_OFFSET UNITYSDK_OFFSET(0x1A211AA0)
#define PARADOXNOTION_ANIMATION_EASING_EASE_3_OFFSET UNITYSDK_OFFSET(0x1A211BF0)
#define PARADOXNOTION_ANIMATION_EASING_EASE_OFFSET UNITYSDK_OFFSET(0x1A2109F0)
#define PARADOXNOTION_ANIMATION_EASING_ELASTICINOUT_OFFSET UNITYSDK_OFFSET(0x1A2136B0)
#define PARADOXNOTION_ANIMATION_EASING_ELASTICIN_OFFSET UNITYSDK_OFFSET(0x1A2133B0)
#define PARADOXNOTION_ANIMATION_EASING_ELASTICOUT_OFFSET UNITYSDK_OFFSET(0x1A213530)
#define PARADOXNOTION_ANIMATION_EASING_EXPONENTIALINOUT_OFFSET UNITYSDK_OFFSET(0x1A212EE0)
#define PARADOXNOTION_ANIMATION_EASING_EXPONENTIALIN_OFFSET UNITYSDK_OFFSET(0x1A212C80)
#define PARADOXNOTION_ANIMATION_EASING_EXPONENTIALOUT_OFFSET UNITYSDK_OFFSET(0x1A212DA0)
#define PARADOXNOTION_ANIMATION_EASING_FUNCTION_OFFSET UNITYSDK_OFFSET(0x1A210AC0)
#define PARADOXNOTION_ANIMATION_EASING_LINEAR_OFFSET UNITYSDK_OFFSET(0x1A211D40)
#define PARADOXNOTION_ANIMATION_EASING_QUADRATICINOUT_OFFSET UNITYSDK_OFFSET(0x1A211F20)
#define PARADOXNOTION_ANIMATION_EASING_QUADRATICIN_OFFSET UNITYSDK_OFFSET(0x1A211D70)
#define PARADOXNOTION_ANIMATION_EASING_QUADRATICOUT_OFFSET UNITYSDK_OFFSET(0x1A211E40)
#define PARADOXNOTION_ANIMATION_EASING_QUARTICINOUT_OFFSET UNITYSDK_OFFSET(0x1A212230)
#define PARADOXNOTION_ANIMATION_EASING_QUARTICIN_OFFSET UNITYSDK_OFFSET(0x1A212050)
#define PARADOXNOTION_ANIMATION_EASING_QUARTICOUT_OFFSET UNITYSDK_OFFSET(0x1A212130)
#define PARADOXNOTION_ANIMATION_EASING_QUINTICINOUT_OFFSET UNITYSDK_OFFSET(0x1A212540)
#define PARADOXNOTION_ANIMATION_EASING_QUINTICIN_OFFSET UNITYSDK_OFFSET(0x1A212360)
#define PARADOXNOTION_ANIMATION_EASING_QUINTICOUT_OFFSET UNITYSDK_OFFSET(0x1A212440)
#define PARADOXNOTION_ANIMATION_EASING_SINUSOIDALINOUT_OFFSET UNITYSDK_OFFSET(0x1A212B80)
#define PARADOXNOTION_ANIMATION_EASING_SINUSOIDALIN_OFFSET UNITYSDK_OFFSET(0x1A212990)
#define PARADOXNOTION_ANIMATION_EASING_SINUSOIDALOUT_OFFSET UNITYSDK_OFFSET(0x1A212A90)
#define PARADOXNOTION_ANIMATION_EASING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2141A0)

namespace ParadoxNotion::Animation
{
	inline static constexpr unsigned int Easing_TypeDefinitionIndex = 27075;

	class Easing : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Func_4<::System::Single, ::System::Single, ::System::Single, ::System::Single>*>** StaticGet_EaseFunctions()
		{
			return (::Il2CppArray<::System::Func_4<::System::Single, ::System::Single, ::System::Single, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(Easing_TypeDefinitionIndex)->GetStaticField(0x1FE30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_ANIMATION_EASING__CCTOR_OFFSET))();
		}

		static ::System::Single Ease(::ParadoxNotion::Animation::EaseType type, ::System::Single from, ::System::Single to, ::System::Single t)
		{
			return ((::System::Single(*)(::ParadoxNotion::Animation::EaseType, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_ANIMATION_EASING_EASE_OFFSET))(type, from, to, t);
		}

		static ::UnityEngine::Vector3 Ease_1(::ParadoxNotion::Animation::EaseType type, ::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to, ::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::ParadoxNotion::Animation::EaseType, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_ANIMATION_EASING_EASE_1_OFFSET))(type, from, to, t);
		}

		static ::UnityEngine::Quaternion Ease_2(::ParadoxNotion::Animation::EaseType type, ::UnityEngine::Quaternion from, ::UnityEngine::Quaternion to, ::System::Single t)
		{
			return ((::UnityEngine::Quaternion(*)(::ParadoxNotion::Animation::EaseType, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_ANIMATION_EASING_EASE_2_OFFSET))(type, from, to, t);
		}

		static ::UnityEngine::Color Ease_3(::ParadoxNotion::Animation::EaseType type, ::UnityEngine::Color from, ::UnityEngine::Color to, ::System::Single t)
		{
			return ((::UnityEngine::Color(*)(::ParadoxNotion::Animation::EaseType, ::UnityEngine::Color, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_ANIMATION_EASING_EASE_3_OFFSET))(type, from, to, t);
		}

		static ::System::Single Difference(::System::Single f, ::System::Single a, ::System::Single b)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_ANIMATION_EASING_DIFFERENCE_OFFSET))(f, a, b);
		}

		static ::System::Single Linear(::System::Single from, ::System::Single to, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_ANIMATION_EASING_LINEAR_OFFSET))(from, to, t);
		}

		static ::System::Single QuadraticIn(::System::Single from, ::System::Single to, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_ANIMATION_EASING_QUADRATICIN_OFFSET))(from, to, t);
		}

		static ::System::Single QuadraticOut(::System::Single from, ::System::Single to, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_ANIMATION_EASING_QUADRATICOUT_OFFSET))(from, to, t);
		}

		static ::System::Single QuadraticInOut(::System::Single from, ::System::Single to, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_ANIMATION_EASING_QUADRATICINOUT_OFFSET))(from, to, t);
		}

		static ::System::Single QuarticIn(::System::Single from, ::System::Single to, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_ANIMATION_EASING_QUARTICIN_OFFSET))(from, to, t);
		}

		static ::System::Single QuarticOut(::System::Single from, ::System::Single to, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_ANIMATION_EASING_QUARTICOUT_OFFSET))(from, to, t);
		}

		static ::System::Single QuarticInOut(::System::Single from, ::System::Single to, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_ANIMATION_EASING_QUARTICINOUT_OFFSET))(from, to, t);
		}

		static ::System::Single QuinticIn(::System::Single from, ::System::Single to, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_ANIMATION_EASING_QUINTICIN_OFFSET))(from, to, t);
		}

		static ::System::Single QuinticOut(::System::Single from, ::System::Single to, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_ANIMATION_EASING_QUINTICOUT_OFFSET))(from, to, t);
		}

		static ::System::Single QuinticInOut(::System::Single from, ::System::Single to, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_ANIMATION_EASING_QUINTICINOUT_OFFSET))(from, to, t);
		}

		static ::System::Single CubicIn(::System::Single from, ::System::Single to, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_ANIMATION_EASING_CUBICIN_OFFSET))(from, to, t);
		}

		static ::System::Single CubicOut(::System::Single from, ::System::Single to, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_ANIMATION_EASING_CUBICOUT_OFFSET))(from, to, t);
		}

		static ::System::Single CubicInOut(::System::Single from, ::System::Single to, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_ANIMATION_EASING_CUBICINOUT_OFFSET))(from, to, t);
		}

		static ::System::Single SinusoidalIn(::System::Single from, ::System::Single to, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_ANIMATION_EASING_SINUSOIDALIN_OFFSET))(from, to, t);
		}

		static ::System::Single SinusoidalOut(::System::Single from, ::System::Single to, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_ANIMATION_EASING_SINUSOIDALOUT_OFFSET))(from, to, t);
		}

		static ::System::Single SinusoidalInOut(::System::Single from, ::System::Single to, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_ANIMATION_EASING_SINUSOIDALINOUT_OFFSET))(from, to, t);
		}

		static ::System::Single ExponentialIn(::System::Single from, ::System::Single to, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_ANIMATION_EASING_EXPONENTIALIN_OFFSET))(from, to, t);
		}

		static ::System::Single ExponentialOut(::System::Single from, ::System::Single to, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_ANIMATION_EASING_EXPONENTIALOUT_OFFSET))(from, to, t);
		}

		static ::System::Single ExponentialInOut(::System::Single from, ::System::Single to, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_ANIMATION_EASING_EXPONENTIALINOUT_OFFSET))(from, to, t);
		}

		static ::System::Single CircularIn(::System::Single from, ::System::Single to, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_ANIMATION_EASING_CIRCULARIN_OFFSET))(from, to, t);
		}

		static ::System::Single CircularOut(::System::Single from, ::System::Single to, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_ANIMATION_EASING_CIRCULAROUT_OFFSET))(from, to, t);
		}

		static ::System::Single CircularInOut(::System::Single from, ::System::Single to, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_ANIMATION_EASING_CIRCULARINOUT_OFFSET))(from, to, t);
		}

		static ::System::Single ElasticIn(::System::Single from, ::System::Single to, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_ANIMATION_EASING_ELASTICIN_OFFSET))(from, to, t);
		}

		static ::System::Single ElasticOut(::System::Single from, ::System::Single to, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_ANIMATION_EASING_ELASTICOUT_OFFSET))(from, to, t);
		}

		static ::System::Single ElasticInOut(::System::Single from, ::System::Single to, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_ANIMATION_EASING_ELASTICINOUT_OFFSET))(from, to, t);
		}

		static ::System::Single BounceIn(::System::Single from, ::System::Single to, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_ANIMATION_EASING_BOUNCEIN_OFFSET))(from, to, t);
		}

		static ::System::Single BounceOut(::System::Single from, ::System::Single to, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_ANIMATION_EASING_BOUNCEOUT_OFFSET))(from, to, t);
		}

		static ::System::Single BounceInOut(::System::Single from, ::System::Single to, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_ANIMATION_EASING_BOUNCEINOUT_OFFSET))(from, to, t);
		}

		static ::System::Single BackIn(::System::Single from, ::System::Single to, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_ANIMATION_EASING_BACKIN_OFFSET))(from, to, t);
		}

		static ::System::Single BackOut(::System::Single from, ::System::Single to, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_ANIMATION_EASING_BACKOUT_OFFSET))(from, to, t);
		}

		static ::System::Single BackInOut(::System::Single from, ::System::Single to, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_ANIMATION_EASING_BACKINOUT_OFFSET))(from, to, t);
		}

		static ::System::Func_4<::System::Single, ::System::Single, ::System::Single, ::System::Single>* Function(::ParadoxNotion::Animation::EaseType type)
		{
			return ((::System::Func_4<::System::Single, ::System::Single, ::System::Single, ::System::Single>*(*)(::ParadoxNotion::Animation::EaseType))((::PBYTE)hIl2Cpp + PARADOXNOTION_ANIMATION_EASING_FUNCTION_OFFSET))(type);
		}
	};
}
