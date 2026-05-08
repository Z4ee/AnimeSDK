#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIFriendChatSpecialWidgetController_ShareIconData; }

#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1579CD90)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS30_0__PROCESSGACHADATA_B__0_OFFSET UNITYSDK_OFFSET(0x1579CDA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatSpecialWidgetController___c__DisplayClass30_0_TypeDefinitionIndex = 68398;

	class UIFriendChatSpecialWidgetController___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::System::Int32 itemID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ProcessGachaData_b__0(::MoleMole::UIFriendChatSpecialWidgetController_ShareIconData* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIFriendChatSpecialWidgetController_ShareIconData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS30_0__PROCESSGACHADATA_B__0_OFFSET))(this, item);
		}
	};
}
