#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_1737D2629B3D075C_Class_1_D6FE4E75D3C6BFF1;

#define CLASS_2_1737D2629B3D075C_CLASS_1_F4D3CE4605F094E1_METHOD_1_FE5878AC5B054EAE_OFFSET UNITYSDK_OFFSET(0x156D4A80)
#define CLASS_2_1737D2629B3D075C_CLASS_1_F4D3CE4605F094E1__CTOR_OFFSET UNITYSDK_OFFSET(0x156D4A70)

inline static constexpr unsigned int Class_2_1737D2629B3D075C_Class_1_F4D3CE4605F094E1_TypeDefinitionIndex = 80703;

class Class_2_1737D2629B3D075C_Class_1_F4D3CE4605F094E1 : public ::System::Object
{
public:
	::Class_2_1737D2629B3D075C_Class_1_D6FE4E75D3C6BFF1* Field_1_2; // 0x10
	::UnityEngine::Quaternion Field_1_1; // 0x18
	::UnityEngine::Vector3 Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1737D2629B3D075C_CLASS_1_F4D3CE4605F094E1__CTOR_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_FE5878AC5B054EAE(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + CLASS_2_1737D2629B3D075C_CLASS_1_F4D3CE4605F094E1_METHOD_1_FE5878AC5B054EAE_OFFSET))(this, a1);
	}
};
