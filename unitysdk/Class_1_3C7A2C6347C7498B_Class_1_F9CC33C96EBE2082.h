#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

class Class_1_3C7A2C6347C7498B;
namespace MoleMole::Cameras { class FirstPersonCameraConfig; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define CLASS_1_3C7A2C6347C7498B_CLASS_1_F9CC33C96EBE2082_METHOD_1_0846D1EBB7741623_OFFSET UNITYSDK_OFFSET(0x19DF7EA0)
#define CLASS_1_3C7A2C6347C7498B_CLASS_1_F9CC33C96EBE2082_METHOD_1_AA18621D12E9FC02_OFFSET UNITYSDK_OFFSET(0x19DF7F40)
#define CLASS_1_3C7A2C6347C7498B_CLASS_1_F9CC33C96EBE2082__CTOR_OFFSET UNITYSDK_OFFSET(0x19DF7E90)

inline static constexpr unsigned int Class_1_3C7A2C6347C7498B_Class_1_F9CC33C96EBE2082_TypeDefinitionIndex = 57332;

class Class_1_3C7A2C6347C7498B_Class_1_F9CC33C96EBE2082 : public ::System::Object
{
public:
	::Class_1_3C7A2C6347C7498B* Field_1_0; // 0x10
	::MoleMole::Cameras::FirstPersonCameraConfig* Field_1_2; // 0x18
	::System::UInt32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C7A2C6347C7498B_CLASS_1_F9CC33C96EBE2082__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0846D1EBB7741623(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_3C7A2C6347C7498B_CLASS_1_F9CC33C96EBE2082_METHOD_1_0846D1EBB7741623_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_AA18621D12E9FC02()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C7A2C6347C7498B_CLASS_1_F9CC33C96EBE2082_METHOD_1_AA18621D12E9FC02_OFFSET))(this);
	}
};
