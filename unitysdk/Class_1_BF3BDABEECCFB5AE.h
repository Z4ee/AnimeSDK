#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_866;
namespace System { class String; }

#define CLASS_1_BF3BDABEECCFB5AE_METHOD_1_EA6D07C89717E56F_OFFSET UNITYSDK_OFFSET(0x13A208F0)
#define CLASS_1_BF3BDABEECCFB5AE__CTOR_OFFSET UNITYSDK_OFFSET(0x13A20A60)

inline static constexpr unsigned int Class_1_BF3BDABEECCFB5AE_TypeDefinitionIndex = 62883;

class Class_1_BF3BDABEECCFB5AE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF3BDABEECCFB5AE__CTOR_OFFSET))(this);
	}

	::System::Object* Method_1_EA6D07C89717E56F(::System::String* a1, ::Class_0_16E4307DCC419505_866* a2)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_866*))((::PBYTE)hIl2Cpp + CLASS_1_BF3BDABEECCFB5AE_METHOD_1_EA6D07C89717E56F_OFFSET))(this, a1, a2);
	}
};
