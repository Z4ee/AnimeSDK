#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_SDKDELEGATE_LOADFILEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19C8B7C0)
#define MIHOYO_SDK_SDKDELEGATE_LOADFILEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19C8B7F0)
#define MIHOYO_SDK_SDKDELEGATE_LOADFILEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19C8B280)
#define MIHOYO_SDK_SDKDELEGATE_LOADFILEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C8B270)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_LoadFileDelegate_TypeDefinitionIndex = 18650;

	class SDKDelegate_LoadFileDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_LOADFILEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::String* Invoke(::System::String* path)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_LOADFILEDELEGATE_INVOKE_OFFSET))(this, path);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* path, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_LOADFILEDELEGATE_BEGININVOKE_OFFSET))(this, path, callback, object);
		}

		::System::String* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::String*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_LOADFILEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
