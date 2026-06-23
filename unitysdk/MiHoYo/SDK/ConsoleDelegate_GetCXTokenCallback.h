#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLEDELEGATE_GETCXTOKENCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C95C3E0)
#define MIHOYO_SDK_CONSOLEDELEGATE_GETCXTOKENCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C95C470)
#define MIHOYO_SDK_CONSOLEDELEGATE_GETCXTOKENCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C95C060)
#define MIHOYO_SDK_CONSOLEDELEGATE_GETCXTOKENCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C95C040)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_GetCXTokenCallback_TypeDefinitionIndex = 19427;

	class ConsoleDelegate_GetCXTokenCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETCXTOKENCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 retcode, ::System::String* token, ::System::String* signature)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETCXTOKENCALLBACK_INVOKE_OFFSET))(this, retcode, token, signature);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 retcode, ::System::String* token, ::System::String* signature, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETCXTOKENCALLBACK_BEGININVOKE_OFFSET))(this, retcode, token, signature, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETCXTOKENCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
