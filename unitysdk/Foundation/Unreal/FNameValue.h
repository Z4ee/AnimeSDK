#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FNameHash.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_UNREAL_FNAMEVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0xA75F80)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int FNameValue_TypeDefinitionIndex = 8624;

	struct alignas(8) FNameValue
	{
		::System::ReadOnlySpan_1<::System::Char> StringView; // 0x10
		::Foundation::Unreal::FNameHash StringHash; // 0x28

		::System::Void _ctor(::System::ReadOnlySpan_1<::System::Char> stringView)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Char>))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEVALUE__CTOR_OFFSET))(this, stringView);
		}
	};
}
