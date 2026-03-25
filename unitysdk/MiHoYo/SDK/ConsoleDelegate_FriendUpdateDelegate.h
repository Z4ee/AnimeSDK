#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_CONSOLEDELEGATE_FRIENDUPDATEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15ECA750)
#define MIHOYO_SDK_CONSOLEDELEGATE_FRIENDUPDATEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15ECA780)
#define MIHOYO_SDK_CONSOLEDELEGATE_FRIENDUPDATEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x15ECA4B0)
#define MIHOYO_SDK_CONSOLEDELEGATE_FRIENDUPDATEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x15ECA490)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_FriendUpdateDelegate_TypeDefinitionIndex = 6639;

	class ConsoleDelegate_FriendUpdateDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_FRIENDUPDATEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_FRIENDUPDATEDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_FRIENDUPDATEDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_FRIENDUPDATEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
