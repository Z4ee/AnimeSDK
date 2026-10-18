#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_741;
class Class_1_68CF822132788D19_1;
class Class_1_D7FE7C0ADCE6BFB9;
class Class_2_570C2CCF5D0BF6A1;
class Class_2_7419679A7698613D;
class Class_3_13806029858BD70C;
class Class_3_2FC2494FD325AA4E;
class Class_3_3F5416469B6F16E3;
class Class_3_9E501D3882FC1680;

#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB1D0E50)
#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS16_0__STARTFORPREDOWNLOADSIZE_B__0_OFFSET UNITYSDK_OFFSET(0xB1E54A0)

inline static constexpr unsigned int Class_1_630CB84C93B59414___c__DisplayClass16_0_TypeDefinitionIndex = 59506;

class Class_1_630CB84C93B59414___c__DisplayClass16_0 : public ::System::Object
{
public:
	::Class_3_13806029858BD70C* videoData; // 0x10
	::Class_3_3F5416469B6F16E3* audioData; // 0x18
	::Class_3_9E501D3882FC1680* rawData; // 0x20
	::Class_1_D7FE7C0ADCE6BFB9* queue; // 0x28
	::Class_3_2FC2494FD325AA4E* blockData; // 0x30
	::Class_2_7419679A7698613D* blockHPatch; // 0x38
	::Class_2_570C2CCF5D0BF6A1* audioHPatch; // 0x40
	::Class_1_68CF822132788D19_1* archiveData; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartForPreDownloadSize_b__0(::Class_0_16E4307DCC419505_741* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_741*))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS16_0__STARTFORPREDOWNLOADSIZE_B__0_OFFSET))(this, a1);
	}
};
