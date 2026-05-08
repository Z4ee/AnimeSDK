#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtual3DActionCamera_1; }
namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define CLASS_1_8BCF11C763A084A9_CLASS_1_A8B5886559F04212_METHOD_1_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0xF817810)
#define CLASS_1_8BCF11C763A084A9_CLASS_1_A8B5886559F04212__CTOR_OFFSET UNITYSDK_OFFSET(0xF817800)

inline static constexpr unsigned int Class_1_8BCF11C763A084A9_Class_1_A8B5886559F04212_TypeDefinitionIndex = 58541;

class Class_1_8BCF11C763A084A9_Class_1_A8B5886559F04212 : public ::System::Object
{
public:
	::MoleMole::Cameras::NapVirtualPipelineCamera* Field_1_1; // 0x10
	::MoleMole::Cameras::NapVirtual3DActionCamera_1* Field_1_0; // 0x18
	::PipelineCamera::CameraCommandUnSpawnSubModules* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_CLASS_1_A8B5886559F04212__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BCF11C763A084A9_CLASS_1_A8B5886559F04212_METHOD_1_737220D2233A9067_OFFSET))(this);
	}
};
