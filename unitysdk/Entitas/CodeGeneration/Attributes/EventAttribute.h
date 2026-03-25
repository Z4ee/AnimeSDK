#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/EventTarget.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/EventType.h"
#include "unitysdk/System/Attribute.h"

#define ENTITAS_CODEGENERATION_ATTRIBUTES_EVENTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x11A813F0)

namespace Entitas::CodeGeneration::Attributes
{
	inline static constexpr unsigned int EventAttribute_TypeDefinitionIndex = 9770;

	class EventAttribute : public ::System::Attribute
	{
	public:
		::System::Int32 priority; // 0x10
		::Entitas::CodeGeneration::Attributes::EventTarget eventTarget; // 0x14
		::Entitas::CodeGeneration::Attributes::EventType eventType; // 0x18

		::System::Void _ctor(::Entitas::CodeGeneration::Attributes::EventTarget eventTarget, ::Entitas::CodeGeneration::Attributes::EventType eventType, ::System::Int32 priority)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::CodeGeneration::Attributes::EventTarget, ::Entitas::CodeGeneration::Attributes::EventType, ::System::Int32))((::PBYTE)hIl2Cpp + ENTITAS_CODEGENERATION_ATTRIBUTES_EVENTATTRIBUTE__CTOR_OFFSET))(this, eventTarget, eventType, priority);
		}
	};
}
