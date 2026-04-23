#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLEDELEGATE_AUTHCODECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1750B380)
#define MIHOYO_SDK_CONSOLEDELEGATE_AUTHCODECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1750B400)
#define MIHOYO_SDK_CONSOLEDELEGATE_AUTHCODECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1750AFF0)
#define MIHOYO_SDK_CONSOLEDELEGATE_AUTHCODECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1750AFD0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_AuthCodeCallback_TypeDefinitionIndex = 6692;

	class ConsoleDelegate_AuthCodeCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_AUTHCODECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 code, ::System::String* authCode, ::System::Int32 issuerId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_AUTHCODECALLBACK_INVOKE_OFFSET))(this, code, authCode, issuerId);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 code, ::System::String* authCode, ::System::Int32 issuerId, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_AUTHCODECALLBACK_BEGININVOKE_OFFSET))(this, code, authCode, issuerId, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_AUTHCODECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
