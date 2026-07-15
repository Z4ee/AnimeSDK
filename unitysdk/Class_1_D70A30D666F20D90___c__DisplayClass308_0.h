#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_303D5A33D1401D59;
namespace System { class String; }

#define CLASS_1_D70A30D666F20D90___C__DISPLAYCLASS308_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1532BE20)
#define CLASS_1_D70A30D666F20D90___C__DISPLAYCLASS308_0__GETALIASBLOCK_B__0_OFFSET UNITYSDK_OFFSET(0x15331ED0)

inline static constexpr unsigned int Class_1_D70A30D666F20D90___c__DisplayClass308_0_TypeDefinitionIndex = 70384;

class Class_1_D70A30D666F20D90___c__DisplayClass308_0 : public ::System::Object
{
public:
	::System::String* sBlockALias; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D70A30D666F20D90___C__DISPLAYCLASS308_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetAliasBlock_b__0(::Class_1_303D5A33D1401D59* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + CLASS_1_D70A30D666F20D90___C__DISPLAYCLASS308_0__GETALIASBLOCK_B__0_OFFSET))(this, a1);
	}
};
