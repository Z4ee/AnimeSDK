#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5EA2B17DF83E32C8_3.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_SHAREICONDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0x17F94CB0)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_SHAREICONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17F94250)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatSpecialWidgetController_ShareIconData_TypeDefinitionIndex = 84083;

	class UIFriendChatSpecialWidgetController_ShareIconData : public ::System::Object
	{
	public:
		::System::Int32 index; // 0x10
		::System::Int32 count; // 0x14
		::System::Int32 itemID; // 0x18
		::Enum_3_5EA2B17DF83E32C8_3 type; // 0x1C
		::System::Boolean isUpItem; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_SHAREICONDATA__CTOR_OFFSET))(this);
		}

		::System::Int32 CompareTo(::MoleMole::UIFriendChatSpecialWidgetController_ShareIconData* other)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIFriendChatSpecialWidgetController_ShareIconData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_SHAREICONDATA_COMPARETO_OFFSET))(this, other);
		}
	};
}
