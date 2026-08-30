#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_4E0C8860CC2DF441_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C38B6C0)
#define CLASS_1_4E0C8860CC2DF441_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x1C38B650)
#define CLASS_1_4E0C8860CC2DF441__CTOR_OFFSET UNITYSDK_OFFSET(0x1C38B720)

inline static constexpr unsigned int Class_1_4E0C8860CC2DF441_TypeDefinitionIndex = 40441;

class Class_1_4E0C8860CC2DF441 : public ::System::Object
{
public:
	::System::Single ECNOGDLLGGL; // 0x10
	::System::Single GAFLJIDILOD; // 0x14
	::System::Boolean KKKIONIDKFA; // 0x18
	::System::Boolean JECALMAPHOI; // 0x19
	::System::Int32 LCHMGOKEHBA; // 0x1C
	::System::Int32 IIACAMLDMFF; // 0x20

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
