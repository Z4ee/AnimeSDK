#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9C8BB23B0435A836;

#define CLASS_1_13FE4AAA1A281B42___C__DISPLAYCLASS62_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11B1D400)
#define CLASS_1_13FE4AAA1A281B42___C__DISPLAYCLASS62_0__REFRESHSTAGEDICESRENDER_B__0_OFFSET UNITYSDK_OFFSET(0x11B21380)

inline static constexpr unsigned int Class_1_13FE4AAA1A281B42___c__DisplayClass62_0_TypeDefinitionIndex = 55624;

class Class_1_13FE4AAA1A281B42___c__DisplayClass62_0 : public ::System::Object
{
public:
	::Class_1_9C8BB23B0435A836* dice; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42___C__DISPLAYCLASS62_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _RefreshStageDicesRender_b__0(::Class_1_9C8BB23B0435A836* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9C8BB23B0435A836*))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42___C__DISPLAYCLASS62_0__REFRESHSTAGEDICESRENDER_B__0_OFFSET))(this, x);
	}
};
