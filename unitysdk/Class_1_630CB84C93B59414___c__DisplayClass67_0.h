#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_650;
class Class_0_16E4307DCC419505_652;
class Class_0_16E4307DCC419505_87;
class Class_2_4882D51538AB1BD1;
class Class_2_5D2387066E2BACFE;
namespace System { class String; }

#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS67_0__CTOR_OFFSET UNITYSDK_OFFSET(0x162F7D20)
#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS67_0___MAKELOCALVERIFY_B__1_OFFSET UNITYSDK_OFFSET(0x16301AF0)
#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS67_0___MAKELOCALVERIFY_B__2_OFFSET UNITYSDK_OFFSET(0x16301C40)
#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS67_0___MAKELOCALVERIFY_B__5_OFFSET UNITYSDK_OFFSET(0x16301D50)
#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS67_0___MAKELOCALVERIFY_B__6_OFFSET UNITYSDK_OFFSET(0x16301FC0)
#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS67_0___MAKELOCALVERIFY_B__7_OFFSET UNITYSDK_OFFSET(0x163020D0)

inline static constexpr unsigned int Class_1_630CB84C93B59414___c__DisplayClass67_0_TypeDefinitionIndex = 59666;

class Class_1_630CB84C93B59414___c__DisplayClass67_0 : public ::System::Object
{
public:
	::Class_2_5D2387066E2BACFE* audioData; // 0x10
	::System::String* stateLocalVerify; // 0x18
	::Class_2_4882D51538AB1BD1* videoData; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS67_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __MakeLocalVerify_b__1(::Class_0_16E4307DCC419505_87* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_87*))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS67_0___MAKELOCALVERIFY_B__1_OFFSET))(this, a1);
	}

	::System::Boolean __MakeLocalVerify_b__2(::Class_0_16E4307DCC419505_87* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_87*))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS67_0___MAKELOCALVERIFY_B__2_OFFSET))(this, a1);
	}

	::System::Boolean __MakeLocalVerify_b__5(::Class_0_16E4307DCC419505_87* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_87*))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS67_0___MAKELOCALVERIFY_B__5_OFFSET))(this, a1);
	}

	::System::Boolean __MakeLocalVerify_b__6(::Class_0_16E4307DCC419505_87* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_87*))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS67_0___MAKELOCALVERIFY_B__6_OFFSET))(this, a1);
	}

	::System::Void __MakeLocalVerify_b__7(::Class_0_16E4307DCC419505_650* a1, ::Class_0_16E4307DCC419505_652* a2, ::System::Object* a3, ::RPG::Client::ExeCode a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*, ::System::Object*, ::RPG::Client::ExeCode))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS67_0___MAKELOCALVERIFY_B__7_OFFSET))(this, a1, a2, a3, a4);
	}
};
