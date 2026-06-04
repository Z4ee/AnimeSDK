#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_579;
class Class_1_275454CE65A12492;
class Class_1_68CF822132788D19;
class Class_1_68CF822132788D19_1;
class Class_1_C6B3B57B6E91674E;
class Class_2_047DF171B0451D59;

#define CLASS_1_275454CE65A12492___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x143854B0)
#define CLASS_1_275454CE65A12492___C__DISPLAYCLASS23_0__STARTFORCLOUDUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x143949E0)
#define CLASS_1_275454CE65A12492___C__DISPLAYCLASS23_0__STARTFORCLOUDUPDATE_B__1_OFFSET UNITYSDK_OFFSET(0x14394AD0)

inline static constexpr unsigned int Class_1_275454CE65A12492___c__DisplayClass23_0_TypeDefinitionIndex = 55633;

class Class_1_275454CE65A12492___c__DisplayClass23_0 : public ::System::Object
{
public:
	::Class_1_68CF822132788D19_1* archiveData; // 0x10
	::Class_1_275454CE65A12492* __4__this; // 0x18
	::Class_1_C6B3B57B6E91674E* queue; // 0x20
	::Class_1_68CF822132788D19* archiveDesign; // 0x28
	::Class_2_047DF171B0451D59* luaData; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartForCloudUpdate_b__0(::Class_0_16E4307DCC419505_579* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_579*))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492___C__DISPLAYCLASS23_0__STARTFORCLOUDUPDATE_B__0_OFFSET))(this, a1);
	}

	::System::Void _StartForCloudUpdate_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492___C__DISPLAYCLASS23_0__STARTFORCLOUDUPDATE_B__1_OFFSET))(this);
	}
};
