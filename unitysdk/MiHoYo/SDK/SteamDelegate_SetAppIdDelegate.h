#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_STEAMDELEGATE_SETAPPIDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1842E160)
#define MIHOYO_SDK_STEAMDELEGATE_SETAPPIDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1842E1B0)
#define MIHOYO_SDK_STEAMDELEGATE_SETAPPIDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1842E150)
#define MIHOYO_SDK_STEAMDELEGATE_SETAPPIDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1842E0E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SteamDelegate_SetAppIdDelegate_TypeDefinitionIndex = 7637;

	class SteamDelegate_SetAppIdDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STEAMDELEGATE_SETAPPIDDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STEAMDELEGATE_SETAPPIDDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STEAMDELEGATE_SETAPPIDDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STEAMDELEGATE_SETAPPIDDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
