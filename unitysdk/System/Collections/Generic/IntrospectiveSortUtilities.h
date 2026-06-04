#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_COLLECTIONS_GENERIC_INTROSPECTIVESORTUTILITIES_FLOORLOG2_OFFSET UNITYSDK_OFFSET(0x18599A10)
#define SYSTEM_COLLECTIONS_GENERIC_INTROSPECTIVESORTUTILITIES_THROWORIGNOREBADCOMPARER_OFFSET UNITYSDK_OFFSET(0x18599B80)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int IntrospectiveSortUtilities_TypeDefinitionIndex = 1520;

	class IntrospectiveSortUtilities : public ::System::Object
	{
	public:
		static ::System::Int32 FloorLog2(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_INTROSPECTIVESORTUTILITIES_FLOORLOG2_OFFSET))(a1);
		}

		static ::System::Void ThrowOrIgnoreBadComparer(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_INTROSPECTIVESORTUTILITIES_THROWORIGNOREBADCOMPARER_OFFSET))(a1);
		}
	};
}
