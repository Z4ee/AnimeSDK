#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define PARADOXNOTION_ACTIONCALL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A85F070)
#define PARADOXNOTION_ACTIONCALL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A85F0A0)
#define PARADOXNOTION_ACTIONCALL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A859BF0)
#define PARADOXNOTION_ACTIONCALL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A85F060)

namespace ParadoxNotion
{
	inline static constexpr unsigned int ActionCall_TypeDefinitionIndex = 27679;

	class ActionCall : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + PARADOXNOTION_ACTIONCALL__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_ACTIONCALL_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_ACTIONCALL_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + PARADOXNOTION_ACTIONCALL_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
