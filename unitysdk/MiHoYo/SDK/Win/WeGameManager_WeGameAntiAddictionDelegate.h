#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_WEGAMEMANAGER_WEGAMEANTIADDICTIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x174DDA70)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_WEGAMEANTIADDICTIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x174DDAA0)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_WEGAMEANTIADDICTIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x174DD110)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_WEGAMEANTIADDICTIONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x174DDA50)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int WeGameManager_WeGameAntiAddictionDelegate_TypeDefinitionIndex = 8232;

	class WeGameManager_WeGameAntiAddictionDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_WEGAMEANTIADDICTIONDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* responseString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_WEGAMEANTIADDICTIONDELEGATE_INVOKE_OFFSET))(this, responseString);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* responseString, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_WEGAMEANTIADDICTIONDELEGATE_BEGININVOKE_OFFSET))(this, responseString, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_WEGAMEANTIADDICTIONDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
