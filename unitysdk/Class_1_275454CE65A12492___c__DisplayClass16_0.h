#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_579;
class Class_1_68CF822132788D19_1;
class Class_1_C6B3B57B6E91674E;
class Class_2_7419679A7698613D;
class Class_2_C5B09DEAAF6D0487;
class Class_3_2FC2494FD325AA4E;
class Class_3_60C32E1812D076AE;
class Class_3_90CC8B85CFA9144E;
class Class_3_E09386B0C85F8D74;

#define CLASS_1_275454CE65A12492___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1437FDD0)
#define CLASS_1_275454CE65A12492___C__DISPLAYCLASS16_0__STARTFORPREDOWNLOADSIZE_B__0_OFFSET UNITYSDK_OFFSET(0x143933B0)

inline static constexpr unsigned int Class_1_275454CE65A12492___c__DisplayClass16_0_TypeDefinitionIndex = 55626;

class Class_1_275454CE65A12492___c__DisplayClass16_0 : public ::System::Object
{
public:
	::Class_3_90CC8B85CFA9144E* videoData; // 0x10
	::Class_3_60C32E1812D076AE* rawData; // 0x18
	::Class_3_2FC2494FD325AA4E* blockData; // 0x20
	::Class_1_68CF822132788D19_1* archiveData; // 0x28
	::Class_3_E09386B0C85F8D74* audioData; // 0x30
	::Class_2_7419679A7698613D* blockHPatch; // 0x38
	::Class_1_C6B3B57B6E91674E* queue; // 0x40
	::Class_2_C5B09DEAAF6D0487* audioHPatch; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartForPreDownloadSize_b__0(::Class_0_16E4307DCC419505_579* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_579*))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492___C__DISPLAYCLASS16_0__STARTFORPREDOWNLOADSIZE_B__0_OFFSET))(this, a1);
	}
};
