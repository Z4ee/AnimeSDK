#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0BF092863AC7E04F;
namespace MoleMole::Cameras { class TelescopeCameraConfig; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define CLASS_1_0BF092863AC7E04F_CLASS_1_929484D8527DFB57_METHOD_1_0846D1EBB7741623_OFFSET UNITYSDK_OFFSET(0x16548310)
#define CLASS_1_0BF092863AC7E04F_CLASS_1_929484D8527DFB57_METHOD_1_AA18621D12E9FC02_OFFSET UNITYSDK_OFFSET(0x165483B0)
#define CLASS_1_0BF092863AC7E04F_CLASS_1_929484D8527DFB57__CTOR_OFFSET UNITYSDK_OFFSET(0x16548300)

inline static constexpr unsigned int Class_1_0BF092863AC7E04F_Class_1_929484D8527DFB57_TypeDefinitionIndex = 74504;

class Class_1_0BF092863AC7E04F_Class_1_929484D8527DFB57 : public ::System::Object
{
public:
	::MoleMole::Cameras::TelescopeCameraConfig* Field_1_3; // 0x10
	::Class_1_0BF092863AC7E04F* Field_1_0; // 0x18
	::UnityEngine::Vector3 Field_1_1; // 0x20
	::UnityEngine::Quaternion Field_1_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BF092863AC7E04F_CLASS_1_929484D8527DFB57__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0846D1EBB7741623(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_0BF092863AC7E04F_CLASS_1_929484D8527DFB57_METHOD_1_0846D1EBB7741623_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_AA18621D12E9FC02()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BF092863AC7E04F_CLASS_1_929484D8527DFB57_METHOD_1_AA18621D12E9FC02_OFFSET))(this);
	}
};
