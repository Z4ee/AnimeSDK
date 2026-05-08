#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_6D3799F67B8415DA_Class_1_8B04BC1159D82A1F;
namespace MoleMole::Config { class ConfigCameraStretchs; }

#define CLASS_1_6D3799F67B8415DA_CLASS_1_67BEBCC3AF1C8E1A_METHOD_1_B83FB13ACFF5438C_OFFSET UNITYSDK_OFFSET(0x141C14B0)
#define CLASS_1_6D3799F67B8415DA_CLASS_1_67BEBCC3AF1C8E1A__CTOR_OFFSET UNITYSDK_OFFSET(0x141C14A0)

inline static constexpr unsigned int Class_1_6D3799F67B8415DA_Class_1_67BEBCC3AF1C8E1A_TypeDefinitionIndex = 60486;

class Class_1_6D3799F67B8415DA_Class_1_67BEBCC3AF1C8E1A : public ::System::Object
{
public:
	::Class_1_6D3799F67B8415DA_Class_1_8B04BC1159D82A1F* Field_1_1; // 0x10
	::Foundation::AssetPath Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_CLASS_1_67BEBCC3AF1C8E1A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B83FB13ACFF5438C(::MoleMole::Config::ConfigCameraStretchs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraStretchs*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_CLASS_1_67BEBCC3AF1C8E1A_METHOD_1_B83FB13ACFF5438C_OFFSET))(this, a1);
	}
};
