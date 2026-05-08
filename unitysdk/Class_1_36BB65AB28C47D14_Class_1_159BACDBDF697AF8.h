#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2CEE35A1FF4AE199.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define CLASS_1_36BB65AB28C47D14_CLASS_1_159BACDBDF697AF8_METHOD_1_A289987AE6481A49_OFFSET UNITYSDK_OFFSET(0xF940620)
#define CLASS_1_36BB65AB28C47D14_CLASS_1_159BACDBDF697AF8__CTOR_OFFSET UNITYSDK_OFFSET(0xF93FC50)

inline static constexpr unsigned int Class_1_36BB65AB28C47D14_Class_1_159BACDBDF697AF8_TypeDefinitionIndex = 48041;

class Class_1_36BB65AB28C47D14_Class_1_159BACDBDF697AF8 : public ::System::Object
{
public:
	::Struct_2_2CEE35A1FF4AE199 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36BB65AB28C47D14_CLASS_1_159BACDBDF697AF8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A289987AE6481A49(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + CLASS_1_36BB65AB28C47D14_CLASS_1_159BACDBDF697AF8_METHOD_1_A289987AE6481A49_OFFSET))(this, a1);
	}
};
