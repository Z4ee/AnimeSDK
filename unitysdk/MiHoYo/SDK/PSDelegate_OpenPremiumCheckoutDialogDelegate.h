#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class PSDelegate_CommerceCheckoutCallback; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_PSDELEGATE_OPENPREMIUMCHECKOUTDIALOGDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C90DDD0)
#define MIHOYO_SDK_PSDELEGATE_OPENPREMIUMCHECKOUTDIALOGDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C90DE00)
#define MIHOYO_SDK_PSDELEGATE_OPENPREMIUMCHECKOUTDIALOGDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C90D8B0)
#define MIHOYO_SDK_PSDELEGATE_OPENPREMIUMCHECKOUTDIALOGDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C90D890)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_OpenPremiumCheckoutDialogDelegate_TypeDefinitionIndex = 19875;

	class PSDelegate_OpenPremiumCheckoutDialogDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_OPENPREMIUMCHECKOUTDIALOGDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::PSDelegate_CommerceCheckoutCallback* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PSDelegate_CommerceCheckoutCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_OPENPREMIUMCHECKOUTDIALOGDELEGATE_INVOKE_OFFSET))(this, callback);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PSDelegate_CommerceCheckoutCallback* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PSDelegate_CommerceCheckoutCallback*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_OPENPREMIUMCHECKOUTDIALOGDELEGATE_BEGININVOKE_OFFSET))(this, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_OPENPREMIUMCHECKOUTDIALOGDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
