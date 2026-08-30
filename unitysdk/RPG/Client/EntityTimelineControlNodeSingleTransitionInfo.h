#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ENTITYTIMELINECONTROLNODESINGLETRANSITIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xCEA4F60)

namespace RPG::Client
{
	inline static constexpr unsigned int EntityTimelineControlNodeSingleTransitionInfo_TypeDefinitionIndex = 63831;

	class EntityTimelineControlNodeSingleTransitionInfo : public ::System::Object
	{
	public:
		::System::Int32 TransitionNodeIndex; // 0x10
		::System::Single Percentage; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYTIMELINECONTROLNODESINGLETRANSITIONINFO__CTOR_OFFSET))(this);
		}
	};
}
