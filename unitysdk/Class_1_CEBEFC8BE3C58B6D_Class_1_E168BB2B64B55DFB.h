#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CEBEFC8BE3C58B6D;
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace PipelineCamera { class ICameraDataBlender; }

#define CLASS_1_CEBEFC8BE3C58B6D_CLASS_1_E168BB2B64B55DFB_METHOD_1_11210F7D1DF0FD0C_OFFSET UNITYSDK_OFFSET(0x1078B020)
#define CLASS_1_CEBEFC8BE3C58B6D_CLASS_1_E168BB2B64B55DFB__CTOR_OFFSET UNITYSDK_OFFSET(0x1078B010)

inline static constexpr unsigned int Class_1_CEBEFC8BE3C58B6D_Class_1_E168BB2B64B55DFB_TypeDefinitionIndex = 62085;

class Class_1_CEBEFC8BE3C58B6D_Class_1_E168BB2B64B55DFB : public ::System::Object
{
public:
	::Class_1_CEBEFC8BE3C58B6D* Field_1_1; // 0x10
	::MoleMole::Cameras::CameraTrackBlending* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEBEFC8BE3C58B6D_CLASS_1_E168BB2B64B55DFB__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraDataBlender* Method_1_11210F7D1DF0FD0C(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_CEBEFC8BE3C58B6D_CLASS_1_E168BB2B64B55DFB_METHOD_1_11210F7D1DF0FD0C_OFFSET))(this, a1);
	}
};
