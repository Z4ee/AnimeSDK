#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_BUFFERS_UTILITIES_GETMAXSIZEFORBUCKET_OFFSET UNITYSDK_OFFSET(0x1F011C00)
#define SYSTEM_BUFFERS_UTILITIES_SELECTBUCKETINDEX_OFFSET UNITYSDK_OFFSET(0x1F011B90)

namespace System::Buffers
{
	inline static constexpr unsigned int Utilities_TypeDefinitionIndex = 3752;

	class Utilities : public ::System::Object
	{
	public:
		static ::System::Int32 SelectBucketIndex(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_UTILITIES_SELECTBUCKETINDEX_OFFSET))(a1);
		}

		static ::System::Int32 GetMaxSizeForBucket(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_UTILITIES_GETMAXSIZEFORBUCKET_OFFSET))(a1);
		}
	};
}
