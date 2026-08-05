#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/SubTreeBehaviorReference.h"

#define MOLEMOLE_NAPSUBTREEBEHAVIORREFERENCE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x136E51B0)
#define MOLEMOLE_NAPSUBTREEBEHAVIORREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x136E5440)
#define MOLEMOLE_NAPSUBTREEBEHAVIORREFERENCE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x136E54D0)

namespace MoleMole
{
	inline static constexpr unsigned int NapSubTreeBehaviorReference_TypeDefinitionIndex = 66045;

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
