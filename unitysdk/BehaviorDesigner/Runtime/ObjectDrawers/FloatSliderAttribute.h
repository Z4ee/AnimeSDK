#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/ObjectDrawerAttribute.h"

#define BEHAVIORDESIGNER_RUNTIME_OBJECTDRAWERS_FLOATSLIDERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8F5A80)

namespace BehaviorDesigner::Runtime::ObjectDrawers
{
	inline static constexpr unsigned int FloatSliderAttribute_TypeDefinitionIndex = 33938;

	class FloatSliderAttribute : public ::BehaviorDesigner::Runtime::Tasks::ObjectDrawerAttribute
	{
	public:
		::System::Single max; // 0x10
		::System::Single min; // 0x14

		::System::Void _ctor(::System::Single min, ::System::Single max)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_OBJECTDRAWERS_FLOATSLIDERATTRIBUTE__CTOR_OFFSET))(this, min, max);
		}
	};
}
