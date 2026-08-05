#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define BEHAVIORDESIGNER_RUNTIME_TASKS_OBJECTDRAWERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F763F30)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int ObjectDrawerAttribute_TypeDefinitionIndex = 33958;

	class ObjectDrawerAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_OBJECTDRAWERATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
