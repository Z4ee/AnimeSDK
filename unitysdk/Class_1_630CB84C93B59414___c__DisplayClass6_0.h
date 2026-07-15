#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_614;
class Class_1_630CB84C93B59414;
class Class_1_68CF822132788D19_1;
class Class_1_C6B3B57B6E91674E;
class Class_2_7B2C949E9A2AA065;
class Class_2_8885F8F36A0762BF;
class Class_2_B40829637678745E;
class Class_2_D7563FB108CF1D15;
class Class_2_DC042F267E3C3753;
class Class_2_F19F72026F65F4CD;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14A2E930)
#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS6_0__STARTFORMIDPACKPS_B__0_OFFSET UNITYSDK_OFFSET(0x14A49350)
#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS6_0__STARTFORMIDPACKPS_B__1_OFFSET UNITYSDK_OFFSET(0x14A4A730)
#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS6_0__STARTFORMIDPACKPS_B__2_OFFSET UNITYSDK_OFFSET(0x14A4A750)

inline static constexpr unsigned int Class_1_630CB84C93B59414___c__DisplayClass6_0_TypeDefinitionIndex = 56880;

class Class_1_630CB84C93B59414___c__DisplayClass6_0 : public ::System::Object
{
public:
	::Class_1_68CF822132788D19_1* archiveData; // 0x10
	::Class_2_DC042F267E3C3753* nativeData; // 0x18
	::Class_2_B40829637678745E* designData; // 0x20
	::System::Action_1<::Class_0_16E4307DCC419505_614*>* __9__1; // 0x28
	::Class_1_C6B3B57B6E91674E* queue; // 0x30
	::Class_2_7B2C949E9A2AA065* blockData; // 0x38
	::Class_2_8885F8F36A0762BF* rawData; // 0x40
	::Class_2_F19F72026F65F4CD* startData; // 0x48
	::Class_2_D7563FB108CF1D15* luaData; // 0x50
	::Class_1_630CB84C93B59414* __4__this; // 0x58
	::RPG::Client::TextID progressDescText; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartForMidPackPS_b__0(::Class_0_16E4307DCC419505_614* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_614*))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS6_0__STARTFORMIDPACKPS_B__0_OFFSET))(this, a1);
	}

	::System::Void _StartForMidPackPS_b__1(::Class_0_16E4307DCC419505_614* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_614*))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS6_0__STARTFORMIDPACKPS_B__1_OFFSET))(this, a1);
	}

	::System::Void _StartForMidPackPS_b__2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS6_0__STARTFORMIDPACKPS_B__2_OFFSET))(this);
	}
};
