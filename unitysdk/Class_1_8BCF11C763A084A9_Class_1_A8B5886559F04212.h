#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtual3DActionCamera_1; }
namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define CLASS_1_8BCF11C763A084A9_CLASS_1_A8B5886559F04212_METHOD_1_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x14F3F670)
#define CLASS_1_8BCF11C763A084A9_CLASS_1_A8B5886559F04212__CTOR_OFFSET UNITYSDK_OFFSET(0x14F3F660)

inline static constexpr unsigned int Class_1_8BCF11C763A084A9_Class_1_A8B5886559F04212_TypeDefinitionIndex = 76652;

class Class_1_8BCF11C763A084A9_Class_1_A8B5886559F04212 : public ::System::Object
{
public:
	::PipelineCamera::CameraCommandUnSpawnSubModules* Field_1_2; // 0x10
	::MoleMole::Cameras::NapVirtual3DActionCamera_1* Field_1_0; // 0x18
	::MoleMole::Cameras::NapVirtualPipelineCamera* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_CLASS_1_A8B5886559F04212__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_CLASS_1_A8B5886559F04212_METHOD_1_737220D2233A9067_OFFSET))(this);
	}
};
