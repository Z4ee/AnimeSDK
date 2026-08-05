#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define CLASS_1_F3CC150E5334846F_CLASS_1_39D8C70D19C6436E_METHOD_1_FFD65E4FEAD3C019_OFFSET UNITYSDK_OFFSET(0x1375F780)
#define CLASS_1_F3CC150E5334846F_CLASS_1_39D8C70D19C6436E__CTOR_OFFSET UNITYSDK_OFFSET(0x1375F770)

inline static constexpr unsigned int Class_1_F3CC150E5334846F_Class_1_39D8C70D19C6436E_TypeDefinitionIndex = 44963;

class Class_1_F3CC150E5334846F_Class_1_39D8C70D19C6436E : public ::System::Object
{
public:
	::PipelineCamera::CameraCommandUnSpawnSubModules* Field_1_1; // 0x10
	::MoleMole::Cameras::NapVirtualPipelineCamera* Field_1_2; // 0x18
	::System::Boolean Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CC150E5334846F_CLASS_1_39D8C70D19C6436E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FFD65E4FEAD3C019()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CC150E5334846F_CLASS_1_39D8C70D19C6436E_METHOD_1_FFD65E4FEAD3C019_OFFSET))(this);
	}
};
