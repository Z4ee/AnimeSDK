#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_STEAMDELEGATE_GETNICKNAMEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1842DE40)
#define MIHOYO_SDK_STEAMDELEGATE_GETNICKNAMEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1842DE70)
#define MIHOYO_SDK_STEAMDELEGATE_GETNICKNAMEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1842DE30)
#define MIHOYO_SDK_STEAMDELEGATE_GETNICKNAMEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1842DDC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SteamDelegate_GetNickNameDelegate_TypeDefinitionIndex = 7639;

	class SteamDelegate_GetNickNameDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STEAMDELEGATE_GETNICKNAMEDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* Invoke()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STEAMDELEGATE_GETNICKNAMEDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STEAMDELEGATE_GETNICKNAMEDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::String* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STEAMDELEGATE_GETNICKNAMEDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
