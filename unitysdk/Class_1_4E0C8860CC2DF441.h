#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_4E0C8860CC2DF441_CLEAR_OFFSET UNITYSDK_OFFSET(0x168D38F0)
#define CLASS_1_4E0C8860CC2DF441_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x168D3870)
#define CLASS_1_4E0C8860CC2DF441__CTOR_OFFSET UNITYSDK_OFFSET(0x168D3950)

inline static constexpr unsigned int Class_1_4E0C8860CC2DF441_TypeDefinitionIndex = 32299;

class Class_1_4E0C8860CC2DF441 : public ::System::Object
{
public:
	::System::Single Field_1_3; // 0x10
	::System::Boolean Field_1_4; // 0x14
	::System::Boolean Field_1_5; // 0x15
	::System::Int32 Field_1_0; // 0x18
	::System::Int32 Field_1_2; // 0x1C
	::System::Single Field_1_1; // 0x20

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
