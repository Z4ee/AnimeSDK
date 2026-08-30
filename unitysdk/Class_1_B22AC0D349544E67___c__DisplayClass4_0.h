#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_29ADE9724E15BDC9;
class Class_1_B22AC0D349544E67;
namespace RPG::Client { class BaseGameFlow; }
namespace System { class Exception; }

#define CLASS_1_B22AC0D349544E67___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16C0D290)
#define CLASS_1_B22AC0D349544E67___C__DISPLAYCLASS4_0___DOENTERGAMEFLOW_B__0_OFFSET UNITYSDK_OFFSET(0x16C0D2E0)
#define CLASS_1_B22AC0D349544E67___C__DISPLAYCLASS4_0___DOENTERGAMEFLOW_B__1_OFFSET UNITYSDK_OFFSET(0x16C0D3D0)

inline static constexpr unsigned int Class_1_B22AC0D349544E67___c__DisplayClass4_0_TypeDefinitionIndex = 74985;

class Class_1_B22AC0D349544E67___c__DisplayClass4_0 : public ::System::Object
{
public:
	::Class_1_B22AC0D349544E67* __4__this; // 0x10
	::Class_1_29ADE9724E15BDC9* gameFlowPrepareService; // 0x18
	::System::Boolean needShowStageProgressPage; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B22AC0D349544E67___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Void __DoEnterGameFlow_b__0(::RPG::Client::BaseGameFlow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + CLASS_1_B22AC0D349544E67___C__DISPLAYCLASS4_0___DOENTERGAMEFLOW_B__0_OFFSET))(this, a1);
	}

	::System::Void __DoEnterGameFlow_b__1(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_B22AC0D349544E67___C__DISPLAYCLASS4_0___DOENTERGAMEFLOW_B__1_OFFSET))(this, a1);
	}
};
