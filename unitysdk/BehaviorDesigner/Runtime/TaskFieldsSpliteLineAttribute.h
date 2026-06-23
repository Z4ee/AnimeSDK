#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define BEHAVIORDESIGNER_RUNTIME_TASKFIELDSSPLITELINEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDDACA0)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int TaskFieldsSpliteLineAttribute_TypeDefinitionIndex = 33211;

	class TaskFieldsSpliteLineAttribute : public ::System::Attribute
	{
	public:
		::System::String* labeName; // 0x10

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKFIELDSSPLITELINEATTRIBUTE__CTOR_OFFSET))(this, name);
		}
	};
}
