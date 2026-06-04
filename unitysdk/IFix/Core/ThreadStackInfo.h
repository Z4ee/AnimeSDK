#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFix/Core/UnmanagedStack.h"
#include "unitysdk/System/Object.h"

namespace System { class LocalDataStoreSlot; }

#define IFIX_CORE_THREADSTACKINFO_GET_STACK_OFFSET UNITYSDK_OFFSET(0x17F88000)
#define IFIX_CORE_THREADSTACKINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F981A0)
#define IFIX_CORE_THREADSTACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17F8C1E0)

namespace IFix::Core
{
	inline static constexpr unsigned int ThreadStackInfo_TypeDefinitionIndex = 9771;

	class ThreadStackInfo : public ::System::Object
	{
	public:
		static ::System::LocalDataStoreSlot** StaticGet_localSlot()
		{
			return (::System::LocalDataStoreSlot**)Il2CppClass::FromTypeDefinitionIndex(ThreadStackInfo_TypeDefinitionIndex)->GetStaticField(0xA90);
		}
		::Il2CppArray<::System::Object*>* ManagedStack; // 0x10
		::System::IntPtr unmanagedStackHandler; // 0x18
		::IFix::Core::UnmanagedStack* UnmanagedStack; // 0x20
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
