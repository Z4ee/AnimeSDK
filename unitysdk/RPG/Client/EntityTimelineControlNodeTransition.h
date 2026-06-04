#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EntityTimelineControlNodeSingleTransitionInfo; }

#define RPG_CLIENT_ENTITYTIMELINECONTROLNODETRANSITION__CTOR_OFFSET UNITYSDK_OFFSET(0xB913320)

namespace RPG::Client
{
	inline static constexpr unsigned int EntityTimelineControlNodeTransition_TypeDefinitionIndex = 59694;

	class EntityTimelineControlNodeTransition : public ::System::Object
	{
	public:
		::System::Int32 StartNodeIndex; // 0x10
		::System::Int32 EndNodeIndex; // 0x14
		::Il2CppArray<::RPG::Client::EntityTimelineControlNodeSingleTransitionInfo*>* TransitionNodeIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYTIMELINECONTROLNODETRANSITION__CTOR_OFFSET))(this);
		}
	};
}
