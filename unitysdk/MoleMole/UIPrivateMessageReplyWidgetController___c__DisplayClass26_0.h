#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_794BA983EDDBCFDE_Class_2_BD4CB46CB1BDBF16;
namespace MoleMole { class UIPrivateMessageReplyWidgetController; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIPRIVATEMESSAGEREPLYWIDGETCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x198903C0)
#define MOLEMOLE_UIPRIVATEMESSAGEREPLYWIDGETCONTROLLER___C__DISPLAYCLASS26_0__OPENPERSONALQUEST_B__0_OFFSET UNITYSDK_OFFSET(0x198903D0)
#define MOLEMOLE_UIPRIVATEMESSAGEREPLYWIDGETCONTROLLER___C__DISPLAYCLASS26_0__OPENPERSONALQUEST_B__1_OFFSET UNITYSDK_OFFSET(0x198906A0)
#define MOLEMOLE_UIPRIVATEMESSAGEREPLYWIDGETCONTROLLER___C__DISPLAYCLASS26_0__OPENPERSONALQUEST_B__2_OFFSET UNITYSDK_OFFSET(0x198907F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPrivateMessageReplyWidgetController___c__DisplayClass26_0_TypeDefinitionIndex = 56237;

	class UIPrivateMessageReplyWidgetController___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::EventArgs*>* __9__2; // 0x10
		::MoleMole::UIPrivateMessageReplyWidgetController* __4__this; // 0x18
		::Class_1_794BA983EDDBCFDE_Class_2_BD4CB46CB1BDBF16* singleMessage; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEREPLYWIDGETCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _OpenPersonalQuest_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEREPLYWIDGETCONTROLLER___C__DISPLAYCLASS26_0__OPENPERSONALQUEST_B__0_OFFSET))(this);
		}

		::System::Void _OpenPersonalQuest_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEREPLYWIDGETCONTROLLER___C__DISPLAYCLASS26_0__OPENPERSONALQUEST_B__1_OFFSET))(this);
		}

		::System::Void _OpenPersonalQuest_b__2(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEREPLYWIDGETCONTROLLER___C__DISPLAYCLASS26_0__OPENPERSONALQUEST_B__2_OFFSET))(this, args);
		}
	};
}
