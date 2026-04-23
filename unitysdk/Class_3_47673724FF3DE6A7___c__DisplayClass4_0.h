#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_29ADE9724E15BDC9;
class Class_3_47673724FF3DE6A7;
namespace RPG::Client { class BaseGameFlow; }
namespace System { class Exception; }

#define CLASS_3_47673724FF3DE6A7___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x99152B0)
#define CLASS_3_47673724FF3DE6A7___C__DISPLAYCLASS4_0___DOENTERGAMEFLOW_B__0_OFFSET UNITYSDK_OFFSET(0x9915490)
#define CLASS_3_47673724FF3DE6A7___C__DISPLAYCLASS4_0___DOENTERGAMEFLOW_B__1_OFFSET UNITYSDK_OFFSET(0x9915590)

inline static constexpr unsigned int Class_3_47673724FF3DE6A7___c__DisplayClass4_0_TypeDefinitionIndex = 53657;

class Class_3_47673724FF3DE6A7___c__DisplayClass4_0 : public ::System::Object
{
public:
	::Class_3_47673724FF3DE6A7* __4__this; // 0x10
	::Class_1_29ADE9724E15BDC9* gameFlowPrepareService; // 0x18
	::System::Boolean needShowStageProgressPage; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47673724FF3DE6A7___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Void __DoEnterGameFlow_b__0(::RPG::Client::BaseGameFlow* gameflow)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + CLASS_3_47673724FF3DE6A7___C__DISPLAYCLASS4_0___DOENTERGAMEFLOW_B__0_OFFSET))(this, gameflow);
	}

	::System::Void __DoEnterGameFlow_b__1(::System::Exception* ex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_3_47673724FF3DE6A7___C__DISPLAYCLASS4_0___DOENTERGAMEFLOW_B__1_OFFSET))(this, ex);
	}
};
