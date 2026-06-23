#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/SlotInfo.h"

namespace System { class String; }
namespace System { class Type; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_OUTPUTSLOTINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D61BD50)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_OUTPUTSLOTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D61BD30)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int OutputSlotInfo_TypeDefinitionIndex = 38826;

	class OutputSlotInfo : public ::FluffyUnderware::Curvy::Generator::SlotInfo
	{
	public:
		::System::Void _ctor(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_OUTPUTSLOTINFO__CTOR_OFFSET))(this, type);
		}

		::System::Void _ctor_1(::System::String* name, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_OUTPUTSLOTINFO__CTOR_1_OFFSET))(this, name, type);
		}
	};
}
