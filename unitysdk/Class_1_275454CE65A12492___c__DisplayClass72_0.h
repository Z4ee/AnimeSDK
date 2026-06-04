#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_579;
class Class_1_275454CE65A12492;
class Class_1_68CF822132788D19;
class Class_1_68CF822132788D19_1;
class Class_1_C6B3B57B6E91674E;
class Class_2_047DF171B0451D59;
class Class_2_3487C21D96C73186;
namespace System { class String; }

#define CLASS_1_275454CE65A12492___C__DISPLAYCLASS72_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1438E470)
#define CLASS_1_275454CE65A12492___C__DISPLAYCLASS72_0__STARTPATCH_B__0_OFFSET UNITYSDK_OFFSET(0x14397000)
#define CLASS_1_275454CE65A12492___C__DISPLAYCLASS72_0__STARTPATCH_B__1_OFFSET UNITYSDK_OFFSET(0x143971B0)

inline static constexpr unsigned int Class_1_275454CE65A12492___c__DisplayClass72_0_TypeDefinitionIndex = 55645;

class Class_1_275454CE65A12492___c__DisplayClass72_0 : public ::System::Object
{
public:
	::Class_1_68CF822132788D19* archiveDesign; // 0x10
	::Class_1_C6B3B57B6E91674E* queue; // 0x18
	::System::String* stateLocalVerify; // 0x20
	::Class_2_047DF171B0451D59* luaData; // 0x28
	::Class_1_275454CE65A12492* __4__this; // 0x30
	::Class_1_68CF822132788D19_1* archiveData; // 0x38
	::Class_2_3487C21D96C73186* audioData; // 0x40
	::System::Boolean isDownloadedFullAssets; // 0x48
	::RPG::Client::TextID progressDescText; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492___C__DISPLAYCLASS72_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartPatch_b__0(::Class_0_16E4307DCC419505_579* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_579*))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492___C__DISPLAYCLASS72_0__STARTPATCH_B__0_OFFSET))(this, a1);
	}

	::System::Void _StartPatch_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492___C__DISPLAYCLASS72_0__STARTPATCH_B__1_OFFSET))(this);
	}
};
