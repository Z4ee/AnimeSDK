#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define COLLECTIONS_POOLED_MATHHELPER_GETINDEXOFPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x1BF12D50)
#define COLLECTIONS_POOLED_MATHHELPER_ISPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x1BF12D40)
#define COLLECTIONS_POOLED_MATHHELPER_NEXTPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x1BF12D10)

namespace Collections::Pooled
{
	inline static constexpr unsigned int MathHelper_TypeDefinitionIndex = 5090;

	class MathHelper : public ::System::Object
	{
	public:
		static ::System::Int32 NextPowerOfTwo(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_MATHHELPER_NEXTPOWEROFTWO_OFFSET))(a1);
		}

		static ::System::Boolean IsPowerOfTwo(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_MATHHELPER_ISPOWEROFTWO_OFFSET))(a1);
		}

		static ::System::Int32 GetIndexOfPowerOfTwo(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_MATHHELPER_GETINDEXOFPOWEROFTWO_OFFSET))(a1);
		}
	};
}
