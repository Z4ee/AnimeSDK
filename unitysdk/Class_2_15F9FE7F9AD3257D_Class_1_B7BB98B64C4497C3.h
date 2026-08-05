#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_15F9FE7F9AD3257D_Class_1_CC03E888B3FF8C92;

#define CLASS_2_15F9FE7F9AD3257D_CLASS_1_B7BB98B64C4497C3_METHOD_1_276036CDF4BFF5A6_OFFSET UNITYSDK_OFFSET(0x1BC251D0)
#define CLASS_2_15F9FE7F9AD3257D_CLASS_1_B7BB98B64C4497C3_METHOD_1_84542ED0254FFB77_OFFSET UNITYSDK_OFFSET(0x1BC25000)
#define CLASS_2_15F9FE7F9AD3257D_CLASS_1_B7BB98B64C4497C3__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC24FF0)

inline static constexpr unsigned int Class_2_15F9FE7F9AD3257D_Class_1_B7BB98B64C4497C3_TypeDefinitionIndex = 48116;

class Class_2_15F9FE7F9AD3257D_Class_1_B7BB98B64C4497C3 : public ::System::Object
{
public:
	::Class_2_15F9FE7F9AD3257D_Class_1_CC03E888B3FF8C92* Field_1_7; // 0x10
	::UnityEngine::Quaternion Field_1_1; // 0x18
	::System::Boolean Field_1_0; // 0x28
	::UnityEngine::Vector3 Field_1_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15F9FE7F9AD3257D_CLASS_1_B7BB98B64C4497C3__CTOR_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_84542ED0254FFB77(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + CLASS_2_15F9FE7F9AD3257D_CLASS_1_B7BB98B64C4497C3_METHOD_1_84542ED0254FFB77_OFFSET))(this, a1);
	}

	::System::Void Method_1_276036CDF4BFF5A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15F9FE7F9AD3257D_CLASS_1_B7BB98B64C4497C3_METHOD_1_276036CDF4BFF5A6_OFFSET))(this);
	}
};
