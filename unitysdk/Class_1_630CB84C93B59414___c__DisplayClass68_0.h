#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_650;
class Class_0_16E4307DCC419505_652;
class Class_0_16E4307DCC419505_87;
class Class_2_4882D51538AB1BD1;
class Class_2_5D2387066E2BACFE;
class Class_2_D7563FB108CF1D15;
namespace System { class String; }

#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS68_0__CTOR_OFFSET UNITYSDK_OFFSET(0x162F8FA0)
#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS68_0___MAKELOCALVERIFYDELAY_B__1_OFFSET UNITYSDK_OFFSET(0x16302290)
#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS68_0___MAKELOCALVERIFYDELAY_B__3_OFFSET UNITYSDK_OFFSET(0x163023A0)
#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS68_0___MAKELOCALVERIFYDELAY_B__4_OFFSET UNITYSDK_OFFSET(0x16302610)
#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS68_0___MAKELOCALVERIFYDELAY_B__5_OFFSET UNITYSDK_OFFSET(0x16302720)
#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS68_0___MAKELOCALVERIFYDELAY_B__6_OFFSET UNITYSDK_OFFSET(0x16302740)

inline static constexpr unsigned int Class_1_630CB84C93B59414___c__DisplayClass68_0_TypeDefinitionIndex = 59667;

class Class_1_630CB84C93B59414___c__DisplayClass68_0 : public ::System::Object
{
public:
	::Class_2_D7563FB108CF1D15* luaData; // 0x10
	::System::String* stateLocalVerify; // 0x18
	::Class_2_4882D51538AB1BD1* videoData; // 0x20
	::Class_2_5D2387066E2BACFE* audioData; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS68_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __MakeLocalVerifyDelay_b__1(::Class_0_16E4307DCC419505_87* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_87*))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS68_0___MAKELOCALVERIFYDELAY_B__1_OFFSET))(this, a1);
	}

	::System::Boolean __MakeLocalVerifyDelay_b__3(::Class_0_16E4307DCC419505_87* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_87*))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS68_0___MAKELOCALVERIFYDELAY_B__3_OFFSET))(this, a1);
	}

	::System::Boolean __MakeLocalVerifyDelay_b__4(::Class_0_16E4307DCC419505_87* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_87*))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS68_0___MAKELOCALVERIFYDELAY_B__4_OFFSET))(this, a1);
	}

	::System::Void __MakeLocalVerifyDelay_b__5(::Class_0_16E4307DCC419505_650* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_650*))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS68_0___MAKELOCALVERIFYDELAY_B__5_OFFSET))(this, a1);
	}

	::System::Void __MakeLocalVerifyDelay_b__6(::Class_0_16E4307DCC419505_650* a1, ::Class_0_16E4307DCC419505_652* a2, ::System::Object* a3, ::RPG::Client::ExeCode a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*, ::System::Object*, ::RPG::Client::ExeCode))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS68_0___MAKELOCALVERIFYDELAY_B__6_OFFSET))(this, a1, a2, a3, a4);
	}
};
