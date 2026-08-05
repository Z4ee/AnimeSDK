#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define CLASS_1_97AA85461D84B92D_CLASS_1_39070A33D94340C6_5_METHOD_1_54757B8B62FBF467_OFFSET UNITYSDK_OFFSET(0x17F495F0)
#define CLASS_1_97AA85461D84B92D_CLASS_1_39070A33D94340C6_5__CTOR_OFFSET UNITYSDK_OFFSET(0x17F495E0)

inline static constexpr unsigned int Class_1_97AA85461D84B92D_Class_1_39070A33D94340C6_5_TypeDefinitionIndex = 62400;

class Class_1_97AA85461D84B92D_Class_1_39070A33D94340C6_5 : public ::System::Object
{
public:
	::MoleMole::Cameras::NapVirtualPipelineCamera* Field_1_1; // 0x10
	::PipelineCamera::CameraCommandUnSpawnSubModules* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97AA85461D84B92D_CLASS_1_39070A33D94340C6_5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_54757B8B62FBF467()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97AA85461D84B92D_CLASS_1_39070A33D94340C6_5_METHOD_1_54757B8B62FBF467_OFFSET))(this);
	}
};
