#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLEDELEGATE_GETCXTOKENCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AA44320)
#define MIHOYO_SDK_CONSOLEDELEGATE_GETCXTOKENCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AA44390)
#define MIHOYO_SDK_CONSOLEDELEGATE_GETCXTOKENCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AA44300)
#define MIHOYO_SDK_CONSOLEDELEGATE_GETCXTOKENCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA44290)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_GetCXTokenCallback_TypeDefinitionIndex = 7630;

	class ConsoleDelegate_GetCXTokenCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETCXTOKENCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32 a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETCXTOKENCALLBACK_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETCXTOKENCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETCXTOKENCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
