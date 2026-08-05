#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FNameEntryHeader.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_UNREAL_FNAMEHASH_GENERATEHASH_OFFSET UNITYSDK_OFFSET(0x1F0CF650)
#define FOUNDATION_UNREAL_FNAMEHASH_GETPROBESTART_OFFSET UNITYSDK_OFFSET(0x1F0CF830)
#define FOUNDATION_UNREAL_FNAMEHASH_ISNONE_OFFSET UNITYSDK_OFFSET(0x1F0CF690)
#define FOUNDATION_UNREAL_FNAMEHASH__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA8E4E0)
#define FOUNDATION_UNREAL_FNAMEHASH__CTOR_OFFSET UNITYSDK_OFFSET(0xA8E4A0)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int FNameHash_TypeDefinitionIndex = 8864;

	struct alignas(4) FNameHash
	{
		::System::UInt32 ShardIndex; // 0x10
		::System::UInt32 UnmaskedSlotIndex; // 0x14
		::System::UInt32 SlotProbeHash; // 0x18
		::Foundation::Unreal::FNameEntryHeader EntryProbeHeader; // 0x1C

		::System::Void _ctor(::System::UInt64 hashValue, ::System::Int32 length, ::System::UInt32 isNone)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEHASH__CTOR_OFFSET))(this, hashValue, length, isNone);
		}

		/*
		::System::Void _ctor_1(::System::ReadOnlySpan_1<::System::Char> stringView)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Char>))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEHASH__CTOR_1_OFFSET))(this, stringView);
		}
		*/

		/*
		static ::System::UInt64 GenerateHash(::System::ReadOnlySpan_1<::System::Char> stringView)
		{
			return ((::System::UInt64(*)(::System::ReadOnlySpan_1<::System::Char>))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEHASH_GENERATEHASH_OFFSET))(stringView);
		}
		*/

		/*
		static ::System::UInt32 IsNone(::System::ReadOnlySpan_1<::System::Char> stringView)
		{
			return ((::System::UInt32(*)(::System::ReadOnlySpan_1<::System::Char>))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEHASH_ISNONE_OFFSET))(stringView);
		}
		*/

		static ::System::UInt32 GetProbeStart(::System::UInt32 unmaskedSlotIndex, ::System::UInt32 slotMask)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEHASH_GETPROBESTART_OFFSET))(unmaskedSlotIndex, slotMask);
		}
	};
}
