#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_ACTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x161A7270)
#define SYSTEM_ACTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x161A72A0)
#define SYSTEM_ACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x161A6FD0)
#define SYSTEM_ACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x161A6FB0)

namespace System
{
	inline static constexpr unsigned int Action_TypeDefinitionIndex = 170;

	class Action : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_ACTION__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ACTION_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ACTION_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_ACTION_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
