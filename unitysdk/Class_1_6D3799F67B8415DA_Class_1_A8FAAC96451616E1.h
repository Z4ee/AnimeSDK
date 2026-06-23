#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_6D3799F67B8415DA_Class_1_ADA90F6FF4FE19C6;
namespace MoleMole::Config { class ConfigCameraShakes; }

#define CLASS_1_6D3799F67B8415DA_CLASS_1_A8FAAC96451616E1_METHOD_1_6565C94F09A91755_OFFSET UNITYSDK_OFFSET(0x123DD490)
#define CLASS_1_6D3799F67B8415DA_CLASS_1_A8FAAC96451616E1__CTOR_OFFSET UNITYSDK_OFFSET(0x123DD480)

inline static constexpr unsigned int Class_1_6D3799F67B8415DA_Class_1_A8FAAC96451616E1_TypeDefinitionIndex = 85493;

class Class_1_6D3799F67B8415DA_Class_1_A8FAAC96451616E1 : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_0; // 0x10
	::Class_1_6D3799F67B8415DA_Class_1_ADA90F6FF4FE19C6* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_CLASS_1_A8FAAC96451616E1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6565C94F09A91755(::MoleMole::Config::ConfigCameraShakes* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraShakes*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_CLASS_1_A8FAAC96451616E1_METHOD_1_6565C94F09A91755_OFFSET))(this, a1);
	}
};
