#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E012177D06C0B2FD;
namespace RPG::GameCore { class DeviceSettingConfig; }

#define CLASS_1_677A4866BC7A24DA_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x133258F0)
#define CLASS_1_677A4866BC7A24DA_METHOD_1_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0x13325BF0)
#define CLASS_1_677A4866BC7A24DA_METHOD_1_BAD4FD950C310B05_OFFSET UNITYSDK_OFFSET(0x13325B90)

inline static constexpr unsigned int Class_1_677A4866BC7A24DA_TypeDefinitionIndex = 68285;

class Class_1_677A4866BC7A24DA : public ::System::Object
{
public:
	static ::Class_1_E012177D06C0B2FD** StaticGet_HMPDKCFLOFJ()
	{
		return (::Class_1_E012177D06C0B2FD**)Il2CppClass::FromTypeDefinitionIndex(Class_1_677A4866BC7A24DA_TypeDefinitionIndex)->GetStaticField(0x6FDF0);
	}
	static ::RPG::GameCore::DeviceSettingConfig** StaticGet_KGKBIIIAJCL()
	{
		return (::RPG::GameCore::DeviceSettingConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_677A4866BC7A24DA_TypeDefinitionIndex)->GetStaticField(0x6FDF8);
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
