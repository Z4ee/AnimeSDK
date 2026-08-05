#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace IFix::Core { class VirtualMachine; }

#define IFIX_CORE_SIMPLEVIRTUALMACHINEBUILDER_CREATEVIRTUALMACHINE_OFFSET UNITYSDK_OFFSET(0x1E0853E0)
#define IFIX_CORE_SIMPLEVIRTUALMACHINEBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E085A20)

namespace IFix::Core
{
	inline static constexpr unsigned int SimpleVirtualMachineBuilder_TypeDefinitionIndex = 6926;

	class SimpleVirtualMachineBuilder : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_SIMPLEVIRTUALMACHINEBUILDER__CTOR_OFFSET))(this);
		}

		static ::IFix::Core::VirtualMachine* CreateVirtualMachine(::System::Int32 loopCount)
		{
			return ((::IFix::Core::VirtualMachine*(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_CORE_SIMPLEVIRTUALMACHINEBUILDER_CREATEVIRTUALMACHINE_OFFSET))(loopCount);
		}
	};
}
