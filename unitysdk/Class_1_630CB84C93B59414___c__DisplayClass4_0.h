#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_4FFA1EF262510C03;
class Class_2_8D6A893BEF7BEB75_Class_1_ACF0E08C68D3724A;

#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14A2E240)
#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS4_0__ONDESIGNDATAHPATCHFINISH_B__0_OFFSET UNITYSDK_OFFSET(0x14A480F0)

inline static constexpr unsigned int Class_1_630CB84C93B59414___c__DisplayClass4_0_TypeDefinitionIndex = 56873;

class Class_1_630CB84C93B59414___c__DisplayClass4_0 : public ::System::Object
{
public:
	::Class_2_4FFA1EF262510C03* designPatch; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _OnDesignDataHPatchFinish_b__0(::Class_2_8D6A893BEF7BEB75_Class_1_ACF0E08C68D3724A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_8D6A893BEF7BEB75_Class_1_ACF0E08C68D3724A*))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS4_0__ONDESIGNDATAHPATCHFINISH_B__0_OFFSET))(this, a1);
	}
};
