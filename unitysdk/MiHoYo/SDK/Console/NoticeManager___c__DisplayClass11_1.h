#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Console { class NoticeManager___c__DisplayClass11_0; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER___C__DISPLAYCLASS11_1__CHECKPOPNOTICE_B__0_OFFSET UNITYSDK_OFFSET(0x173564E0)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER___C__DISPLAYCLASS11_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17352B10)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int NoticeManager___c__DisplayClass11_1_TypeDefinitionIndex = 8921;

	class NoticeManager___c__DisplayClass11_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Console::NoticeManager___c__DisplayClass11_0* CS___8__locals1; // 0x10
		::System::String* requestLang; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER___C__DISPLAYCLASS11_1__CTOR_OFFSET))(this);
		}

		::System::Void _CheckPopNotice_b__0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER___C__DISPLAYCLASS11_1__CHECKPOPNOTICE_B__0_OFFSET))(this, a1);
		}
	};
}
