#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_614;
class Class_1_68CF822132788D19_1;
class Class_1_C6B3B57B6E91674E;
class Class_2_570C2CCF5D0BF6A1;
class Class_2_7419679A7698613D;
class Class_3_2FC2494FD325AA4E;
class Class_3_72DC7E86C5A143B1;
class Class_3_982A0CE2B97E34BE;
class Class_3_9E501D3882FC1680;

#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14A32250)
#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS16_0__STARTFORPREDOWNLOADSIZE_B__0_OFFSET UNITYSDK_OFFSET(0x14A46710)

inline static constexpr unsigned int Class_1_630CB84C93B59414___c__DisplayClass16_0_TypeDefinitionIndex = 56863;

class Class_1_630CB84C93B59414___c__DisplayClass16_0 : public ::System::Object
{
public:
	::Class_3_2FC2494FD325AA4E* blockData; // 0x10
	::Class_3_982A0CE2B97E34BE* audioData; // 0x18
	::Class_1_68CF822132788D19_1* archiveData; // 0x20
	::Class_3_9E501D3882FC1680* rawData; // 0x28
	::Class_2_570C2CCF5D0BF6A1* audioHPatch; // 0x30
	::Class_1_C6B3B57B6E91674E* queue; // 0x38
	::Class_2_7419679A7698613D* blockHPatch; // 0x40
	::Class_3_72DC7E86C5A143B1* videoData; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartForPreDownloadSize_b__0(::Class_0_16E4307DCC419505_614* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_614*))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS16_0__STARTFORPREDOWNLOADSIZE_B__0_OFFSET))(this, a1);
	}
};
