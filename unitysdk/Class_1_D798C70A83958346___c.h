#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D798C70A83958346;

#define CLASS_1_D798C70A83958346___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA8EF10)
#define CLASS_1_D798C70A83958346___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA8EF50)
#define CLASS_1_D798C70A83958346___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EA8EF60)

inline static constexpr unsigned int Class_1_D798C70A83958346___c_TypeDefinitionIndex = 31538;

class Class_1_D798C70A83958346___c : public ::System::Object
{
public:
	static ::Class_1_D798C70A83958346___c** StaticGet___9()
	{
		return (::Class_1_D798C70A83958346___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D798C70A83958346___c_TypeDefinitionIndex)->GetStaticField(0x5BF20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D798C70A83958346___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D798C70A83958346___C__CTOR_OFFSET))(this);
	}

	::Class_1_D798C70A83958346* __cctor_b__33_0()
	{
		return ((::Class_1_D798C70A83958346*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D798C70A83958346___C___CCTOR_B__33_0_OFFSET))(this);
	}
};
