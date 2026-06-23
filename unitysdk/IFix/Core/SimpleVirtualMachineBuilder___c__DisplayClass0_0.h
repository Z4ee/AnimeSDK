#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define IFIX_CORE_SIMPLEVIRTUALMACHINEBUILDER___C__DISPLAYCLASS0_0__CREATEVIRTUALMACHINE_B__0_OFFSET UNITYSDK_OFFSET(0x1CAA6D50)
#define IFIX_CORE_SIMPLEVIRTUALMACHINEBUILDER___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAA6D30)

namespace IFix::Core
{
	inline static constexpr unsigned int SimpleVirtualMachineBuilder___c__DisplayClass0_0_TypeDefinitionIndex = 6923;

	class SimpleVirtualMachineBuilder___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::IntPtr>* nativePointers; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_SIMPLEVIRTUALMACHINEBUILDER___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Void _CreateVirtualMachine_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_SIMPLEVIRTUALMACHINEBUILDER___C__DISPLAYCLASS0_0__CREATEVIRTUALMACHINE_B__0_OFFSET))(this);
		}
	};
}
