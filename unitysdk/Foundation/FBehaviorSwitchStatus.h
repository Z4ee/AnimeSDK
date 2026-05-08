#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/EBehaviorStatus.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_FBEHAVIORSWITCHSTATUS_CONTAINS_OFFSET UNITYSDK_OFFSET(0x9C3C00)
#define FOUNDATION_FBEHAVIORSWITCHSTATUS_GET_HASBLENDEDINSWITCH_OFFSET UNITYSDK_OFFSET(0x9C3BA0)
#define FOUNDATION_FBEHAVIORSWITCHSTATUS_GET_HASBLENDEDOUTSWITCH_OFFSET UNITYSDK_OFFSET(0x9C3BE0)
#define FOUNDATION_FBEHAVIORSWITCHSTATUS_GET_HASBLENDINSWITCH_OFFSET UNITYSDK_OFFSET(0x9C3B80)
#define FOUNDATION_FBEHAVIORSWITCHSTATUS_GET_HASBLENDOUTSWITCH_OFFSET UNITYSDK_OFFSET(0x9C3BC0)
#define FOUNDATION_FBEHAVIORSWITCHSTATUS_GET_HASSTATESWITCH_OFFSET UNITYSDK_OFFSET(0x9C3B70)
#define FOUNDATION_FBEHAVIORSWITCHSTATUS__CTOR_OFFSET UNITYSDK_OFFSET(0x293FB0)

namespace Foundation
{
	inline static constexpr unsigned int FBehaviorSwitchStatus_TypeDefinitionIndex = 9054;

	struct alignas(4) FBehaviorSwitchStatus
	{
		::Foundation::EBehaviorStatus _before; // 0x10
		::Foundation::EBehaviorStatus _after; // 0x14

		::System::Void _ctor(::Foundation::EBehaviorStatus before, ::Foundation::EBehaviorStatus after)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::EBehaviorStatus, ::Foundation::EBehaviorStatus))((::PBYTE)hIl2Cpp + FOUNDATION_FBEHAVIORSWITCHSTATUS__CTOR_OFFSET))(this, before, after);
		}

		::System::Boolean get_HasStateSwitch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_FBEHAVIORSWITCHSTATUS_GET_HASSTATESWITCH_OFFSET))(this);
		}

		::System::Boolean get_HasBlendInSwitch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_FBEHAVIORSWITCHSTATUS_GET_HASBLENDINSWITCH_OFFSET))(this);
		}

		::System::Boolean get_HasBlendedInSwitch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_FBEHAVIORSWITCHSTATUS_GET_HASBLENDEDINSWITCH_OFFSET))(this);
		}

		::System::Boolean get_HasBlendOutSwitch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_FBEHAVIORSWITCHSTATUS_GET_HASBLENDOUTSWITCH_OFFSET))(this);
		}

		::System::Boolean get_HasBlendedOutSwitch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_FBEHAVIORSWITCHSTATUS_GET_HASBLENDEDOUTSWITCH_OFFSET))(this);
		}

		::System::Boolean Contains(::Foundation::EBehaviorStatus from, ::Foundation::EBehaviorStatus to)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::EBehaviorStatus, ::Foundation::EBehaviorStatus))((::PBYTE)hIl2Cpp + FOUNDATION_FBEHAVIORSWITCHSTATUS_CONTAINS_OFFSET))(this, from, to);
		}
	};
}
