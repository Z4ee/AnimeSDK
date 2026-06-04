#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PSCommerceDialogCheckoutResult.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_CONSOLEDELEGATE_COMMERCECHECKOUTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x183075D0)
#define MIHOYO_SDK_CONSOLEDELEGATE_COMMERCECHECKOUTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18307660)
#define MIHOYO_SDK_CONSOLEDELEGATE_COMMERCECHECKOUTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x183075C0)
#define MIHOYO_SDK_CONSOLEDELEGATE_COMMERCECHECKOUTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x18307550)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_CommerceCheckoutCallback_TypeDefinitionIndex = 7599;

	class ConsoleDelegate_CommerceCheckoutCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_COMMERCECHECKOUTCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::PSCommerceDialogCheckoutResult a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PSCommerceDialogCheckoutResult, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_COMMERCECHECKOUTCALLBACK_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PSCommerceDialogCheckoutResult a1, ::System::Int32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PSCommerceDialogCheckoutResult, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_COMMERCECHECKOUTCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_COMMERCECHECKOUTCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
