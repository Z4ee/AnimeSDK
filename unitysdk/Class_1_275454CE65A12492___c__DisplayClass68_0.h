#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_579;
class Class_0_16E4307DCC419505_581;
class Class_0_16E4307DCC419505_68;
class Class_2_047DF171B0451D59;
class Class_2_3487C21D96C73186;
class Class_2_72710C1D0F2BEFEA;
namespace System { class String; }

#define CLASS_1_275454CE65A12492___C__DISPLAYCLASS68_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1438CC40)
#define CLASS_1_275454CE65A12492___C__DISPLAYCLASS68_0___MAKELOCALVERIFYDELAY_B__1_OFFSET UNITYSDK_OFFSET(0x14395680)
#define CLASS_1_275454CE65A12492___C__DISPLAYCLASS68_0___MAKELOCALVERIFYDELAY_B__3_OFFSET UNITYSDK_OFFSET(0x14395740)
#define CLASS_1_275454CE65A12492___C__DISPLAYCLASS68_0___MAKELOCALVERIFYDELAY_B__4_OFFSET UNITYSDK_OFFSET(0x14395900)
#define CLASS_1_275454CE65A12492___C__DISPLAYCLASS68_0___MAKELOCALVERIFYDELAY_B__5_OFFSET UNITYSDK_OFFSET(0x143959C0)
#define CLASS_1_275454CE65A12492___C__DISPLAYCLASS68_0___MAKELOCALVERIFYDELAY_B__6_OFFSET UNITYSDK_OFFSET(0x143959E0)

inline static constexpr unsigned int Class_1_275454CE65A12492___c__DisplayClass68_0_TypeDefinitionIndex = 55642;

class Class_1_275454CE65A12492___c__DisplayClass68_0 : public ::System::Object
{
public:
	::System::String* stateLocalVerify; // 0x10
	::Class_2_3487C21D96C73186* audioData; // 0x18
	::Class_2_047DF171B0451D59* luaData; // 0x20
	::Class_2_72710C1D0F2BEFEA* videoData; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492___C__DISPLAYCLASS68_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __MakeLocalVerifyDelay_b__1(::Class_0_16E4307DCC419505_68* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_68*))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492___C__DISPLAYCLASS68_0___MAKELOCALVERIFYDELAY_B__1_OFFSET))(this, a1);
	}

	::System::Boolean __MakeLocalVerifyDelay_b__3(::Class_0_16E4307DCC419505_68* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_68*))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492___C__DISPLAYCLASS68_0___MAKELOCALVERIFYDELAY_B__3_OFFSET))(this, a1);
	}

	::System::Boolean __MakeLocalVerifyDelay_b__4(::Class_0_16E4307DCC419505_68* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_68*))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492___C__DISPLAYCLASS68_0___MAKELOCALVERIFYDELAY_B__4_OFFSET))(this, a1);
	}

	::System::Void __MakeLocalVerifyDelay_b__5(::Class_0_16E4307DCC419505_579* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_579*))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492___C__DISPLAYCLASS68_0___MAKELOCALVERIFYDELAY_B__5_OFFSET))(this, a1);
	}

	::System::Void __MakeLocalVerifyDelay_b__6(::Class_0_16E4307DCC419505_579* a1, ::Class_0_16E4307DCC419505_581* a2, ::System::Object* a3, ::RPG::Client::ExeCode a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*, ::RPG::Client::ExeCode))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492___C__DISPLAYCLASS68_0___MAKELOCALVERIFYDELAY_B__6_OFFSET))(this, a1, a2, a3, a4);
	}
};
