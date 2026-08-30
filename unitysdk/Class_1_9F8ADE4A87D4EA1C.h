#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2C2DA62D5BBB20B1_PreloadType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_9F8ADE4A87D4EA1C__CCTOR_OFFSET UNITYSDK_OFFSET(0x176748C0)
#define CLASS_1_9F8ADE4A87D4EA1C__CTOR_OFFSET UNITYSDK_OFFSET(0x176748B0)

inline static constexpr unsigned int Class_1_9F8ADE4A87D4EA1C_TypeDefinitionIndex = 59815;

class Class_1_9F8ADE4A87D4EA1C : public ::System::Object
{
public:
	static ::Class_1_2C2DA62D5BBB20B1_PreloadType* StaticGet_GPBPJMHOGEF()
	{
		return (::Class_1_2C2DA62D5BBB20B1_PreloadType*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9F8ADE4A87D4EA1C_TypeDefinitionIndex)->GetStaticField(0x1A50);
	}
	static ::Class_1_2C2DA62D5BBB20B1_PreloadType* StaticGet_NMNOGJOHJEK()
	{
		return (::Class_1_2C2DA62D5BBB20B1_PreloadType*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9F8ADE4A87D4EA1C_TypeDefinitionIndex)->GetStaticField(0x1A54);
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
