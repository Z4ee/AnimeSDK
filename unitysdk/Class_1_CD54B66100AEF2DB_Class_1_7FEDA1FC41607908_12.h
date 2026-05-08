#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define CLASS_1_CD54B66100AEF2DB_CLASS_1_7FEDA1FC41607908_12_METHOD_1_E69F3DFB7CDFE412_OFFSET UNITYSDK_OFFSET(0x12DB89D0)
#define CLASS_1_CD54B66100AEF2DB_CLASS_1_7FEDA1FC41607908_12__CTOR_OFFSET UNITYSDK_OFFSET(0x12DB89C0)

inline static constexpr unsigned int Class_1_CD54B66100AEF2DB_Class_1_7FEDA1FC41607908_12_TypeDefinitionIndex = 68715;

class Class_1_CD54B66100AEF2DB_Class_1_7FEDA1FC41607908_12 : public ::System::Object
{
public:
	::MoleMole::Cameras::NapVirtualPipelineCamera* Field_1_0; // 0x10
	::PipelineCamera::CameraCommandUnSpawnSubModules* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD54B66100AEF2DB_CLASS_1_7FEDA1FC41607908_12__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E69F3DFB7CDFE412()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD54B66100AEF2DB_CLASS_1_7FEDA1FC41607908_12_METHOD_1_E69F3DFB7CDFE412_OFFSET))(this);
	}
};
