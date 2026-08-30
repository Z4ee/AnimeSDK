#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_WEGAMEMANAGER_WEGAMEANTIADDICTIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x187BF410)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_WEGAMEANTIADDICTIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x187BF440)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_WEGAMEANTIADDICTIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x187BF270)
#define MIHOYO_SDK_WIN_WEGAMEMANAGER_WEGAMEANTIADDICTIONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x187BF3A0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int WeGameManager_WeGameAntiAddictionDelegate_TypeDefinitionIndex = 9426;

	class WeGameManager_WeGameAntiAddictionDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_WEGAMEANTIADDICTIONDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_WEGAMEANTIADDICTIONDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_WEGAMEANTIADDICTIONDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMEMANAGER_WEGAMEANTIADDICTIONDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
