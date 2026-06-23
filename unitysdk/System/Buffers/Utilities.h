#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_BUFFERS_UTILITIES_GETMAXSIZEFORBUCKET_OFFSET UNITYSDK_OFFSET(0x1E88E940)
#define SYSTEM_BUFFERS_UTILITIES_SELECTBUCKETINDEX_OFFSET UNITYSDK_OFFSET(0x1E88E8D0)

namespace System::Buffers
{
	inline static constexpr unsigned int Utilities_TypeDefinitionIndex = 6526;

	class Utilities : public ::System::Object
	{
	public:
		static ::System::Int32 SelectBucketIndex(::System::Int32 bufferSize)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_UTILITIES_SELECTBUCKETINDEX_OFFSET))(bufferSize);
		}

		static ::System::Int32 GetMaxSizeForBucket(::System::Int32 binIndex)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_UTILITIES_GETMAXSIZEFORBUCKET_OFFSET))(binIndex);
		}
	};
}
