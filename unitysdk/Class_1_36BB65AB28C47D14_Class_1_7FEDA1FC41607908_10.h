#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define CLASS_1_36BB65AB28C47D14_CLASS_1_7FEDA1FC41607908_10_METHOD_1_E69F3DFB7CDFE412_OFFSET UNITYSDK_OFFSET(0x19216920)
#define CLASS_1_36BB65AB28C47D14_CLASS_1_7FEDA1FC41607908_10__CTOR_OFFSET UNITYSDK_OFFSET(0x19216910)

inline static constexpr unsigned int Class_1_36BB65AB28C47D14_Class_1_7FEDA1FC41607908_10_TypeDefinitionIndex = 66750;

class Class_1_36BB65AB28C47D14_Class_1_7FEDA1FC41607908_10 : public ::System::Object
{
public:
	::MoleMole::Cameras::NapVirtualPipelineCamera* Field_1_0; // 0x10
	::PipelineCamera::CameraCommandUnSpawnSubModules* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36BB65AB28C47D14_CLASS_1_7FEDA1FC41607908_10__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E69F3DFB7CDFE412()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36BB65AB28C47D14_CLASS_1_7FEDA1FC41607908_10_METHOD_1_E69F3DFB7CDFE412_OFFSET))(this);
	}
};
