#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFix/Core/UnmanagedStack.h"
#include "unitysdk/System/Object.h"

namespace System { class LocalDataStoreSlot; }

#define IFIX_CORE_THREADSTACKINFO_GET_STACK_OFFSET UNITYSDK_OFFSET(0x1CA9BB20)
#define IFIX_CORE_THREADSTACKINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CAA6DB0)
#define IFIX_CORE_THREADSTACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAA0140)

namespace IFix::Core
{
	inline static constexpr unsigned int ThreadStackInfo_TypeDefinitionIndex = 6941;

	class ThreadStackInfo : public ::System::Object
	{
	public:
		static ::System::LocalDataStoreSlot** StaticGet_localSlot()
		{
			return (::System::LocalDataStoreSlot**)Il2CppClass::FromTypeDefinitionIndex(ThreadStackInfo_TypeDefinitionIndex)->GetStaticField(0x5DB0);
		}
		::Il2CppArray<::System::Object*>* ManagedStack; // 0x10
		::IFix::Core::UnmanagedStack* UnmanagedStack; // 0x18
		::System::IntPtr unmanagedStackHandler; // 0x20
		::System::IntPtr evaluationStackHandler; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_THREADSTACKINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_CORE_THREADSTACKINFO__CCTOR_OFFSET))();
		}

		static ::IFix::Core::ThreadStackInfo* get_Stack()
		{
			return ((::IFix::Core::ThreadStackInfo*(*)())((::PBYTE)hIl2Cpp + IFIX_CORE_THREADSTACKINFO_GET_STACK_OFFSET))();
		}
	};
}
