#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PopupDialog_SelectedResult.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_POPUPDIALOG_ONSELECTEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CE12890)
#define MIHOYO_SDK_POPUPDIALOG_ONSELECTEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CE12900)
#define MIHOYO_SDK_POPUPDIALOG_ONSELECTEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CE12590)
#define MIHOYO_SDK_POPUPDIALOG_ONSELECTEDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE12570)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PopupDialog_OnSelectedDelegate_TypeDefinitionIndex = 20120;

	class PopupDialog_OnSelectedDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG_ONSELECTEDDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::PopupDialog_SelectedResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PopupDialog_SelectedResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG_ONSELECTEDDELEGATE_INVOKE_OFFSET))(this, result);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PopupDialog_SelectedResult result, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PopupDialog_SelectedResult, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG_ONSELECTEDDELEGATE_BEGININVOKE_OFFSET))(this, result, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG_ONSELECTEDDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
