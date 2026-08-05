#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraDataBlender; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_F3CC150E5334846F_CLASS_1_6164A3FADAB42D93_METHOD_1_3A6DFC527E421DB7_1_OFFSET UNITYSDK_OFFSET(0x12B83440)
#define CLASS_1_F3CC150E5334846F_CLASS_1_6164A3FADAB42D93_METHOD_1_3A6DFC527E421DB7_OFFSET UNITYSDK_OFFSET(0x12B83430)
#define CLASS_1_F3CC150E5334846F_CLASS_1_6164A3FADAB42D93__CTOR_OFFSET UNITYSDK_OFFSET(0x12B83420)

inline static constexpr unsigned int Class_1_F3CC150E5334846F_Class_1_6164A3FADAB42D93_TypeDefinitionIndex = 44965;

class Class_1_F3CC150E5334846F_Class_1_6164A3FADAB42D93 : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CC150E5334846F_CLASS_1_6164A3FADAB42D93__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraDataBlender* Method_1_3A6DFC527E421DB7(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_F3CC150E5334846F_CLASS_1_6164A3FADAB42D93_METHOD_1_3A6DFC527E421DB7_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraDataBlender* Method_1_3A6DFC527E421DB7_1(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_F3CC150E5334846F_CLASS_1_6164A3FADAB42D93_METHOD_1_3A6DFC527E421DB7_1_OFFSET))(this, a1);
	}
};
