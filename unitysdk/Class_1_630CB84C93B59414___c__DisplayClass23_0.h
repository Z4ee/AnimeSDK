#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_741;
class Class_1_630CB84C93B59414;
class Class_1_68CF822132788D19;
class Class_1_68CF822132788D19_1;
class Class_1_D7FE7C0ADCE6BFB9;
class Class_2_D7563FB108CF1D15;

#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB1D66D0)
#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS23_0__STARTFORCLOUDUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0xB1E6C10)
#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS23_0__STARTFORCLOUDUPDATE_B__1_OFFSET UNITYSDK_OFFSET(0xB1E6D00)

inline static constexpr unsigned int Class_1_630CB84C93B59414___c__DisplayClass23_0_TypeDefinitionIndex = 59513;

class Class_1_630CB84C93B59414___c__DisplayClass23_0 : public ::System::Object
{
public:
	::Class_1_68CF822132788D19_1* archiveData; // 0x10
	::Class_1_D7FE7C0ADCE6BFB9* queue; // 0x18
	::Class_1_630CB84C93B59414* __4__this; // 0x20
	::Class_2_D7563FB108CF1D15* luaData; // 0x28
	::Class_1_68CF822132788D19* archiveDesign; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartForCloudUpdate_b__0(::Class_0_16E4307DCC419505_741* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_741*))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS23_0__STARTFORCLOUDUPDATE_B__0_OFFSET))(this, a1);
	}

	::System::Void _StartForCloudUpdate_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS23_0__STARTFORCLOUDUPDATE_B__1_OFFSET))(this);
	}
};
