#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/SubTreeBehaviorReference.h"

#define MOLEMOLE_NAPSUBTREEBEHAVIORREFERENCE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x13F19880)
#define MOLEMOLE_NAPSUBTREEBEHAVIORREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x13F19B10)
#define MOLEMOLE_NAPSUBTREEBEHAVIORREFERENCE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x13F19BA0)

namespace MoleMole
{
	inline static constexpr unsigned int NapSubTreeBehaviorReference_TypeDefinitionIndex = 77434;

	class NapSubTreeBehaviorReference : public ::BehaviorDesigner::Runtime::Tasks::SubTreeBehaviorReference
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSUBTREEBEHAVIORREFERENCE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSUBTREEBEHAVIORREFERENCE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSUBTREEBEHAVIORREFERENCE___BASE_ONAWAKE_OFFSET))(this);
		}
	};
}
