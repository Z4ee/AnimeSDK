#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_579;
class Class_1_68CF822132788D19_1;
class Class_1_C6B3B57B6E91674E;
class Class_2_2A1BB8EAC9D2CDE7;
class Class_2_3487C21D96C73186;
class Class_2_72710C1D0F2BEFEA;
class Class_2_7419679A7698613D;
class Class_2_7B2C949E9A2AA065;
class Class_2_C5B09DEAAF6D0487;

#define CLASS_1_275454CE65A12492___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14380480)
#define CLASS_1_275454CE65A12492___C__DISPLAYCLASS18_0__STARTFORDOWNLOADSIZE_B__0_OFFSET UNITYSDK_OFFSET(0x14393EB0)

inline static constexpr unsigned int Class_1_275454CE65A12492___c__DisplayClass18_0_TypeDefinitionIndex = 55628;

class Class_1_275454CE65A12492___c__DisplayClass18_0 : public ::System::Object
{
public:
	::Class_1_68CF822132788D19_1* archiveData; // 0x10
	::Class_2_7B2C949E9A2AA065* blockData; // 0x18
	::Class_2_2A1BB8EAC9D2CDE7* rawData; // 0x20
	::Class_2_C5B09DEAAF6D0487* audioHPatch; // 0x28
	::Class_2_7419679A7698613D* blockHPatch; // 0x30
	::Class_2_3487C21D96C73186* audioData; // 0x38
	::Class_2_72710C1D0F2BEFEA* videoData; // 0x40
	::Class_1_C6B3B57B6E91674E* queue; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartForDownloadSize_b__0(::Class_0_16E4307DCC419505_579* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_579*))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492___C__DISPLAYCLASS18_0__STARTFORDOWNLOADSIZE_B__0_OFFSET))(this, a1);
	}
};
