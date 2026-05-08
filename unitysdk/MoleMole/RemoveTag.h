#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AITargetType.h"

class Class_3_CF6254B260CF5CF4;
class Class_3_F97B015544BE936B;
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_REMOVETAG_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1703C7B0)
#define MOLEMOLE_REMOVETAG_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1703CA10)
#define MOLEMOLE_REMOVETAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1703CCA0)
#define MOLEMOLE_REMOVETAG___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1703CD30)
#define MOLEMOLE_REMOVETAG___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1703CDC0)

namespace MoleMole
{
	inline static constexpr unsigned int RemoveTag_TypeDefinitionIndex = 67722;

	class RemoveTag : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::Class_3_F97B015544BE936B* characterData; // 0x58
		::Class_3_CF6254B260CF5CF4* attackTargetComponent; // 0x60
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x68
		::MoleMole::Battle::Entity* ownerEntity; // 0x70
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
