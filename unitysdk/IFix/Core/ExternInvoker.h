#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFix/Core/Call.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace IFix::Core { class VirtualMachine; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define IFIX_CORE_EXTERNINVOKER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x17F8A8E0)
#define IFIX_CORE_EXTERNINVOKER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17F8A980)
#define IFIX_CORE_EXTERNINVOKER_INVOKE_OFFSET UNITYSDK_OFFSET(0x17F8A8C0)
#define IFIX_CORE_EXTERNINVOKER__CTOR_OFFSET UNITYSDK_OFFSET(0x17F8A7D0)

namespace IFix::Core
{
	inline static constexpr unsigned int ExternInvoker_TypeDefinitionIndex = 9777;

	class ExternInvoker : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + IFIX_CORE_EXTERNINVOKER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::IFix::Core::VirtualMachine* a1, ::IFix::Core::Call& a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::VirtualMachine*, ::IFix::Core::Call&, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_CORE_EXTERNINVOKER_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::IFix::Core::VirtualMachine* a1, ::IFix::Core::Call& a2, ::System::Boolean a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::IFix::Core::VirtualMachine*, ::IFix::Core::Call&, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_CORE_EXTERNINVOKER_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::IFix::Core::Call& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::Call&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + IFIX_CORE_EXTERNINVOKER_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
