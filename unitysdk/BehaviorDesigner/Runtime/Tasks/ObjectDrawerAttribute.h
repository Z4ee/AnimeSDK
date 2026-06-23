#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define BEHAVIORDESIGNER_RUNTIME_TASKS_OBJECTDRAWERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E32CDE0)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int ObjectDrawerAttribute_TypeDefinitionIndex = 33322;

	class ObjectDrawerAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_OBJECTDRAWERATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
