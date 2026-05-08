#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Ease.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening { class EaseFunction; }
namespace UnityEngine { class AnimationCurve; }

#define DG_TWEENING_EASEFACTORY_STOPMOTION_1_OFFSET UNITYSDK_OFFSET(0x1C2CD590)
#define DG_TWEENING_EASEFACTORY_STOPMOTION_2_OFFSET UNITYSDK_OFFSET(0x1C2CD4F0)
#define DG_TWEENING_EASEFACTORY_STOPMOTION_OFFSET UNITYSDK_OFFSET(0x1C2CD3E0)
#define DG_TWEENING_EASEFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2CD680)

namespace DG::Tweening
{
	inline static constexpr unsigned int EaseFactory_TypeDefinitionIndex = 25349;

	class EaseFactory : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_EASEFACTORY__CTOR_OFFSET))(this);
		}

		static ::DG::Tweening::EaseFunction* StopMotion(::System::Int32 motionFps, ::System::Nullable_1<::DG::Tweening::Ease> ease)
		{
			return ((::DG::Tweening::EaseFunction*(*)(::System::Int32, ::System::Nullable_1<::DG::Tweening::Ease>))((::PBYTE)hIl2Cpp + DG_TWEENING_EASEFACTORY_STOPMOTION_OFFSET))(motionFps, ease);
		}

		static ::DG::Tweening::EaseFunction* StopMotion_1(::System::Int32 motionFps, ::UnityEngine::AnimationCurve* animCurve)
		{
			return ((::DG::Tweening::EaseFunction*(*)(::System::Int32, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + DG_TWEENING_EASEFACTORY_STOPMOTION_1_OFFSET))(motionFps, animCurve);
		}

		static ::DG::Tweening::EaseFunction* StopMotion_2(::System::Int32 motionFps, ::DG::Tweening::EaseFunction* customEase)
		{
			return ((::DG::Tweening::EaseFunction*(*)(::System::Int32, ::DG::Tweening::EaseFunction*))((::PBYTE)hIl2Cpp + DG_TWEENING_EASEFACTORY_STOPMOTION_2_OFFSET))(motionFps, customEase);
		}
	};
}
