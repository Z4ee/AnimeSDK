#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_185A388C9275732B_STRUCT_2_CFAA9503430CE722_COMPARETO_OFFSET UNITYSDK_OFFSET(0x80C50)
#define CLASS_1_185A388C9275732B_STRUCT_2_CFAA9503430CE722_GET_AVATARIDS_OFFSET UNITYSDK_OFFSET(0x5B60)
#define CLASS_1_185A388C9275732B_STRUCT_2_CFAA9503430CE722_GET_BESTSELECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xDAD0)
#define CLASS_1_185A388C9275732B_STRUCT_2_CFAA9503430CE722_GET_MATCHEDPOSITIONS_OFFSET UNITYSDK_OFFSET(0x14410)
#define CLASS_1_185A388C9275732B_STRUCT_2_CFAA9503430CE722_SET_BESTSELECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xDAE0)
#define CLASS_1_185A388C9275732B_STRUCT_2_CFAA9503430CE722__CTOR_OFFSET UNITYSDK_OFFSET(0x80C40)

inline static constexpr unsigned int Class_1_185A388C9275732B_Struct_2_CFAA9503430CE722_TypeDefinitionIndex = 63719;

struct alignas(8) Class_1_185A388C9275732B_Struct_2_CFAA9503430CE722
{
	::System::Collections::Generic::List_1<::System::UInt32>* _AvatarIDs_k__BackingField; // 0x10
	::System::Int32 _BestSelectionCount_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* _MatchedPositions_k__BackingField; // 0x20

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_185A388C9275732B_STRUCT_2_CFAA9503430CE722__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_AvatarIDs()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_185A388C9275732B_STRUCT_2_CFAA9503430CE722_GET_AVATARIDS_OFFSET))(this);
	}

	::System::Int32 get_BestSelectionCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_185A388C9275732B_STRUCT_2_CFAA9503430CE722_GET_BESTSELECTIONCOUNT_OFFSET))(this);
	}

	::System::Void set_BestSelectionCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_185A388C9275732B_STRUCT_2_CFAA9503430CE722_SET_BESTSELECTIONCOUNT_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* get_MatchedPositions()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_185A388C9275732B_STRUCT_2_CFAA9503430CE722_GET_MATCHEDPOSITIONS_OFFSET))(this);
	}

	::System::Int32 CompareTo(::Class_1_185A388C9275732B_Struct_2_CFAA9503430CE722 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_185A388C9275732B_Struct_2_CFAA9503430CE722))((::PBYTE)hIl2Cpp + CLASS_1_185A388C9275732B_STRUCT_2_CFAA9503430CE722_COMPARETO_OFFSET))(this, a1);
	}
};
