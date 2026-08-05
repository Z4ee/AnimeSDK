#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIChatWindowWidgetController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__DISPLAYCLASS51_0__CHECKFRIENDALLOWCOMM_B__0_OFFSET UNITYSDK_OFFSET(0x18696390)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__DISPLAYCLASS51_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18696380)

namespace MoleMole
{
	inline static constexpr unsigned int UIChatWindowWidgetController___c__DisplayClass51_0_TypeDefinitionIndex = 72758;

	class UIChatWindowWidgetController___c__DisplayClass51_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* onCallback; // 0x10
		::MoleMole::UIChatWindowWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__DISPLAYCLASS51_0__CTOR_OFFSET))(this);
		}

		::System::Void _CheckFriendAllowComm_b__0(::System::Boolean isAllow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__DISPLAYCLASS51_0__CHECKFRIENDALLOWCOMM_B__0_OFFSET))(this, isAllow);
		}
	};
}
