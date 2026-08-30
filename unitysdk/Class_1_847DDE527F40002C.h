#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_413D5A0FF338BAB8;
class Class_1_D2C97E5E9F60802E;
class Class_2_68CB91321C3E76A7;

#define CLASS_1_847DDE527F40002C_METHOD_1_50255BA66147653B_OFFSET UNITYSDK_OFFSET(0x18723230)
#define CLASS_1_847DDE527F40002C__CCTOR_OFFSET UNITYSDK_OFFSET(0x187232C0)
#define CLASS_1_847DDE527F40002C__CTOR_OFFSET UNITYSDK_OFFSET(0x187232B0)

inline static constexpr unsigned int Class_1_847DDE527F40002C_TypeDefinitionIndex = 76825;

class Class_1_847DDE527F40002C : public ::System::Object
{
public:
	static ::Class_1_847DDE527F40002C** StaticGet_FMJPMFEDIJL()
	{
		return (::Class_1_847DDE527F40002C**)Il2CppClass::FromTypeDefinitionIndex(Class_1_847DDE527F40002C_TypeDefinitionIndex)->GetStaticField(0x2A170);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_847DDE527F40002C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_847DDE527F40002C__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_50255BA66147653B(::Class_1_413D5A0FF338BAB8* a1, ::Class_1_D2C97E5E9F60802E* a2, ::Class_2_68CB91321C3E76A7* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_413D5A0FF338BAB8*, ::Class_1_D2C97E5E9F60802E*, ::Class_2_68CB91321C3E76A7*))((::PBYTE)hIl2Cpp + CLASS_1_847DDE527F40002C_METHOD_1_50255BA66147653B_OFFSET))(this, a1, a2, a3);
	}
};
