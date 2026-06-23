#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PSCommerceDialogCheckoutResult.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_CONSOLEDELEGATE_COMMERCECHECKOUTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BF61E30)
#define MIHOYO_SDK_CONSOLEDELEGATE_COMMERCECHECKOUTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BF61EC0)
#define MIHOYO_SDK_CONSOLEDELEGATE_COMMERCECHECKOUTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BF61AE0)
#define MIHOYO_SDK_CONSOLEDELEGATE_COMMERCECHECKOUTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF61AC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_CommerceCheckoutCallback_TypeDefinitionIndex = 19402;

	class ConsoleDelegate_CommerceCheckoutCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_COMMERCECHECKOUTCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::PSCommerceDialogCheckoutResult result, ::System::Int32 code)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PSCommerceDialogCheckoutResult, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_COMMERCECHECKOUTCALLBACK_INVOKE_OFFSET))(this, result, code);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PSCommerceDialogCheckoutResult result, ::System::Int32 code, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PSCommerceDialogCheckoutResult, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_COMMERCECHECKOUTCALLBACK_BEGININVOKE_OFFSET))(this, result, code, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_COMMERCECHECKOUTCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
