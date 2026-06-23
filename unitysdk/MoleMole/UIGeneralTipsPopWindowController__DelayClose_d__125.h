#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralTipsPopWindowController; }

#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER__DELAYCLOSE_D__125_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x175EAB90)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER__DELAYCLOSE_D__125_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x175EACB0)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER__DELAYCLOSE_D__125_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x175EAD10)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER__DELAYCLOSE_D__125_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x175EACC0)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER__DELAYCLOSE_D__125_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x175EAB80)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER__DELAYCLOSE_D__125__CTOR_OFFSET UNITYSDK_OFFSET(0x175EAB70)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTipsPopWindowController__DelayClose_d__125_TypeDefinitionIndex = 63535;

	class UIGeneralTipsPopWindowController__DelayClose_d__125 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralTipsPopWindowController* __4__this; // 0x10
		::System::Int32 __1__state; // 0x18
		::System::Single __2__current; // 0x1C
		::System::Boolean isOk; // 0x20
		::System::Single delaySeconds; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER__DELAYCLOSE_D__125__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER__DELAYCLOSE_D__125_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER__DELAYCLOSE_D__125_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER__DELAYCLOSE_D__125_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER__DELAYCLOSE_D__125_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER__DELAYCLOSE_D__125_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
