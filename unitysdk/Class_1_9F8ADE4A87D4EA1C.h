#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2C2DA62D5BBB20B1_PreloadType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_9F8ADE4A87D4EA1C__CCTOR_OFFSET UNITYSDK_OFFSET(0x90D00A0)
#define CLASS_1_9F8ADE4A87D4EA1C__CTOR_OFFSET UNITYSDK_OFFSET(0x90D0090)

inline static constexpr unsigned int Class_1_9F8ADE4A87D4EA1C_TypeDefinitionIndex = 55052;

class Class_1_9F8ADE4A87D4EA1C : public ::System::Object
{
public:
	static ::Class_1_2C2DA62D5BBB20B1_PreloadType* StaticGet_Field_1_1()
	{
		return (::Class_1_2C2DA62D5BBB20B1_PreloadType*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9F8ADE4A87D4EA1C_TypeDefinitionIndex)->GetStaticField(0x5F40);
	}
	static ::Class_1_2C2DA62D5BBB20B1_PreloadType* StaticGet_Field_1_0()
	{
		return (::Class_1_2C2DA62D5BBB20B1_PreloadType*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9F8ADE4A87D4EA1C_TypeDefinitionIndex)->GetStaticField(0x5F44);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F8ADE4A87D4EA1C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9F8ADE4A87D4EA1C__CCTOR_OFFSET))();
	}
};
