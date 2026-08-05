#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define CLASS_1_92DACB0281238082_CLASS_1_39070A33D94340C6_9_METHOD_1_54757B8B62FBF467_OFFSET UNITYSDK_OFFSET(0x14302A20)
#define CLASS_1_92DACB0281238082_CLASS_1_39070A33D94340C6_9__CTOR_OFFSET UNITYSDK_OFFSET(0x14302A10)

inline static constexpr unsigned int Class_1_92DACB0281238082_Class_1_39070A33D94340C6_9_TypeDefinitionIndex = 75579;

class Class_1_92DACB0281238082_Class_1_39070A33D94340C6_9 : public ::System::Object
{
public:
	::MoleMole::Cameras::NapVirtualPipelineCamera* Field_1_0; // 0x10
	::PipelineCamera::CameraCommandUnSpawnSubModules* Field_1_7; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082_CLASS_1_39070A33D94340C6_9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_54757B8B62FBF467()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92DACB0281238082_CLASS_1_39070A33D94340C6_9_METHOD_1_54757B8B62FBF467_OFFSET))(this);
	}
};
