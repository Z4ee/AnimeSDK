#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/OutputSlotInfo.h"

namespace System { class String; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_SHAPEOUTPUTSLOTINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE9BD70)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SHAPEOUTPUTSLOTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE9BD20)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int ShapeOutputSlotInfo_TypeDefinitionIndex = 39038;

	class ShapeOutputSlotInfo : public ::FluffyUnderware::Curvy::Generator::OutputSlotInfo
	{
	public:
		::System::Boolean OutputsVariableShape; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SHAPEOUTPUTSLOTINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SHAPEOUTPUTSLOTINFO__CTOR_1_OFFSET))(this, name);
		}
	};
}
