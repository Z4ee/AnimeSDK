#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOTCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1E3B9150)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOTCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3B9260)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGSpotComparer_TypeDefinitionIndex = 38833;

	class CGSpotComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOTCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::System::Object* x, ::System::Object* y)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOTCOMPARER_COMPARE_OFFSET))(this, x, y);
		}
	};
}
