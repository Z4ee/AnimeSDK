#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

class Class_1_97AA85461D84B92D;
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Cameras { class FixedCameraConfig; }
namespace PipelineCamera { class ICameraDataBlender; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define CLASS_1_97AA85461D84B92D_CLASS_1_BE13828BBD6EFD5F_METHOD_1_0846D1EBB7741623_OFFSET UNITYSDK_OFFSET(0x12651460)
#define CLASS_1_97AA85461D84B92D_CLASS_1_BE13828BBD6EFD5F_METHOD_1_0D0FD558232078D5_OFFSET UNITYSDK_OFFSET(0x126514F0)
#define CLASS_1_97AA85461D84B92D_CLASS_1_BE13828BBD6EFD5F_METHOD_1_74039895776C45A9_OFFSET UNITYSDK_OFFSET(0x126513B0)
#define CLASS_1_97AA85461D84B92D_CLASS_1_BE13828BBD6EFD5F_METHOD_1_AA18621D12E9FC02_OFFSET UNITYSDK_OFFSET(0x12651590)
#define CLASS_1_97AA85461D84B92D_CLASS_1_BE13828BBD6EFD5F__CTOR_OFFSET UNITYSDK_OFFSET(0x126513A0)

inline static constexpr unsigned int Class_1_97AA85461D84B92D_Class_1_BE13828BBD6EFD5F_TypeDefinitionIndex = 62403;

class Class_1_97AA85461D84B92D_Class_1_BE13828BBD6EFD5F : public ::System::Object
{
public:
	::MoleMole::Cameras::FixedCameraConfig* Field_1_0; // 0x10
	::Class_1_97AA85461D84B92D* Field_1_1; // 0x18
	::MoleMole::Cameras::CameraTrackBlending* Field_1_6; // 0x20
	::MoleMole::Cameras::CameraTrackBlending* Field_1_5; // 0x28
	::System::Boolean Field_1_7; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97AA85461D84B92D_CLASS_1_BE13828BBD6EFD5F__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraDataBlender* Method_1_74039895776C45A9(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_97AA85461D84B92D_CLASS_1_BE13828BBD6EFD5F_METHOD_1_74039895776C45A9_OFFSET))(this, a1);
	}

	::System::Void Method_1_0846D1EBB7741623(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_97AA85461D84B92D_CLASS_1_BE13828BBD6EFD5F_METHOD_1_0846D1EBB7741623_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraDataBlender* Method_1_0D0FD558232078D5(::PipelineCamera::ICameraDataBlender* a1)
	{
		return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + CLASS_1_97AA85461D84B92D_CLASS_1_BE13828BBD6EFD5F_METHOD_1_0D0FD558232078D5_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_AA18621D12E9FC02()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97AA85461D84B92D_CLASS_1_BE13828BBD6EFD5F_METHOD_1_AA18621D12E9FC02_OFFSET))(this);
	}
};
