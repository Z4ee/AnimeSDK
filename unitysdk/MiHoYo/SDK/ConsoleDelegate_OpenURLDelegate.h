#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Action; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLEDELEGATE_OPENURLDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19452170)
#define MIHOYO_SDK_CONSOLEDELEGATE_OPENURLDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x194521B0)
#define MIHOYO_SDK_CONSOLEDELEGATE_OPENURLDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19451BD0)
#define MIHOYO_SDK_CONSOLEDELEGATE_OPENURLDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19451BC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_OpenURLDelegate_TypeDefinitionIndex = 18485;

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
