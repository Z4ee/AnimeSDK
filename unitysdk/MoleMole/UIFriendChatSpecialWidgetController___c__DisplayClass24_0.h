#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_3CB7782166350F5B;
class Class_3_F92F6A6188E34427;

#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19EE3060)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS24_0__DEALJOINABLEREQUEST_B__0_OFFSET UNITYSDK_OFFSET(0x19EE3070)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatSpecialWidgetController___c__DisplayClass24_0_TypeDefinitionIndex = 87534;

	class UIFriendChatSpecialWidgetController___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::Class_3_3CB7782166350F5B* inviteRequst; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _DealJoinableRequest_b__0(::Class_3_F92F6A6188E34427* invite)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_F92F6A6188E34427*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS24_0__DEALJOINABLEREQUEST_B__0_OFFSET))(this, invite);
		}
	};
}
