#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AITargetType.h"

class Class_3_06419CA21ECB69E6;
class Class_3_F97B015544BE936B;
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_REMOVETAG_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x145002F0)
#define MOLEMOLE_REMOVETAG_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14500550)
#define MOLEMOLE_REMOVETAG__CTOR_OFFSET UNITYSDK_OFFSET(0x14500800)
#define MOLEMOLE_REMOVETAG___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x14500890)
#define MOLEMOLE_REMOVETAG___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14500920)

namespace MoleMole
{
	inline static constexpr unsigned int RemoveTag_TypeDefinitionIndex = 61382;

	class RemoveTag : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::Class_3_F97B015544BE936B* characterData; // 0x58
		::MoleMole::Battle::Entity* ownerEntity; // 0x60
		::Class_3_06419CA21ECB69E6* attackTargetComponent; // 0x68
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x70
		::System::String* TagName; // 0x78
		::MoleMole::AITargetType TargetType; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REMOVETAG__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REMOVETAG_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REMOVETAG_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REMOVETAG___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REMOVETAG___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
