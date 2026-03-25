#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class ConsoleDelegate_CommerceCheckoutCallback; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLEDELEGATE_CXOPENCOMMERCECHECKOUTDIALOGDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15EC7F80)
#define MIHOYO_SDK_CONSOLEDELEGATE_CXOPENCOMMERCECHECKOUTDIALOGDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15EC7FD0)
#define MIHOYO_SDK_CONSOLEDELEGATE_CXOPENCOMMERCECHECKOUTDIALOGDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x15EC78C0)
#define MIHOYO_SDK_CONSOLEDELEGATE_CXOPENCOMMERCECHECKOUTDIALOGDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x15EC78A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_CXOpenCommerceCheckoutDialogDelegate_TypeDefinitionIndex = 6684;

	class ConsoleDelegate_CXOpenCommerceCheckoutDialogDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_CXOPENCOMMERCECHECKOUTDIALOGDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke(::System::String* storeId, ::System::String* productName, ::System::String* extData, ::MiHoYo::SDK::ConsoleDelegate_CommerceCheckoutCallback* callback)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::MiHoYo::SDK::ConsoleDelegate_CommerceCheckoutCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_CXOPENCOMMERCECHECKOUTDIALOGDELEGATE_INVOKE_OFFSET))(this, storeId, productName, extData, callback);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* storeId, ::System::String* productName, ::System::String* extData, ::MiHoYo::SDK::ConsoleDelegate_CommerceCheckoutCallback* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::MiHoYo::SDK::ConsoleDelegate_CommerceCheckoutCallback*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_CXOPENCOMMERCECHECKOUTDIALOGDELEGATE_BEGININVOKE_OFFSET))(this, storeId, productName, extData, callback, __callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_CXOPENCOMMERCECHECKOUTDIALOGDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
