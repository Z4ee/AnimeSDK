#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class NoticeManager; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_NOTICEMANAGER___C__DISPLAYCLASS8_0__CHECKCUSTOMPOPNOTICE_B__0_OFFSET UNITYSDK_OFFSET(0x199C9790)
#define MIHOYO_SDK_WIN_NOTICEMANAGER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x199C9780)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int NoticeManager___c__DisplayClass8_0_TypeDefinitionIndex = 19981;

	class NoticeManager___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::NoticeManager* __4__this; // 0x10
		::System::String* jsonString; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _CheckCustomPopNotice_b__0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER___C__DISPLAYCLASS8_0__CHECKCUSTOMPOPNOTICE_B__0_OFFSET))(this, response);
		}
	};
}
