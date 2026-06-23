#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEGAMEDELEGATE_UNREGISTERCALLBACKDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BBD1A70)
#define MIHOYO_SDK_WEGAMEDELEGATE_UNREGISTERCALLBACKDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BBD1AA0)
#define MIHOYO_SDK_WEGAMEDELEGATE_UNREGISTERCALLBACKDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BBD17D0)
#define MIHOYO_SDK_WEGAMEDELEGATE_UNREGISTERCALLBACKDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBD17B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WeGameDelegate_UnRegisterCallbackDelegate_TypeDefinitionIndex = 19466;

	class WeGameDelegate_UnRegisterCallbackDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_UNREGISTERCALLBACKDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_UNREGISTERCALLBACKDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_UNREGISTERCALLBACKDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_UNREGISTERCALLBACKDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
