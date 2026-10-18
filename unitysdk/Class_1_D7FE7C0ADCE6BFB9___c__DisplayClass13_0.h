#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_741;
class Class_0_16E4307DCC419505_743;
class Class_1_21DCD4640D389503_53;
class Class_1_D7FE7C0ADCE6BFB9;
namespace RPG::Client { template <typename T> class DataActionProgress_1; }

#define CLASS_1_D7FE7C0ADCE6BFB9___C__DISPLAYCLASS13_0__ADDBLOCKHPATCH_B__0_OFFSET UNITYSDK_OFFSET(0x154EAB00)
#define CLASS_1_D7FE7C0ADCE6BFB9___C__DISPLAYCLASS13_0__ADDBLOCKHPATCH_B__1_OFFSET UNITYSDK_OFFSET(0x154EAA40)
#define CLASS_1_D7FE7C0ADCE6BFB9___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x154E5800)

inline static constexpr unsigned int Class_1_D7FE7C0ADCE6BFB9___c__DisplayClass13_0_TypeDefinitionIndex = 59566;

class Class_1_D7FE7C0ADCE6BFB9___c__DisplayClass13_0 : public ::System::Object
{
public:
	::Class_1_D7FE7C0ADCE6BFB9* __4__this; // 0x10
	::RPG::Client::DataActionProgress_1<::Class_1_21DCD4640D389503_53*>* progress; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7FE7C0ADCE6BFB9___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
	}

	::System::Void _AddBlockHPatch_b__1(::Class_0_16E4307DCC419505_741* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_741*))((::PBYTE)hIl2Cpp + CLASS_1_D7FE7C0ADCE6BFB9___C__DISPLAYCLASS13_0__ADDBLOCKHPATCH_B__1_OFFSET))(this, a1);
	}

	::System::Void _AddBlockHPatch_b__0(::Class_0_16E4307DCC419505_743* a1, ::Class_1_21DCD4640D389503_53* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_743*, ::Class_1_21DCD4640D389503_53*))((::PBYTE)hIl2Cpp + CLASS_1_D7FE7C0ADCE6BFB9___C__DISPLAYCLASS13_0__ADDBLOCKHPATCH_B__0_OFFSET))(this, a1, a2);
	}
};
