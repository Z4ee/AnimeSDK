#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/ObjectDrawerAttribute.h"

#define BEHAVIORDESIGNER_RUNTIME_OBJECTDRAWERS_INTSLIDERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F217530)

namespace BehaviorDesigner::Runtime::ObjectDrawers
{
	inline static constexpr unsigned int IntSliderAttribute_TypeDefinitionIndex = 33939;

	class IntSliderAttribute : public ::BehaviorDesigner::Runtime::Tasks::ObjectDrawerAttribute
	{
	public:
		::System::Int32 min; // 0x10
		::System::Int32 max; // 0x14

		::System::Void _ctor(::System::Int32 min, ::System::Int32 max)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_OBJECTDRAWERS_INTSLIDERATTRIBUTE__CTOR_OFFSET))(this, min, max);
		}
	};
}
