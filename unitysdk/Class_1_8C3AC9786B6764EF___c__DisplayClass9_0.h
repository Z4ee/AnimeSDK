#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_557;
class Class_0_16E4307DCC419505_559;
class Class_0_16E4307DCC419505_69;
class Class_1_8C3AC9786B6764EF;
namespace RPG::Client { template <typename T> class DataActionProgress_1; }

#define CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS9_0__ADDVERIFY_B__0_OFFSET UNITYSDK_OFFSET(0x9800050)
#define CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS9_0__ADDVERIFY_B__1_OFFSET UNITYSDK_OFFSET(0x97FFFB0)
#define CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x97FAEC0)

inline static constexpr unsigned int Class_1_8C3AC9786B6764EF___c__DisplayClass9_0_TypeDefinitionIndex = 54955;

class Class_1_8C3AC9786B6764EF___c__DisplayClass9_0 : public ::System::Object
{
public:
	::RPG::Client::DataActionProgress_1<::Class_0_16E4307DCC419505_69*>* progress; // 0x10
	::Class_1_8C3AC9786B6764EF* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::System::Void _AddVerify_b__1(::Class_0_16E4307DCC419505_557* prog)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_557*))((::PBYTE)hIl2Cpp + CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS9_0__ADDVERIFY_B__1_OFFSET))(this, prog);
	}

	::System::Void _AddVerify_b__0(::Class_0_16E4307DCC419505_559* data, ::Class_0_16E4307DCC419505_69* block)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_559*, ::Class_0_16E4307DCC419505_69*))((::PBYTE)hIl2Cpp + CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS9_0__ADDVERIFY_B__0_OFFSET))(this, data, block);
	}
};
