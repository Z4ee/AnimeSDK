#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_15F9FE7F9AD3257D_Class_1_A0535B950D05740F;

#define CLASS_2_15F9FE7F9AD3257D_CLASS_1_F4D3CE4605F094E1_METHOD_1_FE5878AC5B054EAE_OFFSET UNITYSDK_OFFSET(0x13407FE0)
#define CLASS_2_15F9FE7F9AD3257D_CLASS_1_F4D3CE4605F094E1__CTOR_OFFSET UNITYSDK_OFFSET(0x13407FD0)

inline static constexpr unsigned int Class_2_15F9FE7F9AD3257D_Class_1_F4D3CE4605F094E1_TypeDefinitionIndex = 48115;

class Class_2_15F9FE7F9AD3257D_Class_1_F4D3CE4605F094E1 : public ::System::Object
{
public:
	::Class_2_15F9FE7F9AD3257D_Class_1_A0535B950D05740F* Field_1_7; // 0x10
	::UnityEngine::Quaternion Field_1_0; // 0x18
	::UnityEngine::Vector3 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15F9FE7F9AD3257D_CLASS_1_F4D3CE4605F094E1__CTOR_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_FE5878AC5B054EAE(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + CLASS_2_15F9FE7F9AD3257D_CLASS_1_F4D3CE4605F094E1_METHOD_1_FE5878AC5B054EAE_OFFSET))(this, a1);
	}
};
