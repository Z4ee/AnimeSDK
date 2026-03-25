#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFix/Core/Call.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace IFix::Core { class VirtualMachine; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define IFIX_CORE_EXTERNINVOKER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15B417C0)
#define IFIX_CORE_EXTERNINVOKER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15B41860)
#define IFIX_CORE_EXTERNINVOKER_INVOKE_OFFSET UNITYSDK_OFFSET(0x15B41180)
#define IFIX_CORE_EXTERNINVOKER__CTOR_OFFSET UNITYSDK_OFFSET(0x15B41160)

namespace IFix::Core
{
	inline static constexpr unsigned int ExternInvoker_TypeDefinitionIndex = 9815;

	class ExternInvoker : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + IFIX_CORE_EXTERNINVOKER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::IFix::Core::VirtualMachine* vm, ::IFix::Core::Call& call, ::System::Boolean isInstantiate)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::VirtualMachine*, ::IFix::Core::Call&, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_CORE_EXTERNINVOKER_INVOKE_OFFSET))(this, vm, call, isInstantiate);
		}

		::System::IAsyncResult* BeginInvoke(::IFix::Core::VirtualMachine* vm, ::IFix::Core::Call& call, ::System::Boolean isInstantiate, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::IFix::Core::VirtualMachine*, ::IFix::Core::Call&, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_CORE_EXTERNINVOKER_BEGININVOKE_OFFSET))(this, vm, call, isInstantiate, callback, object);
		}

		::System::Void EndInvoke(::IFix::Core::Call& call, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::Call&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + IFIX_CORE_EXTERNINVOKER_ENDINVOKE_OFFSET))(this, call, result);
		}
	};
}
