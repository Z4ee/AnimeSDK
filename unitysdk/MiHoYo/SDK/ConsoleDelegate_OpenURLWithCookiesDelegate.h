#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Action; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLEDELEGATE_OPENURLWITHCOOKIESDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x175166B0)
#define MIHOYO_SDK_CONSOLEDELEGATE_OPENURLWITHCOOKIESDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x175166F0)
#define MIHOYO_SDK_CONSOLEDELEGATE_OPENURLWITHCOOKIESDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1750A3F0)
#define MIHOYO_SDK_CONSOLEDELEGATE_OPENURLWITHCOOKIESDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x17516690)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_OpenURLWithCookiesDelegate_TypeDefinitionIndex = 6711;

	class ConsoleDelegate_OpenURLWithCookiesDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_OPENURLWITHCOOKIESDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke(::System::String* jsonString, ::System::Action* closeCallback)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_OPENURLWITHCOOKIESDELEGATE_INVOKE_OFFSET))(this, jsonString, closeCallback);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* jsonString, ::System::Action* closeCallback, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Action*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_OPENURLWITHCOOKIESDELEGATE_BEGININVOKE_OFFSET))(this, jsonString, closeCallback, callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_OPENURLWITHCOOKIESDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
