#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/UpdateCD.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }

#define MOLEMOLE_FOLLOWERUPDATECD_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13EDC470)
#define MOLEMOLE_FOLLOWERUPDATECD__CTOR_OFFSET UNITYSDK_OFFSET(0x13EDC4E0)
#define MOLEMOLE_FOLLOWERUPDATECD___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13EDC580)

namespace MoleMole
{
	inline static constexpr unsigned int FollowerUpdateCD_TypeDefinitionIndex = 85219;

	class FollowerUpdateCD : public ::MoleMole::UpdateCD
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* SharedDefaultTime; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWERUPDATECD__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWERUPDATECD_ONUPDATE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWERUPDATECD___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
