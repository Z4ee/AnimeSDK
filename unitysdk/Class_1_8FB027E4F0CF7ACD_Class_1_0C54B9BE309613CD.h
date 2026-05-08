#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

class Class_1_11F0E0D52D9FF574;
class Class_1_8FB027E4F0CF7ACD;
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define CLASS_1_8FB027E4F0CF7ACD_CLASS_1_0C54B9BE309613CD_METHOD_1_0846D1EBB7741623_OFFSET UNITYSDK_OFFSET(0x11AE3F50)
#define CLASS_1_8FB027E4F0CF7ACD_CLASS_1_0C54B9BE309613CD_METHOD_1_AA18621D12E9FC02_OFFSET UNITYSDK_OFFSET(0x11AE3E80)
#define CLASS_1_8FB027E4F0CF7ACD_CLASS_1_0C54B9BE309613CD__CTOR_OFFSET UNITYSDK_OFFSET(0x11AE3E70)

inline static constexpr unsigned int Class_1_8FB027E4F0CF7ACD_Class_1_0C54B9BE309613CD_TypeDefinitionIndex = 51226;

class Class_1_8FB027E4F0CF7ACD_Class_1_0C54B9BE309613CD : public ::System::Object
{
public:
	::Class_1_11F0E0D52D9FF574* Field_1_1; // 0x10
	::Class_1_8FB027E4F0CF7ACD* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FB027E4F0CF7ACD_CLASS_1_0C54B9BE309613CD__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_AA18621D12E9FC02()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FB027E4F0CF7ACD_CLASS_1_0C54B9BE309613CD_METHOD_1_AA18621D12E9FC02_OFFSET))(this);
	}

	::System::Void Method_1_0846D1EBB7741623(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_8FB027E4F0CF7ACD_CLASS_1_0C54B9BE309613CD_METHOD_1_0846D1EBB7741623_OFFSET))(this, a1);
	}
};
