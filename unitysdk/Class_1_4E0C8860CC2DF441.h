#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_4E0C8860CC2DF441_CLEAR_OFFSET UNITYSDK_OFFSET(0x17EE5A10)
#define CLASS_1_4E0C8860CC2DF441_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x17EE5990)
#define CLASS_1_4E0C8860CC2DF441__CTOR_OFFSET UNITYSDK_OFFSET(0x17EE5A60)

inline static constexpr unsigned int Class_1_4E0C8860CC2DF441_TypeDefinitionIndex = 38019;

class Class_1_4E0C8860CC2DF441 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x14
	::System::Single Field_1_3; // 0x18
	::System::Int32 Field_1_2; // 0x1C
	::System::Boolean Field_1_4; // 0x20
	::System::Boolean Field_1_5; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E0C8860CC2DF441__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_4E0C8860CC2DF441* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4E0C8860CC2DF441*))((::PBYTE)hIl2Cpp + CLASS_1_4E0C8860CC2DF441_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E0C8860CC2DF441_CLEAR_OFFSET))(this);
	}
};
