#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEGAMEDELEGATE_DOAWAKEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19951740)
#define MIHOYO_SDK_WEGAMEDELEGATE_DOAWAKEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19951770)
#define MIHOYO_SDK_WEGAMEDELEGATE_DOAWAKEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x199514A0)
#define MIHOYO_SDK_WEGAMEDELEGATE_DOAWAKEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19951490)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WeGameDelegate_DoAwakeDelegate_TypeDefinitionIndex = 18577;

	class WeGameDelegate_DoAwakeDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_DOAWAKEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_DOAWAKEDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_DOAWAKEDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_DOAWAKEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
