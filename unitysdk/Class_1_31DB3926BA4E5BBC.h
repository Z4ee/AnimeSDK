#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B8B99354BD121470;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_31DB3926BA4E5BBC_GET_CACHEKEY_OFFSET UNITYSDK_OFFSET(0x154A8770)
#define CLASS_1_31DB3926BA4E5BBC_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x154A8780)
#define CLASS_1_31DB3926BA4E5BBC_GET_MINEXP_OFFSET UNITYSDK_OFFSET(0x154A8790)
#define CLASS_1_31DB3926BA4E5BBC_GET_UNLOCKCHIPIDLIST_OFFSET UNITYSDK_OFFSET(0x154A87A0)
#define CLASS_1_31DB3926BA4E5BBC__CTOR_OFFSET UNITYSDK_OFFSET(0x154A87B0)

inline static constexpr unsigned int Class_1_31DB3926BA4E5BBC_TypeDefinitionIndex = 80103;

class Class_1_31DB3926BA4E5BBC : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _UnlockChipIDList_k__BackingField; // 0x10
	::System::UInt32 _MinExp_k__BackingField; // 0x18
	::System::UInt32 _Level_k__BackingField; // 0x1C
	::System::Int32 _CacheKey_k__BackingField; // 0x20

	::System::Void _ctor(::Class_1_B8B99354BD121470* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B8B99354BD121470*))((::PBYTE)hIl2Cpp + CLASS_1_31DB3926BA4E5BBC__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 get_CacheKey()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31DB3926BA4E5BBC_GET_CACHEKEY_OFFSET))(this);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31DB3926BA4E5BBC_GET_LEVEL_OFFSET))(this);
	}

	::System::UInt32 get_MinExp()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31DB3926BA4E5BBC_GET_MINEXP_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_UnlockChipIDList()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31DB3926BA4E5BBC_GET_UNLOCKCHIPIDLIST_OFFSET))(this);
	}
};
