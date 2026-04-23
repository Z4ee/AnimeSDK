#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_COLLECTIONS_GENERIC_INTROSPECTIVESORTUTILITIES_FLOORLOG2_OFFSET UNITYSDK_OFFSET(0x177DF2A0)
#define SYSTEM_COLLECTIONS_GENERIC_INTROSPECTIVESORTUTILITIES_THROWORIGNOREBADCOMPARER_OFFSET UNITYSDK_OFFSET(0x177DF410)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int IntrospectiveSortUtilities_TypeDefinitionIndex = 1521;

	class IntrospectiveSortUtilities : public ::System::Object
	{
	public:
		static ::System::Int32 FloorLog2(::System::Int32 n)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_INTROSPECTIVESORTUTILITIES_FLOORLOG2_OFFSET))(n);
		}

		static ::System::Void ThrowOrIgnoreBadComparer(::System::Object* comparer)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_INTROSPECTIVESORTUTILITIES_THROWORIGNOREBADCOMPARER_OFFSET))(comparer);
		}
	};
}
