#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define CLASS_1_8FB027E4F0CF7ACD_CLASS_1_7FEDA1FC41607908_5_METHOD_1_E69F3DFB7CDFE412_OFFSET UNITYSDK_OFFSET(0x1651F2D0)
#define CLASS_1_8FB027E4F0CF7ACD_CLASS_1_7FEDA1FC41607908_5__CTOR_OFFSET UNITYSDK_OFFSET(0x1651F2C0)

inline static constexpr unsigned int Class_1_8FB027E4F0CF7ACD_Class_1_7FEDA1FC41607908_5_TypeDefinitionIndex = 51223;

class Class_1_8FB027E4F0CF7ACD_Class_1_7FEDA1FC41607908_5 : public ::System::Object
{
public:
	::PipelineCamera::CameraCommandUnSpawnSubModules* Field_1_1; // 0x10
	::MoleMole::Cameras::NapVirtualPipelineCamera* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FB027E4F0CF7ACD_CLASS_1_7FEDA1FC41607908_5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E69F3DFB7CDFE412()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FB027E4F0CF7ACD_CLASS_1_7FEDA1FC41607908_5_METHOD_1_E69F3DFB7CDFE412_OFFSET))(this);
	}
};
