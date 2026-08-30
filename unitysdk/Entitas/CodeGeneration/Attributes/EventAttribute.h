#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/EventTarget.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/EventType.h"
#include "unitysdk/System/Attribute.h"

#define ENTITAS_CODEGENERATION_ATTRIBUTES_EVENTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x16531870)

namespace Entitas::CodeGeneration::Attributes
{
	inline static constexpr unsigned int EventAttribute_TypeDefinitionIndex = 10024;

	class EventAttribute : public ::System::Attribute
	{
	public:
		::Entitas::CodeGeneration::Attributes::EventTarget eventTarget; // 0x10
		::Entitas::CodeGeneration::Attributes::EventType eventType; // 0x14
		::System::Int32 priority; // 0x18

		::System::Void _ctor(::Entitas::CodeGeneration::Attributes::EventTarget a1, ::Entitas::CodeGeneration::Attributes::EventType a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::CodeGeneration::Attributes::EventTarget, ::Entitas::CodeGeneration::Attributes::EventType, ::System::Int32))((::PBYTE)hIl2Cpp + ENTITAS_CODEGENERATION_ATTRIBUTES_EVENTATTRIBUTE__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
