#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_557;
class Class_0_16E4307DCC419505_559;
class Class_1_7179D0DED6D3E44A;
class Class_1_8C3AC9786B6764EF;
namespace RPG::Client { template <typename T> class DataActionProgress_1; }

#define CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS13_0__ADDBLOCKHPATCH_B__0_OFFSET UNITYSDK_OFFSET(0x97FFD80)
#define CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS13_0__ADDBLOCKHPATCH_B__1_OFFSET UNITYSDK_OFFSET(0x97FFCC0)
#define CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x97FBA30)

inline static constexpr unsigned int Class_1_8C3AC9786B6764EF___c__DisplayClass13_0_TypeDefinitionIndex = 54952;

class Class_1_8C3AC9786B6764EF___c__DisplayClass13_0 : public ::System::Object
{
public:
	::RPG::Client::DataActionProgress_1<::Class_1_7179D0DED6D3E44A*>* progress; // 0x10
	::Class_1_8C3AC9786B6764EF* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
	}

	::System::Void _AddBlockHPatch_b__1(::Class_0_16E4307DCC419505_557* _)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_557*))((::PBYTE)hIl2Cpp + CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS13_0__ADDBLOCKHPATCH_B__1_OFFSET))(this, _);
	}

	::System::Void _AddBlockHPatch_b__0(::Class_0_16E4307DCC419505_559* data, ::Class_1_7179D0DED6D3E44A* item)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_559*, ::Class_1_7179D0DED6D3E44A*))((::PBYTE)hIl2Cpp + CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS13_0__ADDBLOCKHPATCH_B__0_OFFSET))(this, data, item);
	}
};
