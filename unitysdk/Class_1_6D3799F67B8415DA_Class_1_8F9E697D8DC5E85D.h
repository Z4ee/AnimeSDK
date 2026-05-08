#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_6D3799F67B8415DA_Class_1_255548A0B71F6309;
namespace MoleMole::Config { class ConfigCameraScreenOffsetDatas; }

#define CLASS_1_6D3799F67B8415DA_CLASS_1_8F9E697D8DC5E85D_METHOD_1_C660E641AA2B6150_OFFSET UNITYSDK_OFFSET(0x12CF0B00)
#define CLASS_1_6D3799F67B8415DA_CLASS_1_8F9E697D8DC5E85D__CTOR_OFFSET UNITYSDK_OFFSET(0x12CF0AF0)

inline static constexpr unsigned int Class_1_6D3799F67B8415DA_Class_1_8F9E697D8DC5E85D_TypeDefinitionIndex = 60494;

class Class_1_6D3799F67B8415DA_Class_1_8F9E697D8DC5E85D : public ::System::Object
{
public:
	::Class_1_6D3799F67B8415DA_Class_1_255548A0B71F6309* Field_1_1; // 0x10
	::Foundation::AssetPath Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_CLASS_1_8F9E697D8DC5E85D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C660E641AA2B6150(::MoleMole::Config::ConfigCameraScreenOffsetDatas* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraScreenOffsetDatas*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_CLASS_1_8F9E697D8DC5E85D_METHOD_1_C660E641AA2B6150_OFFSET))(this, a1);
	}
};
