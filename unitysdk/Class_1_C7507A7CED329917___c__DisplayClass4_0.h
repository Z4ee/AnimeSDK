#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36264895A759B0FF;
namespace System { class String; }

#define CLASS_1_C7507A7CED329917___C__DISPLAYCLASS4_0__BORROW_B__0_OFFSET UNITYSDK_OFFSET(0x9878F30)
#define CLASS_1_C7507A7CED329917___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9878F20)

inline static constexpr unsigned int Class_1_C7507A7CED329917___c__DisplayClass4_0_TypeDefinitionIndex = 45199;

class Class_1_C7507A7CED329917___c__DisplayClass4_0 : public ::System::Object
{
public:
	::System::String* timelinePath; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _Borrow_b__0(::Class_1_36264895A759B0FF* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_36264895A759B0FF*))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917___C__DISPLAYCLASS4_0__BORROW_B__0_OFFSET))(this, x);
	}
};
