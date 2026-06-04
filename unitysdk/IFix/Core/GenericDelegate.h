#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace IFix::Core { class VirtualMachine; }

#define IFIX_CORE_GENERICDELEGATE_ACTION_OFFSET UNITYSDK_OFFSET(0x17F8A9D0)
#define IFIX_CORE_GENERICDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x17F8A9B0)

namespace IFix::Core
{
	inline static constexpr unsigned int GenericDelegate_TypeDefinitionIndex = 9762;

	class GenericDelegate : public ::System::Object
	{
	public:
		::IFix::Core::VirtualMachine* virtualMachine; // 0x10
		::System::Object* anonObj; // 0x18
		::System::Boolean pushSelf; // 0x20
		::System::Int32 extraArgNum; // 0x24
		::System::Int32 methodId; // 0x28

		::System::Void _ctor(::IFix::Core::VirtualMachine* a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::VirtualMachine*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATE__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Action()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATE_ACTION_OFFSET))(this);
		}
	};
}
