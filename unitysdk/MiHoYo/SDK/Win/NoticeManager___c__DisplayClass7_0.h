#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class NoticeManager; }

#define MIHOYO_SDK_WIN_NOTICEMANAGER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17135450)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int NoticeManager___c__DisplayClass7_0_TypeDefinitionIndex = 9067;

	class NoticeManager___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::NoticeManager* __4__this; // 0x10
		::System::Boolean isParseTextOnly; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}
	};
}
