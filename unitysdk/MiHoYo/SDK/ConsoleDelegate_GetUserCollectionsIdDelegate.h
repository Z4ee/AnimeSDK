#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class ConsoleDelegate_GetUserCollectionsIdCallback; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLEDELEGATE_GETUSERCOLLECTIONSIDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D4A55B0)
#define MIHOYO_SDK_CONSOLEDELEGATE_GETUSERCOLLECTIONSIDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D4A55F0)
#define MIHOYO_SDK_CONSOLEDELEGATE_GETUSERCOLLECTIONSIDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D4A5020)
#define MIHOYO_SDK_CONSOLEDELEGATE_GETUSERCOLLECTIONSIDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A5000)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_GetUserCollectionsIdDelegate_TypeDefinitionIndex = 19778;

	class ConsoleDelegate_GetUserCollectionsIdDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETUSERCOLLECTIONSIDDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* token, ::MiHoYo::SDK::ConsoleDelegate_GetUserCollectionsIdCallback* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::ConsoleDelegate_GetUserCollectionsIdCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETUSERCOLLECTIONSIDDELEGATE_INVOKE_OFFSET))(this, token, callback);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* token, ::MiHoYo::SDK::ConsoleDelegate_GetUserCollectionsIdCallback* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::ConsoleDelegate_GetUserCollectionsIdCallback*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETUSERCOLLECTIONSIDDELEGATE_BEGININVOKE_OFFSET))(this, token, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETUSERCOLLECTIONSIDDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
