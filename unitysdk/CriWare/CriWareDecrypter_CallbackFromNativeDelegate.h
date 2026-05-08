#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CRIWARE_CRIWAREDECRYPTER_CALLBACKFROMNATIVEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C0E8F80)
#define CRIWARE_CRIWAREDECRYPTER_CALLBACKFROMNATIVEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C0E8FD0)
#define CRIWARE_CRIWAREDECRYPTER_CALLBACKFROMNATIVEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C0E8C80)
#define CRIWARE_CRIWAREDECRYPTER_CALLBACKFROMNATIVEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0E8C70)

namespace CriWare
{
	inline static constexpr unsigned int CriWareDecrypter_CallbackFromNativeDelegate_TypeDefinitionIndex = 32788;

	class CriWareDecrypter_CallbackFromNativeDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREDECRYPTER_CALLBACKFROMNATIVEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt64 Invoke(::System::IntPtr ptr1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREDECRYPTER_CALLBACKFROMNATIVEDELEGATE_INVOKE_OFFSET))(this, ptr1);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr ptr1, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREDECRYPTER_CALLBACKFROMNATIVEDELEGATE_BEGININVOKE_OFFSET))(this, ptr1, callback, object);
		}

		::System::UInt64 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREDECRYPTER_CALLBACKFROMNATIVEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
