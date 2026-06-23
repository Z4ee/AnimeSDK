#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console { class NoticeManager; }

#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A97FCB0)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int NoticeManager___c__DisplayClass11_0_TypeDefinitionIndex = 20726;

	class NoticeManager___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Console::NoticeManager* __4__this; // 0x10
		::System::Boolean isParseTextOnly; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}
	};
}
