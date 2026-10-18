#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_741;
class Class_1_630CB84C93B59414;
class Class_1_68CF822132788D19;
class Class_1_68CF822132788D19_1;
class Class_1_D7FE7C0ADCE6BFB9;
class Class_2_5D2387066E2BACFE;
class Class_2_D7563FB108CF1D15;
namespace System { class String; }

#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS72_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB1E9680)
#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS72_0__STARTPATCH_B__0_OFFSET UNITYSDK_OFFSET(0xB1E9690)
#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS72_0__STARTPATCH_B__1_OFFSET UNITYSDK_OFFSET(0xB1E9840)

inline static constexpr unsigned int Class_1_630CB84C93B59414___c__DisplayClass72_0_TypeDefinitionIndex = 59525;

class Class_1_630CB84C93B59414___c__DisplayClass72_0 : public ::System::Object
{
public:
	::System::String* stateLocalVerify; // 0x10
	::Class_1_D7FE7C0ADCE6BFB9* queue; // 0x18
	::Class_1_68CF822132788D19* archiveDesign; // 0x20
	::Class_2_5D2387066E2BACFE* audioData; // 0x28
	::Class_1_630CB84C93B59414* __4__this; // 0x30
	::Class_2_D7563FB108CF1D15* luaData; // 0x38
	::Class_1_68CF822132788D19_1* archiveData; // 0x40
	::RPG::Client::TextID progressDescText; // 0x48
	::System::Boolean isDownloadedFullAssets; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS72_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartPatch_b__0(::Class_0_16E4307DCC419505_741* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_741*))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS72_0__STARTPATCH_B__0_OFFSET))(this, a1);
	}

	::System::Void _StartPatch_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS72_0__STARTPATCH_B__1_OFFSET))(this);
	}
};
