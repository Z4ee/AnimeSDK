#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_741;
class Class_0_16E4307DCC419505_743;
class Class_0_16E4307DCC419505_87;
class Class_1_D7FE7C0ADCE6BFB9;
namespace RPG::Client { template <typename T> class DataActionProgress_1; }

#define CLASS_1_D7FE7C0ADCE6BFB9___C__DISPLAYCLASS9_0__ADDVERIFY_B__0_OFFSET UNITYSDK_OFFSET(0x154EADA0)
#define CLASS_1_D7FE7C0ADCE6BFB9___C__DISPLAYCLASS9_0__ADDVERIFY_B__1_OFFSET UNITYSDK_OFFSET(0x154EAD30)
#define CLASS_1_D7FE7C0ADCE6BFB9___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x154E4A20)

inline static constexpr unsigned int Class_1_D7FE7C0ADCE6BFB9___c__DisplayClass9_0_TypeDefinitionIndex = 59569;

class Class_1_D7FE7C0ADCE6BFB9___c__DisplayClass9_0 : public ::System::Object
{
public:
	::RPG::Client::DataActionProgress_1<::Class_0_16E4307DCC419505_87*>* progress; // 0x10
	::Class_1_D7FE7C0ADCE6BFB9* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7FE7C0ADCE6BFB9___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::System::Void _AddVerify_b__1(::Class_0_16E4307DCC419505_741* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_741*))((::PBYTE)hIl2Cpp + CLASS_1_D7FE7C0ADCE6BFB9___C__DISPLAYCLASS9_0__ADDVERIFY_B__1_OFFSET))(this, a1);
	}

	::System::Void _AddVerify_b__0(::Class_0_16E4307DCC419505_743* a1, ::Class_0_16E4307DCC419505_87* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_743*, ::Class_0_16E4307DCC419505_87*))((::PBYTE)hIl2Cpp + CLASS_1_D7FE7C0ADCE6BFB9___C__DISPLAYCLASS9_0__ADDVERIFY_B__0_OFFSET))(this, a1, a2);
	}
};
