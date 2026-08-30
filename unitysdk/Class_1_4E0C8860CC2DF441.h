#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_4E0C8860CC2DF441_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BE2ED30)
#define CLASS_1_4E0C8860CC2DF441_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x1BE2ECC0)
#define CLASS_1_4E0C8860CC2DF441__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE2ED90)

inline static constexpr unsigned int Class_1_4E0C8860CC2DF441_TypeDefinitionIndex = 40441;

class Class_1_4E0C8860CC2DF441 : public ::System::Object
{
public:
	::System::Int32 LCHMGOKEHBA; // 0x10
	::System::Int32 IIACAMLDMFF; // 0x14
	::System::Boolean KKKIONIDKFA; // 0x18
	::System::Boolean JECALMAPHOI; // 0x19
	::System::Single ECNOGDLLGGL; // 0x1C
	::System::Single GAFLJIDILOD; // 0x20

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
