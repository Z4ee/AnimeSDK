#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

class Class_1_11F0E0D52D9FF574;

#define CLASS_1_8FB027E4F0CF7ACD_CLASS_1_E30E418BB49DD0BB_METHOD_1_FDBB9F2A437E5DE3_OFFSET UNITYSDK_OFFSET(0x1673D400)
#define CLASS_1_8FB027E4F0CF7ACD_CLASS_1_E30E418BB49DD0BB__CTOR_OFFSET UNITYSDK_OFFSET(0x1673D3F0)

inline static constexpr unsigned int Class_1_8FB027E4F0CF7ACD_Class_1_E30E418BB49DD0BB_TypeDefinitionIndex = 69386;

class Class_1_8FB027E4F0CF7ACD_Class_1_E30E418BB49DD0BB : public ::System::Object
{
public:
	::Class_1_11F0E0D52D9FF574* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FB027E4F0CF7ACD_CLASS_1_E30E418BB49DD0BB__CTOR_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_FDBB9F2A437E5DE3(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + CLASS_1_8FB027E4F0CF7ACD_CLASS_1_E30E418BB49DD0BB_METHOD_1_FDBB9F2A437E5DE3_OFFSET))(this, a1);
	}
};
