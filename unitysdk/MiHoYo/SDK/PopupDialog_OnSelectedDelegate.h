#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PopupDialog_SelectedResult.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_POPUPDIALOG_ONSELECTEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x170F8950)
#define MIHOYO_SDK_POPUPDIALOG_ONSELECTEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x170F89C0)
#define MIHOYO_SDK_POPUPDIALOG_ONSELECTEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x170F86F0)
#define MIHOYO_SDK_POPUPDIALOG_ONSELECTEDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x170F88E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PopupDialog_OnSelectedDelegate_TypeDefinitionIndex = 7963;

	class PopupDialog_OnSelectedDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG_ONSELECTEDDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::PopupDialog_SelectedResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PopupDialog_SelectedResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG_ONSELECTEDDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PopupDialog_SelectedResult a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PopupDialog_SelectedResult, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG_ONSELECTEDDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG_ONSELECTEDDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
