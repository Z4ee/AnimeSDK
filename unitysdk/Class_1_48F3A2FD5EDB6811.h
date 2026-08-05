#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_281;

#define CLASS_1_48F3A2FD5EDB6811_METHOD_1_44BA64035C6F3CA7_OFFSET UNITYSDK_OFFSET(0x1762A900)
#define CLASS_1_48F3A2FD5EDB6811__CCTOR_OFFSET UNITYSDK_OFFSET(0x1762A8C0)

inline static constexpr unsigned int Class_1_48F3A2FD5EDB6811_TypeDefinitionIndex = 51945;

class Class_1_48F3A2FD5EDB6811 : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_281** StaticGet_Field_1_0()
	{
		return (::Class_0_16E4307DCC419505_281**)Il2CppClass::FromTypeDefinitionIndex(Class_1_48F3A2FD5EDB6811_TypeDefinitionIndex)->GetStaticField(0x503D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_48F3A2FD5EDB6811__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_281* Method_1_44BA64035C6F3CA7()
	{
		return ((::Class_0_16E4307DCC419505_281*(*)())((::PBYTE)hIl2Cpp + CLASS_1_48F3A2FD5EDB6811_METHOD_1_44BA64035C6F3CA7_OFFSET))();
	}
};
