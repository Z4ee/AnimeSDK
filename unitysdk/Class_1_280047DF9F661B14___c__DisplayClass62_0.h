#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_557;
class Class_0_16E4307DCC419505_559;
class Class_0_16E4307DCC419505_69;
class Class_2_59664D23FCBEAD63;
class Class_2_974C6A58562BEDDD;
namespace System { class String; }

#define CLASS_1_280047DF9F661B14___C__DISPLAYCLASS62_0__CTOR_OFFSET UNITYSDK_OFFSET(0x96431C0)
#define CLASS_1_280047DF9F661B14___C__DISPLAYCLASS62_0___MAKELOCALVERIFY_B__1_OFFSET UNITYSDK_OFFSET(0x96431D0)
#define CLASS_1_280047DF9F661B14___C__DISPLAYCLASS62_0___MAKELOCALVERIFY_B__2_OFFSET UNITYSDK_OFFSET(0x96432D0)
#define CLASS_1_280047DF9F661B14___C__DISPLAYCLASS62_0___MAKELOCALVERIFY_B__5_OFFSET UNITYSDK_OFFSET(0x9643390)
#define CLASS_1_280047DF9F661B14___C__DISPLAYCLASS62_0___MAKELOCALVERIFY_B__6_OFFSET UNITYSDK_OFFSET(0x9643550)
#define CLASS_1_280047DF9F661B14___C__DISPLAYCLASS62_0___MAKELOCALVERIFY_B__7_OFFSET UNITYSDK_OFFSET(0x9643610)

inline static constexpr unsigned int Class_1_280047DF9F661B14___c__DisplayClass62_0_TypeDefinitionIndex = 54907;

class Class_1_280047DF9F661B14___c__DisplayClass62_0 : public ::System::Object
{
public:
	::Class_2_974C6A58562BEDDD* videoData; // 0x10
	::Class_2_59664D23FCBEAD63* audioData; // 0x18
	::System::String* stateLocalVerify; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_280047DF9F661B14___C__DISPLAYCLASS62_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __MakeLocalVerify_b__1(::Class_0_16E4307DCC419505_69* e)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_69*))((::PBYTE)hIl2Cpp + CLASS_1_280047DF9F661B14___C__DISPLAYCLASS62_0___MAKELOCALVERIFY_B__1_OFFSET))(this, e);
	}

	::System::Boolean __MakeLocalVerify_b__2(::Class_0_16E4307DCC419505_69* e)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_69*))((::PBYTE)hIl2Cpp + CLASS_1_280047DF9F661B14___C__DISPLAYCLASS62_0___MAKELOCALVERIFY_B__2_OFFSET))(this, e);
	}

	::System::Boolean __MakeLocalVerify_b__5(::Class_0_16E4307DCC419505_69* e)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_69*))((::PBYTE)hIl2Cpp + CLASS_1_280047DF9F661B14___C__DISPLAYCLASS62_0___MAKELOCALVERIFY_B__5_OFFSET))(this, e);
	}

	::System::Boolean __MakeLocalVerify_b__6(::Class_0_16E4307DCC419505_69* e)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_69*))((::PBYTE)hIl2Cpp + CLASS_1_280047DF9F661B14___C__DISPLAYCLASS62_0___MAKELOCALVERIFY_B__6_OFFSET))(this, e);
	}

	::System::Void __MakeLocalVerify_b__7(::Class_0_16E4307DCC419505_557* progress, ::Class_0_16E4307DCC419505_559* data, ::System::Object* obj, ::RPG::Client::ExeCode code)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_557*, ::Class_0_16E4307DCC419505_559*, ::System::Object*, ::RPG::Client::ExeCode))((::PBYTE)hIl2Cpp + CLASS_1_280047DF9F661B14___C__DISPLAYCLASS62_0___MAKELOCALVERIFY_B__7_OFFSET))(this, progress, data, obj, code);
	}
};
