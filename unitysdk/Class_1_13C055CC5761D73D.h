#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_0_16E4307DCC419505_150;
class Class_1_C632DA14C306471D;
class Class_1_FF80A1ACD786CECB;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_13C055CC5761D73D_GET_AVAILABLECHIPIDS_OFFSET UNITYSDK_OFFSET(0xCC92F20)
#define CLASS_1_13C055CC5761D73D_GET_AVAILABLETALENTPATHS_OFFSET UNITYSDK_OFFSET(0xCC92F40)
#define CLASS_1_13C055CC5761D73D_GET_BASEATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0xCC92F60)
#define CLASS_1_13C055CC5761D73D_GET_EXPANDEDBOARDSIZE_OFFSET UNITYSDK_OFFSET(0xCC92F80)
#define CLASS_1_13C055CC5761D73D_GET_INCREASEDOVERLAPMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xCC92FB0)
#define CLASS_1_13C055CC5761D73D_GET_MODE_OFFSET UNITYSDK_OFFSET(0xCC92F00)
#define CLASS_1_13C055CC5761D73D_SET_AVAILABLECHIPIDS_OFFSET UNITYSDK_OFFSET(0xCC92F30)
#define CLASS_1_13C055CC5761D73D_SET_AVAILABLETALENTPATHS_OFFSET UNITYSDK_OFFSET(0xCC92F50)
#define CLASS_1_13C055CC5761D73D_SET_BASEATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0xCC92F70)
#define CLASS_1_13C055CC5761D73D_SET_EXPANDEDBOARDSIZE_OFFSET UNITYSDK_OFFSET(0xCC92FA0)
#define CLASS_1_13C055CC5761D73D_SET_INCREASEDOVERLAPMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xCC92FC0)
#define CLASS_1_13C055CC5761D73D_SET_MODE_OFFSET UNITYSDK_OFFSET(0xCC92F10)
#define CLASS_1_13C055CC5761D73D__CTOR_OFFSET UNITYSDK_OFFSET(0xCC92FD0)

inline static constexpr unsigned int Class_1_13C055CC5761D73D_TypeDefinitionIndex = 79545;

class Class_1_13C055CC5761D73D : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_150*>* _AvailableTalentPaths_k__BackingField; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _AvailableChipIDs_k__BackingField; // 0x18
	::Class_1_C632DA14C306471D* _Mode_k__BackingField; // 0x20
	::Class_1_FF80A1ACD786CECB* _BaseAttributeValue_k__BackingField; // 0x28
	::System::Nullable_1<::UnityEngine::Vector2Int> _ExpandedBoardSize_k__BackingField; // 0x30
	::System::Nullable_1<::System::Int32> _IncreasedOverlapMaxCount_k__BackingField; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13C055CC5761D73D__CTOR_OFFSET))(this);
	}

	::Class_1_C632DA14C306471D* get_Mode()
	{
		return ((::Class_1_C632DA14C306471D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13C055CC5761D73D_GET_MODE_OFFSET))(this);
	}

	::System::Void set_Mode(::Class_1_C632DA14C306471D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C632DA14C306471D*))((::PBYTE)hIl2Cpp + CLASS_1_13C055CC5761D73D_SET_MODE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_AvailableChipIDs()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13C055CC5761D73D_GET_AVAILABLECHIPIDS_OFFSET))(this);
	}

	::System::Void set_AvailableChipIDs(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_13C055CC5761D73D_SET_AVAILABLECHIPIDS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_150*>* get_AvailableTalentPaths()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_150*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13C055CC5761D73D_GET_AVAILABLETALENTPATHS_OFFSET))(this);
	}

	::System::Void set_AvailableTalentPaths(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_150*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_150*>*))((::PBYTE)hIl2Cpp + CLASS_1_13C055CC5761D73D_SET_AVAILABLETALENTPATHS_OFFSET))(this, a1);
	}

	::Class_1_FF80A1ACD786CECB* get_BaseAttributeValue()
	{
		return ((::Class_1_FF80A1ACD786CECB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13C055CC5761D73D_GET_BASEATTRIBUTEVALUE_OFFSET))(this);
	}

	::System::Void set_BaseAttributeValue(::Class_1_FF80A1ACD786CECB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FF80A1ACD786CECB*))((::PBYTE)hIl2Cpp + CLASS_1_13C055CC5761D73D_SET_BASEATTRIBUTEVALUE_OFFSET))(this, a1);
	}

	::System::Nullable_1<::UnityEngine::Vector2Int> get_ExpandedBoardSize()
	{
		return ((::System::Nullable_1<::UnityEngine::Vector2Int>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13C055CC5761D73D_GET_EXPANDEDBOARDSIZE_OFFSET))(this);
	}

	::System::Void set_ExpandedBoardSize(::System::Nullable_1<::UnityEngine::Vector2Int> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector2Int>))((::PBYTE)hIl2Cpp + CLASS_1_13C055CC5761D73D_SET_EXPANDEDBOARDSIZE_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::Int32> get_IncreasedOverlapMaxCount()
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13C055CC5761D73D_GET_INCREASEDOVERLAPMAXCOUNT_OFFSET))(this);
	}

	::System::Void set_IncreasedOverlapMaxCount(::System::Nullable_1<::System::Int32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_13C055CC5761D73D_SET_INCREASEDOVERLAPMAXCOUNT_OFFSET))(this, a1);
	}
};
