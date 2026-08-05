#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define CLASS_1_A27C3E06CB3501A8_CLASS_1_39070A33D94340C6_12_METHOD_1_54757B8B62FBF467_OFFSET UNITYSDK_OFFSET(0x11CB50F0)
#define CLASS_1_A27C3E06CB3501A8_CLASS_1_39070A33D94340C6_12__CTOR_OFFSET UNITYSDK_OFFSET(0x11CB50E0)

inline static constexpr unsigned int Class_1_A27C3E06CB3501A8_Class_1_39070A33D94340C6_12_TypeDefinitionIndex = 80898;

class Class_1_A27C3E06CB3501A8_Class_1_39070A33D94340C6_12 : public ::System::Object
{
public:
	::MoleMole::Cameras::NapVirtualPipelineCamera* Field_1_1; // 0x10
	::PipelineCamera::CameraCommandUnSpawnSubModules* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A27C3E06CB3501A8_CLASS_1_39070A33D94340C6_12__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_54757B8B62FBF467()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A27C3E06CB3501A8_CLASS_1_39070A33D94340C6_12_METHOD_1_54757B8B62FBF467_OFFSET))(this);
	}
};
