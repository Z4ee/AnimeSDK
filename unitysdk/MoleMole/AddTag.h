#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AITargetType.h"

namespace MoleMole { class SharedGameEntity; }
namespace System { class String; }

#define MOLEMOLE_ADDTAG_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x144BA6F0)
#define MOLEMOLE_ADDTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x144BABB0)
#define MOLEMOLE_ADDTAG___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x144BAC40)

namespace MoleMole
{
	inline static constexpr unsigned int AddTag_TypeDefinitionIndex = 84718;

	class AddTag : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::System::String* TagName; // 0x58
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x60
		::MoleMole::AITargetType TargetType; // 0x68
		::System::Single Value; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ADDTAG__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ADDTAG_ONUPDATE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ADDTAG___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
