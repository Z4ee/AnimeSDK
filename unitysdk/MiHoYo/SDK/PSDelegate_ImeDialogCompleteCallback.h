#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_PSDELEGATE_IMEDIALOGCOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DA15D40)
#define MIHOYO_SDK_PSDELEGATE_IMEDIALOGCOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DA15D70)
#define MIHOYO_SDK_PSDELEGATE_IMEDIALOGCOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DA15820)
#define MIHOYO_SDK_PSDELEGATE_IMEDIALOGCOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA15800)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_ImeDialogCompleteCallback_TypeDefinitionIndex = 19848;

	class PSDelegate_ImeDialogCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_IMEDIALOGCOMPLETECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_IMEDIALOGCOMPLETECALLBACK_INVOKE_OFFSET))(this, text);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* text, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_IMEDIALOGCOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, text, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_IMEDIALOGCOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
