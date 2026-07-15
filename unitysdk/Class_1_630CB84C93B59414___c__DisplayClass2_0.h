#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_614;
class Class_1_630CB84C93B59414;
class Class_1_C6B3B57B6E91674E;
class Class_2_B40829637678745E;

#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14A2CD40)
#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS2_0__STARTFORTEXTMAPPACK_B__1_OFFSET UNITYSDK_OFFSET(0x14A47FC0)
#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS2_0__STARTFORTEXTMAPPACK_B__2_OFFSET UNITYSDK_OFFSET(0x14A48040)
#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS2_0__STARTFORTEXTMAPPACK_G__RESETTEXTMAPONLYFLAG_0_OFFSET UNITYSDK_OFFSET(0x14A47FA0)

inline static constexpr unsigned int Class_1_630CB84C93B59414___c__DisplayClass2_0_TypeDefinitionIndex = 56871;

class Class_1_630CB84C93B59414___c__DisplayClass2_0 : public ::System::Object
{
public:
	::Class_2_B40829637678745E* designData; // 0x10
	::Class_1_C6B3B57B6E91674E* queue; // 0x18
	::Class_1_630CB84C93B59414* __4__this; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartForTextmapPack_g__ResetTextmapOnlyFlag_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS2_0__STARTFORTEXTMAPPACK_G__RESETTEXTMAPONLYFLAG_0_OFFSET))(this);
	}

	::System::Void _StartForTextmapPack_b__1(::Class_0_16E4307DCC419505_614* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_614*))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS2_0__STARTFORTEXTMAPPACK_B__1_OFFSET))(this, a1);
	}

	::System::Void _StartForTextmapPack_b__2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS2_0__STARTFORTEXTMAPPACK_B__2_OFFSET))(this);
	}
};
