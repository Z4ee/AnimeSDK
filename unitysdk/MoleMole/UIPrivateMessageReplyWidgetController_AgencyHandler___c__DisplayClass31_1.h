#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIPrivateMessageReplyWidgetController_AgencyHandler___c__DisplayClass31_0; }

#define MOLEMOLE_UIPRIVATEMESSAGEREPLYWIDGETCONTROLLER_AGENCYHANDLER___C__DISPLAYCLASS31_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15690850)
#define MOLEMOLE_UIPRIVATEMESSAGEREPLYWIDGETCONTROLLER_AGENCYHANDLER___C__DISPLAYCLASS31_1__ONJOINAGENCY_B__2_OFFSET UNITYSDK_OFFSET(0x15690860)

namespace MoleMole
{
	inline static constexpr unsigned int UIPrivateMessageReplyWidgetController_AgencyHandler___c__DisplayClass31_1_TypeDefinitionIndex = 81749;

	class UIPrivateMessageReplyWidgetController_AgencyHandler___c__DisplayClass31_1 : public ::System::Object
	{
	public:
		::MoleMole::UIPrivateMessageReplyWidgetController_AgencyHandler___c__DisplayClass31_0* CS___8__locals1; // 0x10
		::System::Boolean hasHandle; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEREPLYWIDGETCONTROLLER_AGENCYHANDLER___C__DISPLAYCLASS31_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnJoinAgency_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEREPLYWIDGETCONTROLLER_AGENCYHANDLER___C__DISPLAYCLASS31_1__ONJOINAGENCY_B__2_OFFSET))(this);
		}
	};
}
