#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLEDELEGATE_GETKIDTOKENCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BE46830)
#define MIHOYO_SDK_CONSOLEDELEGATE_GETKIDTOKENCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BE468B0)
#define MIHOYO_SDK_CONSOLEDELEGATE_GETKIDTOKENCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BE464F0)
#define MIHOYO_SDK_CONSOLEDELEGATE_GETKIDTOKENCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE464D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_GetKidTokenCallback_TypeDefinitionIndex = 19438;

	class ConsoleDelegate_GetKidTokenCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETKIDTOKENCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 retcode, ::System::String* token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETKIDTOKENCALLBACK_INVOKE_OFFSET))(this, retcode, token);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 retcode, ::System::String* token, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETKIDTOKENCALLBACK_BEGININVOKE_OFFSET))(this, retcode, token, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETKIDTOKENCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
