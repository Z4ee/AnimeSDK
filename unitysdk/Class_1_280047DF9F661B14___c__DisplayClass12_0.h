#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_557;
class Class_1_68CF822132788D19_1;
class Class_1_8C3AC9786B6764EF;
class Class_2_4F354829EBADAFFE;
class Class_2_7419679A7698613D;
class Class_3_08C03CCF6D996B66;
class Class_3_2FC2494FD325AA4E;
class Class_3_6A84DB777CB2DE7F;
class Class_3_A33DDC5AB90F7A92;

#define CLASS_1_280047DF9F661B14___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x96409A0)
#define CLASS_1_280047DF9F661B14___C__DISPLAYCLASS12_0__STARTFORPREDOWNLOADSIZE_B__0_OFFSET UNITYSDK_OFFSET(0x96409B0)

inline static constexpr unsigned int Class_1_280047DF9F661B14___c__DisplayClass12_0_TypeDefinitionIndex = 54892;

class Class_1_280047DF9F661B14___c__DisplayClass12_0 : public ::System::Object
{
public:
	::Class_2_4F354829EBADAFFE* audioHPatch; // 0x10
	::Class_1_8C3AC9786B6764EF* queue; // 0x18
	::Class_3_A33DDC5AB90F7A92* videoData; // 0x20
	::Class_3_08C03CCF6D996B66* audioData; // 0x28
	::Class_3_6A84DB777CB2DE7F* rawData; // 0x30
	::Class_2_7419679A7698613D* blockHPatch; // 0x38
	::Class_3_2FC2494FD325AA4E* blockData; // 0x40
	::Class_1_68CF822132788D19_1* archiveData; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_280047DF9F661B14___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartForPreDownloadSize_b__0(::Class_0_16E4307DCC419505_557* progress)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_557*))((::PBYTE)hIl2Cpp + CLASS_1_280047DF9F661B14___C__DISPLAYCLASS12_0__STARTFORPREDOWNLOADSIZE_B__0_OFFSET))(this, progress);
	}
};
