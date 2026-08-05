#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }

#define MOLEMOLE_FOLLOWERCHECKCD_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x107DD6F0)
#define MOLEMOLE_FOLLOWERCHECKCD_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x107DD730)
#define MOLEMOLE_FOLLOWERCHECKCD__CTOR_OFFSET UNITYSDK_OFFSET(0x107DD850)
#define MOLEMOLE_FOLLOWERCHECKCD___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x107DD8E0)
#define MOLEMOLE_FOLLOWERCHECKCD___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x107DD970)

namespace MoleMole
{
	inline static constexpr unsigned int FollowerCheckCD_TypeDefinitionIndex = 65517;

	class FollowerCheckCD : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* DefaultCD; // 0x50
		::BehaviorDesigner::Runtime::SharedFloat* CurrentCD; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWERCHECKCD__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWERCHECKCD_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWERCHECKCD_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWERCHECKCD___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWERCHECKCD___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
