#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLEDELEGATE_GETUSERCOLLECTIONSIDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15ECF110)
#define MIHOYO_SDK_CONSOLEDELEGATE_GETUSERCOLLECTIONSIDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15ECF170)
#define MIHOYO_SDK_CONSOLEDELEGATE_GETUSERCOLLECTIONSIDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x15ECEDC0)
#define MIHOYO_SDK_CONSOLEDELEGATE_GETUSERCOLLECTIONSIDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x15ECEDA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_GetUserCollectionsIdCallback_TypeDefinitionIndex = 6682;

	class ConsoleDelegate_GetUserCollectionsIdCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETUSERCOLLECTIONSIDCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 retcode, ::System::String* token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETUSERCOLLECTIONSIDCALLBACK_INVOKE_OFFSET))(this, retcode, token);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 retcode, ::System::String* token, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETUSERCOLLECTIONSIDCALLBACK_BEGININVOKE_OFFSET))(this, retcode, token, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETUSERCOLLECTIONSIDCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
