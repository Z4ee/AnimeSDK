#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MONOUITABLESCROLLV2_SELECTALIGNSCROLLPARAM_GET_SELECTALIGNCURVE_OFFSET UNITYSDK_OFFSET(0x15B281B0)
#define MONOUITABLESCROLLV2_SELECTALIGNSCROLLPARAM_RESET_OFFSET UNITYSDK_OFFSET(0x15B28250)
#define MONOUITABLESCROLLV2_SELECTALIGNSCROLLPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x15B282D0)

inline static constexpr unsigned int MonoUITableScrollV2_SelectAlignScrollParam_TypeDefinitionIndex = 74966;

class MonoUITableScrollV2_SelectAlignScrollParam : public ::System::Object
{
public:
	// static const ::System::Single DefaultSelectAlignTime; // 0x0
	::System::String* SelectAlignCurveName; // 0x10
	::System::Single SelectAlignTime; // 0x18
	::UnityEngine::AnimationCurve* _defaultAnimationCurve; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SELECTALIGNSCROLLPARAM__CTOR_OFFSET))(this);
	}

	::UnityEngine::AnimationCurve* get_SelectAlignCurve()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SELECTALIGNSCROLLPARAM_GET_SELECTALIGNCURVE_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SELECTALIGNSCROLLPARAM_RESET_OFFSET))(this);
	}
};
