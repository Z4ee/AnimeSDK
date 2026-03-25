#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Action; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLEDELEGATE_OPENURLDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15ED2770)
#define MIHOYO_SDK_CONSOLEDELEGATE_OPENURLDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15ED27B0)
#define MIHOYO_SDK_CONSOLEDELEGATE_OPENURLDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x15EC62C0)
#define MIHOYO_SDK_CONSOLEDELEGATE_OPENURLDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x15ED2750)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_OpenURLDelegate_TypeDefinitionIndex = 6629;

	class ConsoleDelegate_OpenURLDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_OPENURLDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke(::System::String* url, ::System::Action* closeCallback)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_OPENURLDELEGATE_INVOKE_OFFSET))(this, url, closeCallback);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* url, ::System::Action* closeCallback, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Action*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_OPENURLDELEGATE_BEGININVOKE_OFFSET))(this, url, closeCallback, callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_OPENURLDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
