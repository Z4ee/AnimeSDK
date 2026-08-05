#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralExpProgressWidgetController___c__DisplayClass20_0; }
namespace System { class Action; }

#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER___C__DISPLAYCLASS20_0___STARTEXPPROGRESS_G____FILL_EXP_0_D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18402830)
#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER___C__DISPLAYCLASS20_0___STARTEXPPROGRESS_G____FILL_EXP_0_D_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18402E70)
#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER___C__DISPLAYCLASS20_0___STARTEXPPROGRESS_G____FILL_EXP_0_D_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18402ED0)
#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER___C__DISPLAYCLASS20_0___STARTEXPPROGRESS_G____FILL_EXP_0_D_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18402E80)
#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER___C__DISPLAYCLASS20_0___STARTEXPPROGRESS_G____FILL_EXP_0_D_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18402820)
#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER___C__DISPLAYCLASS20_0___STARTEXPPROGRESS_G____FILL_EXP_0_D__CTOR_OFFSET UNITYSDK_OFFSET(0x18402810)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralExpProgressWidgetController___c__DisplayClass20_0___StartExpProgress_g____Fill_Exp_0_d_TypeDefinitionIndex = 67970;

	class UIGeneralExpProgressWidgetController___c__DisplayClass20_0___StartExpProgress_g____Fill_Exp_0_d : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralExpProgressWidgetController___c__DisplayClass20_0* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Action* _fillDone; // 0x20
		::System::Single _curTargetDuration_5__3; // 0x28
		::System::Int32 _targetExpCount_5__2; // 0x2C
		::System::Single _lastTimeProg_5__4; // 0x30
		::System::Boolean _startPlayProgressSound_5__5; // 0x34
		::System::Int32 __1__state; // 0x38
		::System::Int32 fromExp; // 0x3C
		::System::Int32 total; // 0x40
		::System::Int32 toExp; // 0x44

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER___C__DISPLAYCLASS20_0___STARTEXPPROGRESS_G____FILL_EXP_0_D__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER___C__DISPLAYCLASS20_0___STARTEXPPROGRESS_G____FILL_EXP_0_D_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER___C__DISPLAYCLASS20_0___STARTEXPPROGRESS_G____FILL_EXP_0_D_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER___C__DISPLAYCLASS20_0___STARTEXPPROGRESS_G____FILL_EXP_0_D_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER___C__DISPLAYCLASS20_0___STARTEXPPROGRESS_G____FILL_EXP_0_D_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER___C__DISPLAYCLASS20_0___STARTEXPPROGRESS_G____FILL_EXP_0_D_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
