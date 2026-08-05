#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtual3DActionCamera_1; }
namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define CLASS_1_8BCF11C763A084A9_CLASS_1_B20B619C3D71F6E5_1_METHOD_1_89C03AF435ED2C78_OFFSET UNITYSDK_OFFSET(0x1723AFC0)
#define CLASS_1_8BCF11C763A084A9_CLASS_1_B20B619C3D71F6E5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1723AFB0)

inline static constexpr unsigned int Class_1_8BCF11C763A084A9_Class_1_B20B619C3D71F6E5_1_TypeDefinitionIndex = 53653;

class Class_1_8BCF11C763A084A9_Class_1_B20B619C3D71F6E5_1 : public ::System::Object
{
public:
	::MoleMole::Cameras::NapVirtualPipelineCamera* Field_1_1; // 0x10
	::MoleMole::Cameras::NapVirtual3DActionCamera_1* Field_1_2; // 0x18
	::PipelineCamera::CameraCommandUnSpawnSubModules* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_CLASS_1_B20B619C3D71F6E5_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_89C03AF435ED2C78()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_CLASS_1_B20B619C3D71F6E5_1_METHOD_1_89C03AF435ED2C78_OFFSET))(this);
	}
};
