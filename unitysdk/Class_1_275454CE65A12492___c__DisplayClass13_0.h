#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_579;
class Class_1_68CF822132788D19_1;
class Class_1_C6B3B57B6E91674E;
class Class_2_3487C21D96C73186;
class Class_2_C5B09DEAAF6D0487;

#define CLASS_1_275454CE65A12492___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1437F150)
#define CLASS_1_275454CE65A12492___C__DISPLAYCLASS13_0__STARTFORAUDIOPACKSIZE_B__0_OFFSET UNITYSDK_OFFSET(0x14392FB0)

inline static constexpr unsigned int Class_1_275454CE65A12492___c__DisplayClass13_0_TypeDefinitionIndex = 55623;

class Class_1_275454CE65A12492___c__DisplayClass13_0 : public ::System::Object
{
public:
	::Class_2_3487C21D96C73186* audioData; // 0x10
	::Class_1_C6B3B57B6E91674E* queue; // 0x18
	::Class_1_68CF822132788D19_1* resArchiveData; // 0x20
	::Class_2_C5B09DEAAF6D0487* audioHPatch; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartForAudioPackSize_b__0(::Class_0_16E4307DCC419505_579* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_579*))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492___C__DISPLAYCLASS13_0__STARTFORAUDIOPACKSIZE_B__0_OFFSET))(this, a1);
	}
};
