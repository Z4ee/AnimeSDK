#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_6D3799F67B8415DA_Class_1_4D37EE27A5EF72F4;
namespace MoleMole::Config { class ConfigCameraCutscenes; }

#define CLASS_1_6D3799F67B8415DA_CLASS_1_99C3D9B3F9645927_METHOD_1_03B843F1C75F5E3D_OFFSET UNITYSDK_OFFSET(0x1352E4E0)
#define CLASS_1_6D3799F67B8415DA_CLASS_1_99C3D9B3F9645927__CTOR_OFFSET UNITYSDK_OFFSET(0x1352E4D0)

inline static constexpr unsigned int Class_1_6D3799F67B8415DA_Class_1_99C3D9B3F9645927_TypeDefinitionIndex = 85499;

class Class_1_6D3799F67B8415DA_Class_1_99C3D9B3F9645927 : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_0; // 0x10
	::Class_1_6D3799F67B8415DA_Class_1_4D37EE27A5EF72F4* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_CLASS_1_99C3D9B3F9645927__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_03B843F1C75F5E3D(::MoleMole::Config::ConfigCameraCutscenes* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraCutscenes*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_CLASS_1_99C3D9B3F9645927_METHOD_1_03B843F1C75F5E3D_OFFSET))(this, a1);
	}
};
