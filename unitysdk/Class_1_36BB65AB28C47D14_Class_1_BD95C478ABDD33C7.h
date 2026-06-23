#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2CEE35A1FF4AE199.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define CLASS_1_36BB65AB28C47D14_CLASS_1_BD95C478ABDD33C7_METHOD_1_269BED3136BA1C1A_OFFSET UNITYSDK_OFFSET(0x12E1BD40)
#define CLASS_1_36BB65AB28C47D14_CLASS_1_BD95C478ABDD33C7__CTOR_OFFSET UNITYSDK_OFFSET(0x12E1BD30)

inline static constexpr unsigned int Class_1_36BB65AB28C47D14_Class_1_BD95C478ABDD33C7_TypeDefinitionIndex = 66749;

class Class_1_36BB65AB28C47D14_Class_1_BD95C478ABDD33C7 : public ::System::Object
{
public:
	::Struct_2_2CEE35A1FF4AE199 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36BB65AB28C47D14_CLASS_1_BD95C478ABDD33C7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_269BED3136BA1C1A(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + CLASS_1_36BB65AB28C47D14_CLASS_1_BD95C478ABDD33C7_METHOD_1_269BED3136BA1C1A_OFFSET))(this, a1);
	}
};
