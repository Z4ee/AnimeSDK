#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define CLASS_1_92DACB0281238082_CLASS_1_7FEDA1FC41607908_4_METHOD_1_E69F3DFB7CDFE412_OFFSET UNITYSDK_OFFSET(0xFAA32B0)
#define CLASS_1_92DACB0281238082_CLASS_1_7FEDA1FC41607908_4__CTOR_OFFSET UNITYSDK_OFFSET(0xFAA32A0)

inline static constexpr unsigned int Class_1_92DACB0281238082_Class_1_7FEDA1FC41607908_4_TypeDefinitionIndex = 49657;

class Class_1_92DACB0281238082_Class_1_7FEDA1FC41607908_4 : public ::System::Object
{
public:
	::PipelineCamera::CameraCommandUnSpawnSubModules* Field_1_1; // 0x10
	::MoleMole::Cameras::NapVirtualPipelineCamera* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082_CLASS_1_7FEDA1FC41607908_4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E69F3DFB7CDFE412()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082_CLASS_1_7FEDA1FC41607908_4_METHOD_1_E69F3DFB7CDFE412_OFFSET))(this);
	}
};
