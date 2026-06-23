#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_STEAMDELEGATE_SETAPPIDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BA96630)
#define MIHOYO_SDK_STEAMDELEGATE_SETAPPIDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BA966A0)
#define MIHOYO_SDK_STEAMDELEGATE_SETAPPIDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BA96340)
#define MIHOYO_SDK_STEAMDELEGATE_SETAPPIDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA96320)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SteamDelegate_SetAppIdDelegate_TypeDefinitionIndex = 19451;

	class SteamDelegate_SetAppIdDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STEAMDELEGATE_SETAPPIDDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::UInt32 steamId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STEAMDELEGATE_SETAPPIDDELEGATE_INVOKE_OFFSET))(this, steamId);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 steamId, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STEAMDELEGATE_SETAPPIDDELEGATE_BEGININVOKE_OFFSET))(this, steamId, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STEAMDELEGATE_SETAPPIDDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
