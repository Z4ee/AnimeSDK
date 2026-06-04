#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1824F300)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER___C__DISPLAYCLASS24_0__REQUESTCROSSLOGIN_B__0_OFFSET UNITYSDK_OFFSET(0x1824F510)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER___C__DISPLAYCLASS24_0__REQUESTCROSSLOGIN_B__1_OFFSET UNITYSDK_OFFSET(0x1824F5C0)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER___C__DISPLAYCLASS24_0__REQUESTCROSSLOGIN_B__2_OFFSET UNITYSDK_OFFSET(0x1824F5A0)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int NoticeManager___c__DisplayClass24_0_TypeDefinitionIndex = 8643;

	class NoticeManager___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::System::String* dest; // 0x10
		::System::Action* __9__2; // 0x18
		::System::Action_1<::System::String*>* openWeb; // 0x20
		::System::Action* webCloseCallback; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestCrossLogin_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER___C__DISPLAYCLASS24_0__REQUESTCROSSLOGIN_B__0_OFFSET))(this, a1);
		}

		::System::Void _RequestCrossLogin_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER___C__DISPLAYCLASS24_0__REQUESTCROSSLOGIN_B__2_OFFSET))(this);
		}

		::System::Void _RequestCrossLogin_b__1(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER___C__DISPLAYCLASS24_0__REQUESTCROSSLOGIN_B__1_OFFSET))(this, a1);
		}
	};
}
