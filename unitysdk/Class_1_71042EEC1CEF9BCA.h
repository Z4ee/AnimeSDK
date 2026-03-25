#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_569DE47525C5FD32;

#define CLASS_1_71042EEC1CEF9BCA_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x16662960)
#define CLASS_1_71042EEC1CEF9BCA__CTOR_OFFSET UNITYSDK_OFFSET(0x166398D0)

inline static constexpr unsigned int Class_1_71042EEC1CEF9BCA_TypeDefinitionIndex = 28343;

class Class_1_71042EEC1CEF9BCA : public ::System::Object
{
public:
	::Class_2_569DE47525C5FD32* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71042EEC1CEF9BCA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_71042EEC1CEF9BCA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_71042EEC1CEF9BCA*))((::PBYTE)hIl2Cpp + CLASS_1_71042EEC1CEF9BCA_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}
};
