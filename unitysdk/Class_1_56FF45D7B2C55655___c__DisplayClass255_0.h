#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_303D5A33D1401D59;
namespace System { class String; }

#define CLASS_1_56FF45D7B2C55655___C__DISPLAYCLASS255_0__CTOR_OFFSET UNITYSDK_OFFSET(0x88EEA80)
#define CLASS_1_56FF45D7B2C55655___C__DISPLAYCLASS255_0__GETALIASBLOCK_B__0_OFFSET UNITYSDK_OFFSET(0x88F42C0)

inline static constexpr unsigned int Class_1_56FF45D7B2C55655___c__DisplayClass255_0_TypeDefinitionIndex = 60550;

class Class_1_56FF45D7B2C55655___c__DisplayClass255_0 : public ::System::Object
{
public:
	::System::String* sBlockALias; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56FF45D7B2C55655___C__DISPLAYCLASS255_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetAliasBlock_b__0(::Class_1_303D5A33D1401D59* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + CLASS_1_56FF45D7B2C55655___C__DISPLAYCLASS255_0__GETALIASBLOCK_B__0_OFFSET))(this, x);
	}
};
