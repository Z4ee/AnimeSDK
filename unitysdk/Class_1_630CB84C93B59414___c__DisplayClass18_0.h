#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_650;
class Class_1_68CF822132788D19_1;
class Class_1_8CA784D26D9A6CF7;
class Class_2_4882D51538AB1BD1;
class Class_2_570C2CCF5D0BF6A1;
class Class_2_5D2387066E2BACFE;
class Class_2_7419679A7698613D;
class Class_2_7B2C949E9A2AA065;
class Class_2_8885F8F36A0762BF;

#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x162BD6E0)
#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS18_0__STARTFORDOWNLOADSIZE_B__0_OFFSET UNITYSDK_OFFSET(0x162D2160)

inline static constexpr unsigned int Class_1_630CB84C93B59414___c__DisplayClass18_0_TypeDefinitionIndex = 59653;

class Class_1_630CB84C93B59414___c__DisplayClass18_0 : public ::System::Object
{
public:
	::Class_2_4882D51538AB1BD1* videoData; // 0x10
	::Class_2_570C2CCF5D0BF6A1* audioHPatch; // 0x18
	::Class_2_7B2C949E9A2AA065* blockData; // 0x20
	::Class_1_8CA784D26D9A6CF7* queue; // 0x28
	::Class_2_5D2387066E2BACFE* audioData; // 0x30
	::Class_2_8885F8F36A0762BF* rawData; // 0x38
	::Class_2_7419679A7698613D* blockHPatch; // 0x40
	::Class_1_68CF822132788D19_1* archiveData; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartForDownloadSize_b__0(::Class_0_16E4307DCC419505_650* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_650*))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS18_0__STARTFORDOWNLOADSIZE_B__0_OFFSET))(this, a1);
	}
};
