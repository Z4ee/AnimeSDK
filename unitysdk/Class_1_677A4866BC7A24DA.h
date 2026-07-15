#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E012177D06C0B2FD;
namespace RPG::GameCore { class DeviceSettingConfig; }

#define CLASS_1_677A4866BC7A24DA_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x15DF5AD0)
#define CLASS_1_677A4866BC7A24DA_METHOD_1_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0x15DF5DD0)
#define CLASS_1_677A4866BC7A24DA_METHOD_1_BAD4FD950C310B05_OFFSET UNITYSDK_OFFSET(0x15DF5D70)

inline static constexpr unsigned int Class_1_677A4866BC7A24DA_TypeDefinitionIndex = 65242;

class Class_1_677A4866BC7A24DA : public ::System::Object
{
public:
	static ::Class_1_E012177D06C0B2FD** StaticGet_Field_1_0()
	{
		return (::Class_1_E012177D06C0B2FD**)Il2CppClass::FromTypeDefinitionIndex(Class_1_677A4866BC7A24DA_TypeDefinitionIndex)->GetStaticField(0xCC20);
	}
	static ::RPG::GameCore::DeviceSettingConfig** StaticGet_Field_1_1()
	{
		return (::RPG::GameCore::DeviceSettingConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_677A4866BC7A24DA_TypeDefinitionIndex)->GetStaticField(0xCC28);
	}

	static ::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_677A4866BC7A24DA_METHOD_1_4307B2A4B4A12C1A_OFFSET))();
	}

	static ::RPG::GameCore::DeviceSettingConfig* Method_1_BAD4FD950C310B05()
	{
		return ((::RPG::GameCore::DeviceSettingConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_677A4866BC7A24DA_METHOD_1_BAD4FD950C310B05_OFFSET))();
	}

	static ::Class_1_E012177D06C0B2FD* Method_1_9C06C768B25E4E13()
	{
		return ((::Class_1_E012177D06C0B2FD*(*)())((::PBYTE)hIl2Cpp + CLASS_1_677A4866BC7A24DA_METHOD_1_9C06C768B25E4E13_OFFSET))();
	}
};
