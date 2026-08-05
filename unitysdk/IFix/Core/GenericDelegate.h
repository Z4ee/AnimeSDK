#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace IFix::Core { class VirtualMachine; }

#define IFIX_CORE_GENERICDELEGATE_ACTION_OFFSET UNITYSDK_OFFSET(0x1E07D690)
#define IFIX_CORE_GENERICDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E07D670)

namespace IFix::Core
{
	inline static constexpr unsigned int GenericDelegate_TypeDefinitionIndex = 6937;

	class GenericDelegate : public ::System::Object
	{
	public:
		::System::Object* anonObj; // 0x10
		::IFix::Core::VirtualMachine* virtualMachine; // 0x18
		::System::Int32 methodId; // 0x20
		::System::Boolean pushSelf; // 0x24
		::System::Int32 extraArgNum; // 0x28

		::System::Void _ctor(::IFix::Core::VirtualMachine* virtualMachine, ::System::Int32 methodId, ::System::Object* anonObj)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::VirtualMachine*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATE__CTOR_OFFSET))(this, virtualMachine, methodId, anonObj);
		}

		::System::Void Action()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATE_ACTION_OFFSET))(this);
		}
	};
}
