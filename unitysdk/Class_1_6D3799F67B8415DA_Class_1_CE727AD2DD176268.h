#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_6D3799F67B8415DA_Class_1_F6CF446D65DF58A2_7;
namespace MoleMole::Cameras { class ConfigCameraBangbooAdjustment; }

#define CLASS_1_6D3799F67B8415DA_CLASS_1_CE727AD2DD176268_METHOD_1_1B37831DA9D6FC51_OFFSET UNITYSDK_OFFSET(0x14B9E110)
#define CLASS_1_6D3799F67B8415DA_CLASS_1_CE727AD2DD176268__CTOR_OFFSET UNITYSDK_OFFSET(0x14B9E100)

inline static constexpr unsigned int Class_1_6D3799F67B8415DA_Class_1_CE727AD2DD176268_TypeDefinitionIndex = 59843;

class Class_1_6D3799F67B8415DA_Class_1_CE727AD2DD176268 : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_1; // 0x10
	::Class_1_6D3799F67B8415DA_Class_1_F6CF446D65DF58A2_7* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_CLASS_1_CE727AD2DD176268__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1B37831DA9D6FC51(::MoleMole::Cameras::ConfigCameraBangbooAdjustment* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::ConfigCameraBangbooAdjustment*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_CLASS_1_CE727AD2DD176268_METHOD_1_1B37831DA9D6FC51_OFFSET))(this, a1);
	}
};
