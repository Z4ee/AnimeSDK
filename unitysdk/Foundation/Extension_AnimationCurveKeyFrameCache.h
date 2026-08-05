#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class Extension_AnimationCurveDetail_IKeyFrameInterval; }
namespace UnityEngine { class AnimationCurve; }

#define FOUNDATION_EXTENSION_ANIMATIONCURVEKEYFRAMECACHE_FINDINDEX_OFFSET UNITYSDK_OFFSET(0x1DD94B80)
#define FOUNDATION_EXTENSION_ANIMATIONCURVEKEYFRAMECACHE_INTEGRAL_OFFSET UNITYSDK_OFFSET(0x1DD94D00)
#define FOUNDATION_EXTENSION_ANIMATIONCURVEKEYFRAMECACHE_ISSINGLEKEY_OFFSET UNITYSDK_OFFSET(0x1DD94B60)
#define FOUNDATION_EXTENSION_ANIMATIONCURVEKEYFRAMECACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD944B0)

namespace Foundation
{
	inline static constexpr unsigned int Extension_AnimationCurveKeyFrameCache_TypeDefinitionIndex = 8584;

	class Extension_AnimationCurveKeyFrameCache : public ::System::Object
	{
	public:
		::Il2CppArray<::Foundation::Extension_AnimationCurveDetail_IKeyFrameInterval*>* _items; // 0x10
		::System::Single _totalArea; // 0x18
		::System::Single _fallbackSingleValue; // 0x1C
		::Foundation::Unreal::Interval_1<::System::Single> _interval; // 0x20

		::System::Void _ctor(::UnityEngine::AnimationCurve* curve)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_ANIMATIONCURVEKEYFRAMECACHE__CTOR_OFFSET))(this, curve);
		}

		::System::Boolean IsSingleKey()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_ANIMATIONCURVEKEYFRAMECACHE_ISSINGLEKEY_OFFSET))(this);
		}

		::System::Int32 FindIndex(::System::Single curveTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_ANIMATIONCURVEKEYFRAMECACHE_FINDINDEX_OFFSET))(this, curveTime);
		}

		::System::Single Integral(::System::Single to, ::System::Single from)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_ANIMATIONCURVEKEYFRAMECACHE_INTEGRAL_OFFSET))(this, to, from);
		}
	};
}
