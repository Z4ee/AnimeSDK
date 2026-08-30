#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_29ADE9724E15BDC9;
class Class_3_F2D53A16E03F9067;
namespace RPG::Client { class BaseGameFlow; }
namespace System { class Exception; }

#define CLASS_3_F2D53A16E03F9067___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x187E54D0)
#define CLASS_3_F2D53A16E03F9067___C__DISPLAYCLASS10_0___DOENTERGAMEFLOW_B__0_OFFSET UNITYSDK_OFFSET(0x187E5610)
#define CLASS_3_F2D53A16E03F9067___C__DISPLAYCLASS10_0___DOENTERGAMEFLOW_B__1_OFFSET UNITYSDK_OFFSET(0x187E56F0)

inline static constexpr unsigned int Class_3_F2D53A16E03F9067___c__DisplayClass10_0_TypeDefinitionIndex = 58313;

class Class_3_F2D53A16E03F9067___c__DisplayClass10_0 : public ::System::Object
{
public:
	::Class_1_29ADE9724E15BDC9* gameFlowPrepareService; // 0x10
	::Class_3_F2D53A16E03F9067* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2D53A16E03F9067___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
	}

	::System::Void __DoEnterGameFlow_b__0(::RPG::Client::BaseGameFlow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + CLASS_3_F2D53A16E03F9067___C__DISPLAYCLASS10_0___DOENTERGAMEFLOW_B__0_OFFSET))(this, a1);
	}

	::System::Void __DoEnterGameFlow_b__1(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_3_F2D53A16E03F9067___C__DISPLAYCLASS10_0___DOENTERGAMEFLOW_B__1_OFFSET))(this, a1);
	}
};
