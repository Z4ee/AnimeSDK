#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define CLASS_1_89C70488A8D240C1_CLASS_1_39070A33D94340C6_1_METHOD_1_54757B8B62FBF467_OFFSET UNITYSDK_OFFSET(0x119A26A0)
#define CLASS_1_89C70488A8D240C1_CLASS_1_39070A33D94340C6_1__CTOR_OFFSET UNITYSDK_OFFSET(0x119A2690)

inline static constexpr unsigned int Class_1_89C70488A8D240C1_Class_1_39070A33D94340C6_1_TypeDefinitionIndex = 50543;

class Class_1_89C70488A8D240C1_Class_1_39070A33D94340C6_1 : public ::System::Object
{
public:
	::PipelineCamera::CameraCommandUnSpawnSubModules* Field_1_0; // 0x10
	::MoleMole::Cameras::NapVirtualPipelineCamera* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1_CLASS_1_39070A33D94340C6_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_54757B8B62FBF467()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1_CLASS_1_39070A33D94340C6_1_METHOD_1_54757B8B62FBF467_OFFSET))(this);
	}
};
