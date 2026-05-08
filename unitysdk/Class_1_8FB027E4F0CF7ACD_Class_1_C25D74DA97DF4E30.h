#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

class Class_1_11F0E0D52D9FF574;

#define CLASS_1_8FB027E4F0CF7ACD_CLASS_1_C25D74DA97DF4E30_METHOD_1_FF22DD7A592D2A9A_OFFSET UNITYSDK_OFFSET(0x16677A90)
#define CLASS_1_8FB027E4F0CF7ACD_CLASS_1_C25D74DA97DF4E30__CTOR_OFFSET UNITYSDK_OFFSET(0x16677A80)

inline static constexpr unsigned int Class_1_8FB027E4F0CF7ACD_Class_1_C25D74DA97DF4E30_TypeDefinitionIndex = 51228;

class Class_1_8FB027E4F0CF7ACD_Class_1_C25D74DA97DF4E30 : public ::System::Object
{
public:
	::Class_1_11F0E0D52D9FF574* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FB027E4F0CF7ACD_CLASS_1_C25D74DA97DF4E30__CTOR_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_FF22DD7A592D2A9A(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + CLASS_1_8FB027E4F0CF7ACD_CLASS_1_C25D74DA97DF4E30_METHOD_1_FF22DD7A592D2A9A_OFFSET))(this, a1);
	}
};
