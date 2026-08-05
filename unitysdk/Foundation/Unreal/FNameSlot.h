#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_UNREAL_FNAMESLOT_GET_ENTRYID_OFFSET UNITYSDK_OFFSET(0xABE480)
#define FOUNDATION_UNREAL_FNAMESLOT_GET_ISUSED_OFFSET UNITYSDK_OFFSET(0x669870)
#define FOUNDATION_UNREAL_FNAMESLOT_GET_PROBEHASH_OFFSET UNITYSDK_OFFSET(0xABE4E0)
#define FOUNDATION_UNREAL_FNAMESLOT__CTOR_OFFSET UNITYSDK_OFFSET(0xABE470)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int FNameSlot_TypeDefinitionIndex = 8693;

	struct alignas(4) FNameSlot
	{
		::System::UInt32 _idAndHash; // 0x10

		/*
		::System::Void _ctor(::Foundation::Unreal::FNameEntryId entryId, ::System::UInt32 probeHash)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FNameEntryId, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMESLOT__CTOR_OFFSET))(this, entryId, probeHash);
		}
		*/

		/*
		::Foundation::Unreal::FNameEntryId get_EntryId()
		{
			return ((::Foundation::Unreal::FNameEntryId(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMESLOT_GET_ENTRYID_OFFSET))(this);
		}
		*/

		::System::UInt32 get_ProbeHash()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMESLOT_GET_PROBEHASH_OFFSET))(this);
		}

		::System::Boolean get_IsUsed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMESLOT_GET_ISUSED_OFFSET))(this);
		}
	};
}
