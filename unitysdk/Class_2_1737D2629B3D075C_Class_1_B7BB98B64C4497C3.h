#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_1737D2629B3D075C_Class_1_6CB27C7F86CA9B94;

#define CLASS_2_1737D2629B3D075C_CLASS_1_B7BB98B64C4497C3_METHOD_1_276036CDF4BFF5A6_OFFSET UNITYSDK_OFFSET(0x10378720)
#define CLASS_2_1737D2629B3D075C_CLASS_1_B7BB98B64C4497C3_METHOD_1_84542ED0254FFB77_OFFSET UNITYSDK_OFFSET(0x10378830)
#define CLASS_2_1737D2629B3D075C_CLASS_1_B7BB98B64C4497C3__CTOR_OFFSET UNITYSDK_OFFSET(0x10378710)

inline static constexpr unsigned int Class_2_1737D2629B3D075C_Class_1_B7BB98B64C4497C3_TypeDefinitionIndex = 80706;

class Class_2_1737D2629B3D075C_Class_1_B7BB98B64C4497C3 : public ::System::Object
{
public:
	::Class_2_1737D2629B3D075C_Class_1_6CB27C7F86CA9B94* Field_1_3; // 0x10
	::System::Boolean Field_1_2; // 0x18
	::UnityEngine::Vector3 Field_1_0; // 0x1C
	::UnityEngine::Quaternion Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1737D2629B3D075C_CLASS_1_B7BB98B64C4497C3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_276036CDF4BFF5A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1737D2629B3D075C_CLASS_1_B7BB98B64C4497C3_METHOD_1_276036CDF4BFF5A6_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_84542ED0254FFB77(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + CLASS_2_1737D2629B3D075C_CLASS_1_B7BB98B64C4497C3_METHOD_1_84542ED0254FFB77_OFFSET))(this, a1);
	}
};
