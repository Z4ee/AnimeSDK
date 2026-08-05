#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Keyframe.h"

namespace Foundation { class Extension_AnimationCurveDetail_IKeyFrameInterval; }

#define FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_CREATEINTERVAL_OFFSET UNITYSDK_OFFSET(0x1FA9CC70)

namespace Foundation
{
	inline static constexpr unsigned int Extension_AnimationCurveDetail_TypeDefinitionIndex = 8586;

	class Extension_AnimationCurveDetail : public ::System::Object
	{
	public:
		static ::Foundation::Extension_AnimationCurveDetail_IKeyFrameInterval* CreateInterval(::UnityEngine::Keyframe& lhs, ::UnityEngine::Keyframe& rhs, ::System::Boolean inclusiveRight)
		{
			return ((::Foundation::Extension_AnimationCurveDetail_IKeyFrameInterval*(*)(::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_CREATEINTERVAL_OFFSET))(lhs, rhs, inclusiveRight);
		}
	};
}
