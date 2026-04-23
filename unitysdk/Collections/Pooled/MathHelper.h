#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define COLLECTIONS_POOLED_MATHHELPER_GETINDEXOFPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x17AD5F40)
#define COLLECTIONS_POOLED_MATHHELPER_ISPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x17AD5F30)
#define COLLECTIONS_POOLED_MATHHELPER_NEXTPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x17AD5F00)

namespace Collections::Pooled
{
	inline static constexpr unsigned int MathHelper_TypeDefinitionIndex = 5322;

	class MathHelper : public ::System::Object
	{
	public:
		static ::System::Int32 NextPowerOfTwo(::System::Int32 number)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_MATHHELPER_NEXTPOWEROFTWO_OFFSET))(number);
		}

		static ::System::Boolean IsPowerOfTwo(::System::Int32 number)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_MATHHELPER_ISPOWEROFTWO_OFFSET))(number);
		}

		static ::System::Int32 GetIndexOfPowerOfTwo(::System::Int32 number1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_MATHHELPER_GETINDEXOFPOWEROFTWO_OFFSET))(number1);
		}
	};
}
