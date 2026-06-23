#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_6D3799F67B8415DA_Class_1_85A7C7D1D1F4E919;
namespace MoleMole::Config { class ConfigCameraZooms; }

#define CLASS_1_6D3799F67B8415DA_CLASS_1_FB10EB375AD1A72F_METHOD_1_2CF480387A8DDB78_OFFSET UNITYSDK_OFFSET(0x179D9CE0)
#define CLASS_1_6D3799F67B8415DA_CLASS_1_FB10EB375AD1A72F__CTOR_OFFSET UNITYSDK_OFFSET(0x179D9CD0)

inline static constexpr unsigned int Class_1_6D3799F67B8415DA_Class_1_FB10EB375AD1A72F_TypeDefinitionIndex = 85507;

class Class_1_6D3799F67B8415DA_Class_1_FB10EB375AD1A72F : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_0; // 0x10
	::Class_1_6D3799F67B8415DA_Class_1_85A7C7D1D1F4E919* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_CLASS_1_FB10EB375AD1A72F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2CF480387A8DDB78(::MoleMole::Config::ConfigCameraZooms* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraZooms*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_CLASS_1_FB10EB375AD1A72F_METHOD_1_2CF480387A8DDB78_OFFSET))(this, a1);
	}
};
