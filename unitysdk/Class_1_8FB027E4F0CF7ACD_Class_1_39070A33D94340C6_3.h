#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define CLASS_1_8FB027E4F0CF7ACD_CLASS_1_39070A33D94340C6_3_METHOD_1_54757B8B62FBF467_OFFSET UNITYSDK_OFFSET(0x1671E250)
#define CLASS_1_8FB027E4F0CF7ACD_CLASS_1_39070A33D94340C6_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1671E240)

inline static constexpr unsigned int Class_1_8FB027E4F0CF7ACD_Class_1_39070A33D94340C6_3_TypeDefinitionIndex = 61299;

class Class_1_8FB027E4F0CF7ACD_Class_1_39070A33D94340C6_3 : public ::System::Object
{
public:
	::MoleMole::Cameras::NapVirtualPipelineCamera* Field_1_1; // 0x10
	::PipelineCamera::CameraCommandUnSpawnSubModules* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FB027E4F0CF7ACD_CLASS_1_39070A33D94340C6_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_54757B8B62FBF467()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FB027E4F0CF7ACD_CLASS_1_39070A33D94340C6_3_METHOD_1_54757B8B62FBF467_OFFSET))(this);
	}
};
