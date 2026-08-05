#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define CLASS_1_36BB65AB28C47D14_CLASS_1_39070A33D94340C6_8_METHOD_1_54757B8B62FBF467_OFFSET UNITYSDK_OFFSET(0x14E7BAA0)
#define CLASS_1_36BB65AB28C47D14_CLASS_1_39070A33D94340C6_8__CTOR_OFFSET UNITYSDK_OFFSET(0x14E7BA90)

inline static constexpr unsigned int Class_1_36BB65AB28C47D14_Class_1_39070A33D94340C6_8_TypeDefinitionIndex = 64531;

class Class_1_36BB65AB28C47D14_Class_1_39070A33D94340C6_8 : public ::System::Object
{
public:
	::MoleMole::Cameras::NapVirtualPipelineCamera* Field_1_1; // 0x10
	::PipelineCamera::CameraCommandUnSpawnSubModules* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36BB65AB28C47D14_CLASS_1_39070A33D94340C6_8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_54757B8B62FBF467()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36BB65AB28C47D14_CLASS_1_39070A33D94340C6_8_METHOD_1_54757B8B62FBF467_OFFSET))(this);
	}
};
