#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class NoticeManager___c__DisplayClass7_0; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_NOTICEMANAGER___C__DISPLAYCLASS7_1__CHECKPOPNOTICE_B__0_OFFSET UNITYSDK_OFFSET(0x16101450)
#define MIHOYO_SDK_WIN_NOTICEMANAGER___C__DISPLAYCLASS7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x160FADD0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int NoticeManager___c__DisplayClass7_1_TypeDefinitionIndex = 8007;

	class NoticeManager___c__DisplayClass7_1 : public ::System::Object
	{
	public:
		::System::String* requestLang; // 0x10
		::MiHoYo::SDK::Win::NoticeManager___c__DisplayClass7_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER___C__DISPLAYCLASS7_1__CTOR_OFFSET))(this);
		}

		::System::Void _CheckPopNotice_b__0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER___C__DISPLAYCLASS7_1__CHECKPOPNOTICE_B__0_OFFSET))(this, response);
		}
	};
}
