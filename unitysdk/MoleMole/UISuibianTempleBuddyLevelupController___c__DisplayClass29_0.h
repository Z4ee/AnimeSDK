#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UISuibianTempleBuddyLevelupController; }

#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12E297F0)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___C__DISPLAYCLASS29_0__ONCLICKBTN2_G__TRYOPENLEVELUPTIPS_0_OFFSET UNITYSDK_OFFSET(0x12E29800)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleBuddyLevelupController___c__DisplayClass29_0_TypeDefinitionIndex = 66371;

	class UISuibianTempleBuddyLevelupController___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::MoleMole::UISuibianTempleBuddyLevelupController* __4__this; // 0x10
		::System::Int32 cachedExpedition; // 0x18
		::System::Int32 cachedSimulation; // 0x1C
		::System::Int32 prvLevel; // 0x20
		::System::Int32 tarLv; // 0x24
		::System::Int32 cachedDurability; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickBtn2_g__TryOpenLevelUpTips_0(::System::Boolean triggerCritical)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER___C__DISPLAYCLASS29_0__ONCLICKBTN2_G__TRYOPENLEVELUPTIPS_0_OFFSET))(this, triggerCritical);
		}
	};
}
