#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_WIN_ACCOUNTLIST_ACCOUNTLISTITEMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A35AAF0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int AccountList_AccountListItemInfo_TypeDefinitionIndex = 19873;

	class AccountList_AccountListItemInfo : public ::System::Object
	{
	public:
		::System::String* account_icon; // 0x10
		::System::String* account_text; // 0x18
		::System::String* account_last_login_time; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_ACCOUNTLISTITEMINFO__CTOR_OFFSET))(this);
		}
	};
}
