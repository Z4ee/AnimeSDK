#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_478;
class Class_0_16E4307DCC419505_480;
class Class_0_16E4307DCC419505_69;
class Class_2_458E5D5F1916A1AE;
class Class_2_59664D23FCBEAD63;
class Class_2_974C6A58562BEDDD;
namespace System { class String; }

#define CLASS_1_280047DF9F661B14___C__DISPLAYCLASS63_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8A56FB0)
#define CLASS_1_280047DF9F661B14___C__DISPLAYCLASS63_0___MAKELOCALVERIFYDELAY_B__1_OFFSET UNITYSDK_OFFSET(0x8A5EE80)
#define CLASS_1_280047DF9F661B14___C__DISPLAYCLASS63_0___MAKELOCALVERIFYDELAY_B__3_OFFSET UNITYSDK_OFFSET(0x8A5EF40)
#define CLASS_1_280047DF9F661B14___C__DISPLAYCLASS63_0___MAKELOCALVERIFYDELAY_B__4_OFFSET UNITYSDK_OFFSET(0x8A5F100)
#define CLASS_1_280047DF9F661B14___C__DISPLAYCLASS63_0___MAKELOCALVERIFYDELAY_B__5_OFFSET UNITYSDK_OFFSET(0x8A5F1C0)
#define CLASS_1_280047DF9F661B14___C__DISPLAYCLASS63_0___MAKELOCALVERIFYDELAY_B__6_OFFSET UNITYSDK_OFFSET(0x8A5F1E0)

inline static constexpr unsigned int Class_1_280047DF9F661B14___c__DisplayClass63_0_TypeDefinitionIndex = 48163;

class Class_1_280047DF9F661B14___c__DisplayClass63_0 : public ::System::Object
{
public:
	::System::String* stateLocalVerify; // 0x10
	::Class_2_59664D23FCBEAD63* audioData; // 0x18
	::Class_2_974C6A58562BEDDD* videoData; // 0x20
	::Class_2_458E5D5F1916A1AE* luaData; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_280047DF9F661B14___C__DISPLAYCLASS63_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __MakeLocalVerifyDelay_b__1(::Class_0_16E4307DCC419505_69* e)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_69*))((::PBYTE)hIl2Cpp + CLASS_1_280047DF9F661B14___C__DISPLAYCLASS63_0___MAKELOCALVERIFYDELAY_B__1_OFFSET))(this, e);
	}

	::System::Boolean __MakeLocalVerifyDelay_b__3(::Class_0_16E4307DCC419505_69* e)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_69*))((::PBYTE)hIl2Cpp + CLASS_1_280047DF9F661B14___C__DISPLAYCLASS63_0___MAKELOCALVERIFYDELAY_B__3_OFFSET))(this, e);
	}

	::System::Boolean __MakeLocalVerifyDelay_b__4(::Class_0_16E4307DCC419505_69* e)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_69*))((::PBYTE)hIl2Cpp + CLASS_1_280047DF9F661B14___C__DISPLAYCLASS63_0___MAKELOCALVERIFYDELAY_B__4_OFFSET))(this, e);
	}

	::System::Void __MakeLocalVerifyDelay_b__5(::Class_0_16E4307DCC419505_478* _)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_478*))((::PBYTE)hIl2Cpp + CLASS_1_280047DF9F661B14___C__DISPLAYCLASS63_0___MAKELOCALVERIFYDELAY_B__5_OFFSET))(this, _);
	}

	::System::Void __MakeLocalVerifyDelay_b__6(::Class_0_16E4307DCC419505_478* progress, ::Class_0_16E4307DCC419505_480* data, ::System::Object* obj, ::RPG::Client::ExeCode code)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*, ::RPG::Client::ExeCode))((::PBYTE)hIl2Cpp + CLASS_1_280047DF9F661B14___C__DISPLAYCLASS63_0___MAKELOCALVERIFYDELAY_B__6_OFFSET))(this, progress, data, obj, code);
	}
};
