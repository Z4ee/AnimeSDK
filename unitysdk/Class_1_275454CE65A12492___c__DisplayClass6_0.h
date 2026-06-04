#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_579;
class Class_1_275454CE65A12492;
class Class_1_68CF822132788D19_1;
class Class_1_C6B3B57B6E91674E;
class Class_2_047DF171B0451D59;
class Class_2_284A19013466AED1;
class Class_2_2A1BB8EAC9D2CDE7;
class Class_2_3B9018CA38E7C0D5;
class Class_2_7B2C949E9A2AA065;
class Class_2_8D8DB2CAD5492014;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_275454CE65A12492___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1437C740)
#define CLASS_1_275454CE65A12492___C__DISPLAYCLASS6_0__STARTFORMIDPACKPS_B__0_OFFSET UNITYSDK_OFFSET(0x14395BA0)
#define CLASS_1_275454CE65A12492___C__DISPLAYCLASS6_0__STARTFORMIDPACKPS_B__1_OFFSET UNITYSDK_OFFSET(0x14396EF0)
#define CLASS_1_275454CE65A12492___C__DISPLAYCLASS6_0__STARTFORMIDPACKPS_B__2_OFFSET UNITYSDK_OFFSET(0x14396F10)

inline static constexpr unsigned int Class_1_275454CE65A12492___c__DisplayClass6_0_TypeDefinitionIndex = 55643;

class Class_1_275454CE65A12492___c__DisplayClass6_0 : public ::System::Object
{
public:
	::Class_1_C6B3B57B6E91674E* queue; // 0x10
	::Class_1_275454CE65A12492* __4__this; // 0x18
	::Class_2_2A1BB8EAC9D2CDE7* rawData; // 0x20
	::Class_1_68CF822132788D19_1* archiveData; // 0x28
	::Class_2_3B9018CA38E7C0D5* nativeData; // 0x30
	::Class_2_284A19013466AED1* startData; // 0x38
	::System::Action_1<::Class_0_16E4307DCC419505_579*>* __9__1; // 0x40
	::Class_2_8D8DB2CAD5492014* designData; // 0x48
	::Class_2_7B2C949E9A2AA065* blockData; // 0x50
	::Class_2_047DF171B0451D59* luaData; // 0x58
	::RPG::Client::TextID progressDescText; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartForMidPackPS_b__0(::Class_0_16E4307DCC419505_579* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_579*))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492___C__DISPLAYCLASS6_0__STARTFORMIDPACKPS_B__0_OFFSET))(this, a1);
	}

	::System::Void _StartForMidPackPS_b__1(::Class_0_16E4307DCC419505_579* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_579*))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492___C__DISPLAYCLASS6_0__STARTFORMIDPACKPS_B__1_OFFSET))(this, a1);
	}

	::System::Void _StartForMidPackPS_b__2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492___C__DISPLAYCLASS6_0__STARTFORMIDPACKPS_B__2_OFFSET))(this);
	}
};
