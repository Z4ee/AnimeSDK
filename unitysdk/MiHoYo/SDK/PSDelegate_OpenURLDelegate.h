#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Action; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_PSDELEGATE_OPENURLDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BBCCDE0)
#define MIHOYO_SDK_PSDELEGATE_OPENURLDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BBCCE20)
#define MIHOYO_SDK_PSDELEGATE_OPENURLDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BBCC850)
#define MIHOYO_SDK_PSDELEGATE_OPENURLDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBCC830)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_OpenURLDelegate_TypeDefinitionIndex = 19488;

	class PSDelegate_OpenURLDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_OPENURLDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke(::System::String* url, ::System::Action* closeCallback)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_OPENURLDELEGATE_INVOKE_OFFSET))(this, url, closeCallback);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* url, ::System::Action* closeCallback, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Action*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_OPENURLDELEGATE_BEGININVOKE_OFFSET))(this, url, closeCallback, callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_OPENURLDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
