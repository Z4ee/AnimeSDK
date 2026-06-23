#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_UNREAL_FNAMEENTRYHEADER_ISEQUAL_OFFSET UNITYSDK_OFFSET(0x1E46F0F0)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int FNameEntryHeader_TypeDefinitionIndex = 8712;

	struct alignas(4) FNameEntryHeader
	{
		::System::Int32 Length; // 0x10

		static ::System::Boolean IsEqual(::Foundation::Unreal::FNameEntryHeader left, ::Foundation::Unreal::FNameEntryHeader right)
		{
			return ((::System::Boolean(*)(::Foundation::Unreal::FNameEntryHeader, ::Foundation::Unreal::FNameEntryHeader))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEENTRYHEADER_ISEQUAL_OFFSET))(left, right);
		}
	};
}
