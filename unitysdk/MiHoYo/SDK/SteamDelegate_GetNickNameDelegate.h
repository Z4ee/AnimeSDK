#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_STEAMDELEGATE_GETNICKNAMEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A9C44A0)
#define MIHOYO_SDK_STEAMDELEGATE_GETNICKNAMEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A9C44D0)
#define MIHOYO_SDK_STEAMDELEGATE_GETNICKNAMEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A9C4200)
#define MIHOYO_SDK_STEAMDELEGATE_GETNICKNAMEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9C41E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SteamDelegate_GetNickNameDelegate_TypeDefinitionIndex = 19453;

	class SteamDelegate_GetNickNameDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STEAMDELEGATE_GETNICKNAMEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::String* Invoke()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STEAMDELEGATE_GETNICKNAMEDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STEAMDELEGATE_GETNICKNAMEDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::String* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::String*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STEAMDELEGATE_GETNICKNAMEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
