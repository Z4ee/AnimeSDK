#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FNameEntryHeader.h"
#include "unitysdk/Foundation/Unreal/FNameEntry__Storage_e__FixedBuffer.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_UNREAL_FNAMEENTRY_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x9DA300)
#define FOUNDATION_UNREAL_FNAMEENTRY_GETSTRINGVIEW_OFFSET UNITYSDK_OFFSET(0x9DA310)
#define FOUNDATION_UNREAL_FNAMEENTRY_STORE_OFFSET UNITYSDK_OFFSET(0x9DA3E0)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int FNameEntry_TypeDefinitionIndex = 8562;

	struct alignas(4) FNameEntry
	{
		::Foundation::Unreal::FNameEntryHeader Header; // 0x10
		::Foundation::Unreal::FNameEntry__Storage_e__FixedBuffer Storage; // 0x14

		::System::Int32 GetLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEENTRY_GETLENGTH_OFFSET))(this);
		}

		/*
		::System::ReadOnlySpan_1<::System::Char> GetStringView()
		{
			return ((::System::ReadOnlySpan_1<::System::Char>(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEENTRY_GETSTRINGVIEW_OFFSET))(this);
		}
		*/

		/*
		::System::Void Store(::System::ReadOnlySpan_1<::System::Char> stringView)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Char>))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEENTRY_STORE_OFFSET))(this, stringView);
		}
		*/
	};
}
