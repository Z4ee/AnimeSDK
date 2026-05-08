#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace MoleMole { class SharedGameEntity; }
namespace System { class String; }

#define MOLEMOLE_LISTENENTITYENTRY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x16B92FC0)
#define MOLEMOLE_LISTENENTITYENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x16B93140)
#define MOLEMOLE_LISTENENTITYENTRY___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x16B931D0)

namespace MoleMole
{
	inline static constexpr unsigned int ListenEntityEntry_TypeDefinitionIndex = 80129;

	class ListenEntityEntry : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x58
		::System::String* TargetKey; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LISTENENTITYENTRY__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LISTENENTITYENTRY_ONUPDATE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LISTENENTITYENTRY___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
