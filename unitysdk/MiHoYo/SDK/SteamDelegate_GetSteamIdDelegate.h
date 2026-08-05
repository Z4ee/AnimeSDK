#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_STEAMDELEGATE_GETSTEAMIDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CEB7250)
#define MIHOYO_SDK_STEAMDELEGATE_GETSTEAMIDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CEB7280)
#define MIHOYO_SDK_STEAMDELEGATE_GETSTEAMIDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CEB6FC0)
#define MIHOYO_SDK_STEAMDELEGATE_GETSTEAMIDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEB6FA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SteamDelegate_GetSteamIdDelegate_TypeDefinitionIndex = 19801;

	class SteamDelegate_GetSteamIdDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STEAMDELEGATE_GETSTEAMIDDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt64 Invoke()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STEAMDELEGATE_GETSTEAMIDDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STEAMDELEGATE_GETSTEAMIDDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::UInt64 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STEAMDELEGATE_GETSTEAMIDDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
