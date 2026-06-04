#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_579;
class Class_1_68CF822132788D19_1;
class Class_1_C6B3B57B6E91674E;
class Class_2_8D8DB2CAD5492014;
class Class_2_C5B09DEAAF6D0487_1;

#define CLASS_1_275454CE65A12492___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1437C260)
#define CLASS_1_275454CE65A12492___C__DISPLAYCLASS5_0__STARTFORTEXTMAPPACKSIZE_B__0_OFFSET UNITYSDK_OFFSET(0x14394CC0)

inline static constexpr unsigned int Class_1_275454CE65A12492___c__DisplayClass5_0_TypeDefinitionIndex = 55638;

class Class_1_275454CE65A12492___c__DisplayClass5_0 : public ::System::Object
{
public:
	::Class_1_68CF822132788D19_1* resArchiveData; // 0x10
	::Class_2_8D8DB2CAD5492014* designData; // 0x18
	::Class_1_C6B3B57B6E91674E* queue; // 0x20
	::Class_2_C5B09DEAAF6D0487_1* designHPatch; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartForTextmapPackSize_b__0(::Class_0_16E4307DCC419505_579* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_579*))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492___C__DISPLAYCLASS5_0__STARTFORTEXTMAPPACKSIZE_B__0_OFFSET))(this, a1);
	}
};
