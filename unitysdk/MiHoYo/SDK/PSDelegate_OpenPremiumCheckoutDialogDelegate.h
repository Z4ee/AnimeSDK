#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class PSDelegate_CommerceCheckoutCallback; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_PSDELEGATE_OPENPREMIUMCHECKOUTDIALOGDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1945F400)
#define MIHOYO_SDK_PSDELEGATE_OPENPREMIUMCHECKOUTDIALOGDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1945F430)
#define MIHOYO_SDK_PSDELEGATE_OPENPREMIUMCHECKOUTDIALOGDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19453170)
#define MIHOYO_SDK_PSDELEGATE_OPENPREMIUMCHECKOUTDIALOGDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1945F390)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_OpenPremiumCheckoutDialogDelegate_TypeDefinitionIndex = 7720;

	class PSDelegate_OpenPremiumCheckoutDialogDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_OPENPREMIUMCHECKOUTDIALOGDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::PSDelegate_CommerceCheckoutCallback* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PSDelegate_CommerceCheckoutCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_OPENPREMIUMCHECKOUTDIALOGDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PSDelegate_CommerceCheckoutCallback* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PSDelegate_CommerceCheckoutCallback*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_OPENPREMIUMCHECKOUTDIALOGDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_OPENPREMIUMCHECKOUTDIALOGDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
