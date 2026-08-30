#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_STEAMDELEGATE_GETSTEAMIDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B9B9630)
#define MIHOYO_SDK_STEAMDELEGATE_GETSTEAMIDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B9B9660)
#define MIHOYO_SDK_STEAMDELEGATE_GETSTEAMIDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B9B9620)
#define MIHOYO_SDK_STEAMDELEGATE_GETSTEAMIDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9B95B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SteamDelegate_GetSteamIdDelegate_TypeDefinitionIndex = 7646;

	class SteamDelegate_GetSteamIdDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STEAMDELEGATE_GETSTEAMIDDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt64 Invoke()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STEAMDELEGATE_GETSTEAMIDDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STEAMDELEGATE_GETSTEAMIDDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::UInt64 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STEAMDELEGATE_GETSTEAMIDDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
