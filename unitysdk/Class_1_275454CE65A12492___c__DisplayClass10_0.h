#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_579;
class Class_1_275454CE65A12492;
class Class_1_C6B3B57B6E91674E;
class Class_2_3487C21D96C73186;

#define CLASS_1_275454CE65A12492___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1437DC80)
#define CLASS_1_275454CE65A12492___C__DISPLAYCLASS10_0__STARTFORAUDIOPACKV2_B__0_OFFSET UNITYSDK_OFFSET(0x14392E30)
#define CLASS_1_275454CE65A12492___C__DISPLAYCLASS10_0__STARTFORAUDIOPACKV2_B__1_OFFSET UNITYSDK_OFFSET(0x14392EB0)

inline static constexpr unsigned int Class_1_275454CE65A12492___c__DisplayClass10_0_TypeDefinitionIndex = 55620;

class Class_1_275454CE65A12492___c__DisplayClass10_0 : public ::System::Object
{
public:
	::Class_1_275454CE65A12492* __4__this; // 0x10
	::Class_2_3487C21D96C73186* audioData; // 0x18
	::Class_1_C6B3B57B6E91674E* queue; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartForAudioPackV2_b__0(::Class_0_16E4307DCC419505_579* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_579*))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492___C__DISPLAYCLASS10_0__STARTFORAUDIOPACKV2_B__0_OFFSET))(this, a1);
	}

	::System::Void _StartForAudioPackV2_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492___C__DISPLAYCLASS10_0__STARTFORAUDIOPACKV2_B__1_OFFSET))(this);
	}
};
