#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections { class IComparer; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections { class IEqualityComparer; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define SYSTEM_ARRAY_BINARYSEARCH_1_OFFSET UNITYSDK_OFFSET(0x1AD23FD0)
#define SYSTEM_ARRAY_BINARYSEARCH_2_OFFSET UNITYSDK_OFFSET(0x1AD23FF0)
#define SYSTEM_ARRAY_BINARYSEARCH_3_OFFSET UNITYSDK_OFFSET(0x1AD23010)
#define SYSTEM_ARRAY_BINARYSEARCH_OFFSET UNITYSDK_OFFSET(0x1AD22E70)
#define SYSTEM_ARRAY_CANASSIGNARRAYELEMENT_OFFSET UNITYSDK_OFFSET(0x1AD27260)
#define SYSTEM_ARRAY_CLEARINTERNAL_OFFSET UNITYSDK_OFFSET(0x1AD27180)
#define SYSTEM_ARRAY_CLEAR_OFFSET UNITYSDK_OFFSET(0x1AD211F0)
#define SYSTEM_ARRAY_CLONE_OFFSET UNITYSDK_OFFSET(0x1AD21F60)
#define SYSTEM_ARRAY_COMBINEHASHCODES_OFFSET UNITYSDK_OFFSET(0x1AD22A30)
#define SYSTEM_ARRAY_CONSTRAINEDCOPY_OFFSET UNITYSDK_OFFSET(0x1AD27650)
#define SYSTEM_ARRAY_COPYTO_1_OFFSET UNITYSDK_OFFSET(0x1AD23860)
#define SYSTEM_ARRAY_COPYTO_OFFSET UNITYSDK_OFFSET(0x1AD21530)
#define SYSTEM_ARRAY_COPY_1_OFFSET UNITYSDK_OFFSET(0x1AD23790)
#define SYSTEM_ARRAY_COPY_2_OFFSET UNITYSDK_OFFSET(0x1AD236C0)
#define SYSTEM_ARRAY_COPY_3_OFFSET UNITYSDK_OFFSET(0x1AD21700)
#define SYSTEM_ARRAY_COPY_OFFSET UNITYSDK_OFFSET(0x1AD23630)
#define SYSTEM_ARRAY_CREATEARRAYTYPEMISMATCHEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1AD271B0)
#define SYSTEM_ARRAY_CREATEINSTANCEIMPL_OFFSET UNITYSDK_OFFSET(0x1AD26A70)
#define SYSTEM_ARRAY_CREATEINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x1AD270C0)
#define SYSTEM_ARRAY_CREATEINSTANCE_2_OFFSET UNITYSDK_OFFSET(0x1AD27050)
#define SYSTEM_ARRAY_CREATEINSTANCE_3_OFFSET UNITYSDK_OFFSET(0x1AD27110)
#define SYSTEM_ARRAY_CREATEINSTANCE_4_OFFSET UNITYSDK_OFFSET(0x1AD20480)
#define SYSTEM_ARRAY_CREATEINSTANCE_5_OFFSET UNITYSDK_OFFSET(0x1AD26B30)
#define SYSTEM_ARRAY_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1AD20320)
#define SYSTEM_ARRAY_FASTCOPY_OFFSET UNITYSDK_OFFSET(0x1AD26A60)
#define SYSTEM_ARRAY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AD264F0)
#define SYSTEM_ARRAY_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x1AD239C0)
#define SYSTEM_ARRAY_GETLONGLENGTH_OFFSET UNITYSDK_OFFSET(0x1AD23A20)
#define SYSTEM_ARRAY_GETLOWERBOUND_OFFSET UNITYSDK_OFFSET(0x1AD21190)
#define SYSTEM_ARRAY_GETMEDIAN_OFFSET UNITYSDK_OFFSET(0x1AD241A0)
#define SYSTEM_ARRAY_GETRANK_OFFSET UNITYSDK_OFFSET(0x1AD26A00)
#define SYSTEM_ARRAY_GETUPPERBOUND_OFFSET UNITYSDK_OFFSET(0x1AD26A80)
#define SYSTEM_ARRAY_GETVALUEIMPL_OFFSET UNITYSDK_OFFSET(0x1AD26A10)
#define SYSTEM_ARRAY_GETVALUE_1_OFFSET UNITYSDK_OFFSET(0x1AD23B00)
#define SYSTEM_ARRAY_GETVALUE_2_OFFSET UNITYSDK_OFFSET(0x1AD23C60)
#define SYSTEM_ARRAY_GETVALUE_3_OFFSET UNITYSDK_OFFSET(0x1AD23E20)
#define SYSTEM_ARRAY_GETVALUE_4_OFFSET UNITYSDK_OFFSET(0x1AD23F80)
#define SYSTEM_ARRAY_GETVALUE_5_OFFSET UNITYSDK_OFFSET(0x1AD209C0)
#define SYSTEM_ARRAY_GETVALUE_6_OFFSET UNITYSDK_OFFSET(0x1AD23C00)
#define SYSTEM_ARRAY_GETVALUE_7_OFFSET UNITYSDK_OFFSET(0x1AD23DB0)
#define SYSTEM_ARRAY_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1AD23A80)
#define SYSTEM_ARRAY_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x1AD23F90)
#define SYSTEM_ARRAY_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1AD23FA0)
#define SYSTEM_ARRAY_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1AD23FB0)
#define SYSTEM_ARRAY_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1AD208A0)
#define SYSTEM_ARRAY_GET_LONGLENGTH_OFFSET UNITYSDK_OFFSET(0x1AD238F0)
#define SYSTEM_ARRAY_GET_RANK_OFFSET UNITYSDK_OFFSET(0x1AD216F0)
#define SYSTEM_ARRAY_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1AD23FC0)
#define SYSTEM_ARRAY_INDEXOF_1_OFFSET UNITYSDK_OFFSET(0x1AD24510)
#define SYSTEM_ARRAY_INDEXOF_2_OFFSET UNITYSDK_OFFSET(0x1AD241B0)
#define SYSTEM_ARRAY_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1AD20ED0)
#define SYSTEM_ARRAY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1AD27660)
#define SYSTEM_ARRAY_INTERNALARRAY__ICOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x1AD26860)
#define SYSTEM_ARRAY_INTERNALARRAY__ICOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1AD26750)
#define SYSTEM_ARRAY_INTERNALARRAY__ICOLLECTION_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1AD26850)
#define SYSTEM_ARRAY_INTERNALARRAY__IREADONLYCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1AD268B0)
#define SYSTEM_ARRAY_INTERNALARRAY__REMOVEAT_OFFSET UNITYSDK_OFFSET(0x1AD269B0)
#define SYSTEM_ARRAY_LASTINDEXOF_1_OFFSET UNITYSDK_OFFSET(0x1AD24E90)
#define SYSTEM_ARRAY_LASTINDEXOF_2_OFFSET UNITYSDK_OFFSET(0x1AD24930)
#define SYSTEM_ARRAY_LASTINDEXOF_OFFSET UNITYSDK_OFFSET(0x1AD246C0)
#define SYSTEM_ARRAY_REVERSE_1_OFFSET UNITYSDK_OFFSET(0x1AD250A0)
#define SYSTEM_ARRAY_REVERSE_OFFSET UNITYSDK_OFFSET(0x1AD24F10)
#define SYSTEM_ARRAY_SETVALUEIMPL_OFFSET UNITYSDK_OFFSET(0x1AD26A50)
#define SYSTEM_ARRAY_SETVALUE_1_OFFSET UNITYSDK_OFFSET(0x1AD25540)
#define SYSTEM_ARRAY_SETVALUE_2_OFFSET UNITYSDK_OFFSET(0x1AD256A0)
#define SYSTEM_ARRAY_SETVALUE_3_OFFSET UNITYSDK_OFFSET(0x1AD25870)
#define SYSTEM_ARRAY_SETVALUE_4_OFFSET UNITYSDK_OFFSET(0x1AD259E0)
#define SYSTEM_ARRAY_SETVALUE_5_OFFSET UNITYSDK_OFFSET(0x1AD20C40)
#define SYSTEM_ARRAY_SETVALUE_6_OFFSET UNITYSDK_OFFSET(0x1AD25640)
#define SYSTEM_ARRAY_SETVALUE_7_OFFSET UNITYSDK_OFFSET(0x1AD25800)
#define SYSTEM_ARRAY_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1AD254B0)
#define SYSTEM_ARRAY_SORTIMPL_OFFSET UNITYSDK_OFFSET(0x1AD263F0)
#define SYSTEM_ARRAY_SORT_1_OFFSET UNITYSDK_OFFSET(0x1AD25E90)
#define SYSTEM_ARRAY_SORT_2_OFFSET UNITYSDK_OFFSET(0x1AD25EB0)
#define SYSTEM_ARRAY_SORT_3_OFFSET UNITYSDK_OFFSET(0x1AD26050)
#define SYSTEM_ARRAY_SORT_4_OFFSET UNITYSDK_OFFSET(0x1AD26070)
#define SYSTEM_ARRAY_SORT_5_OFFSET UNITYSDK_OFFSET(0x1AD26220)
#define SYSTEM_ARRAY_SORT_6_OFFSET UNITYSDK_OFFSET(0x1AD263D0)
#define SYSTEM_ARRAY_SORT_7_OFFSET UNITYSDK_OFFSET(0x1AD25B90)
#define SYSTEM_ARRAY_SORT_OFFSET UNITYSDK_OFFSET(0x1AD259F0)
#define SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ICOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1AD207A0)
#define SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_ADD_OFFSET UNITYSDK_OFFSET(0x1AD20E60)
#define SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x1AD21070)
#define SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1AD20EB0)
#define SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1AD209A0)
#define SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1AD209B0)
#define SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1AD21430)
#define SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_INSERT_OFFSET UNITYSDK_OFFSET(0x1AD21440)
#define SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x1AD214E0)
#define SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x1AD21490)
#define SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1AD20C30)
#define SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ISTRUCTURALCOMPARABLE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1AD22000)
#define SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ISTRUCTURALEQUATABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AD22520)
#define SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ISTRUCTURALEQUATABLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AD22A40)
#define SYSTEM_ARRAY_UNSAFECREATEINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x1AD26FF0)
#define SYSTEM_ARRAY_UNSAFECREATEINSTANCE_2_OFFSET UNITYSDK_OFFSET(0x1AD270B0)
#define SYSTEM_ARRAY_UNSAFECREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1AD26B20)
#define SYSTEM_ARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD26740)

namespace System
{
	inline static constexpr unsigned int Array_TypeDefinitionIndex = 136;

	class Array : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY__CTOR_OFFSET))(this);
		}

		static ::System::Array* CreateInstance(::System::Type* a1, ::Il2CppArray<::System::Int64>* a2)
		{
			return ((::System::Array*(*)(::System::Type*, ::Il2CppArray<::System::Int64>*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_CREATEINSTANCE_OFFSET))(a1, a2);
		}

		::System::Int32 System_Collections_ICollection_get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ICOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean System_Collections_IList_get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Object* System_Collections_IList_get_Item(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void System_Collections_IList_set_Item(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Int32 System_Collections_IList_Add(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_ADD_OFFSET))(this, a1);
		}

		::System::Boolean System_Collections_IList_Contains(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_CONTAINS_OFFSET))(this, a1);
		}

		::System::Void System_Collections_IList_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_CLEAR_OFFSET))(this);
		}

		::System::Int32 System_Collections_IList_IndexOf(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_INDEXOF_OFFSET))(this, a1);
		}

		::System::Void System_Collections_IList_Insert(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_INSERT_OFFSET))(this, a1, a2);
		}

		::System::Void System_Collections_IList_Remove(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_REMOVE_OFFSET))(this, a1);
		}

		::System::Void System_Collections_IList_RemoveAt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_REMOVEAT_OFFSET))(this, a1);
		}

		::System::Void CopyTo(::System::Array* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_CLONE_OFFSET))(this);
		}

		::System::Int32 System_Collections_IStructuralComparable_CompareTo(::System::Object* a1, ::System::Collections::IComparer* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ISTRUCTURALCOMPARABLE_COMPARETO_OFFSET))(this, a1, a2);
		}

		::System::Boolean System_Collections_IStructuralEquatable_Equals(::System::Object* a1, ::System::Collections::IEqualityComparer* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Collections::IEqualityComparer*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ISTRUCTURALEQUATABLE_EQUALS_OFFSET))(this, a1, a2);
		}

		static ::System::Int32 CombineHashCodes(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_COMBINEHASHCODES_OFFSET))(a1, a2);
		}

		::System::Int32 System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::IEqualityComparer*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ISTRUCTURALEQUATABLE_GETHASHCODE_OFFSET))(this, a1);
		}

		static ::System::Int32 BinarySearch(::System::Array* a1, ::System::Object* a2)
		{
			return ((::System::Int32(*)(::System::Array*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_BINARYSEARCH_OFFSET))(a1, a2);
		}

		static ::System::Void Copy(::System::Array* a1, ::System::Array* a2, ::System::Int64 a3)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Array*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_COPY_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Copy_1(::System::Array* a1, ::System::Int64 a2, ::System::Array* a3, ::System::Int64 a4, ::System::Int64 a5)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Int64, ::System::Array*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_COPY_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void CopyTo_1(::System::Array* a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_COPYTO_1_OFFSET))(this, a1, a2);
		}

		::System::Int64 get_LongLength()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GET_LONGLENGTH_OFFSET))(this);
		}

		::System::Int64 GetLongLength(::System::Int32 a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GETLONGLENGTH_OFFSET))(this, a1);
		}

		::System::Object* GetValue(::System::Int64 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GETVALUE_OFFSET))(this, a1);
		}

		::System::Object* GetValue_1(::System::Int64 a1, ::System::Int64 a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GETVALUE_1_OFFSET))(this, a1, a2);
		}

		::System::Object* GetValue_2(::System::Int64 a1, ::System::Int64 a2, ::System::Int64 a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int64, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GETVALUE_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* GetValue_3(::Il2CppArray<::System::Int64>* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Int64>*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GETVALUE_3_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFixedSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GET_ISFIXEDSIZE_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GET_SYNCROOT_OFFSET))(this);
		}

		static ::System::Int32 BinarySearch_1(::System::Array* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Object* a4)
		{
			return ((::System::Int32(*)(::System::Array*, ::System::Int32, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_BINARYSEARCH_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 BinarySearch_2(::System::Array* a1, ::System::Object* a2, ::System::Collections::IComparer* a3)
		{
			return ((::System::Int32(*)(::System::Array*, ::System::Object*, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_BINARYSEARCH_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 BinarySearch_3(::System::Array* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Object* a4, ::System::Collections::IComparer* a5)
		{
			return ((::System::Int32(*)(::System::Array*, ::System::Int32, ::System::Int32, ::System::Object*, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_BINARYSEARCH_3_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 GetMedian(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GETMEDIAN_OFFSET))(a1, a2);
		}

		static ::System::Int32 IndexOf(::System::Array* a1, ::System::Object* a2)
		{
			return ((::System::Int32(*)(::System::Array*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_INDEXOF_OFFSET))(a1, a2);
		}

		static ::System::Int32 IndexOf_1(::System::Array* a1, ::System::Object* a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::Array*, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_INDEXOF_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 IndexOf_2(::System::Array* a1, ::System::Object* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::System::Array*, ::System::Object*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_INDEXOF_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 LastIndexOf(::System::Array* a1, ::System::Object* a2)
		{
			return ((::System::Int32(*)(::System::Array*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_LASTINDEXOF_OFFSET))(a1, a2);
		}

		static ::System::Int32 LastIndexOf_1(::System::Array* a1, ::System::Object* a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::Array*, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_LASTINDEXOF_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 LastIndexOf_2(::System::Array* a1, ::System::Object* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::System::Array*, ::System::Object*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_LASTINDEXOF_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Reverse(::System::Array* a1)
		{
			return ((::System::Void(*)(::System::Array*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_REVERSE_OFFSET))(a1);
		}

		static ::System::Void Reverse_1(::System::Array* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_REVERSE_1_OFFSET))(a1, a2, a3);
		}

		::System::Void SetValue(::System::Object* a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void SetValue_1(::System::Object* a1, ::System::Int64 a2, ::System::Int64 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SETVALUE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetValue_2(::System::Object* a1, ::System::Int64 a2, ::System::Int64 a3, ::System::Int64 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int64, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SETVALUE_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetValue_3(::System::Object* a1, ::Il2CppArray<::System::Int64>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Il2CppArray<::System::Int64>*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SETVALUE_3_OFFSET))(this, a1, a2);
		}

		static ::System::Void Sort(::System::Array* a1)
		{
			return ((::System::Void(*)(::System::Array*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORT_OFFSET))(a1);
		}

		static ::System::Void Sort_1(::System::Array* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORT_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Sort_2(::System::Array* a1, ::System::Collections::IComparer* a2)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORT_2_OFFSET))(a1, a2);
		}

		static ::System::Void Sort_3(::System::Array* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Collections::IComparer* a4)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Int32, ::System::Int32, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORT_3_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Sort_4(::System::Array* a1, ::System::Array* a2)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Array*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORT_4_OFFSET))(a1, a2);
		}

		static ::System::Void Sort_5(::System::Array* a1, ::System::Array* a2, ::System::Collections::IComparer* a3)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Array*, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORT_5_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Sort_6(::System::Array* a1, ::System::Array* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Array*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORT_6_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Sort_7(::System::Array* a1, ::System::Array* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Collections::IComparer* a5)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Array*, ::System::Int32, ::System::Int32, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORT_7_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GETENUMERATOR_OFFSET))(this);
		}

		::System::Int32 InternalArray__ICollection_get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_INTERNALARRAY__ICOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean InternalArray__ICollection_get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_INTERNALARRAY__ICOLLECTION_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Void InternalArray__ICollection_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_INTERNALARRAY__ICOLLECTION_CLEAR_OFFSET))(this);
		}

		::System::Int32 InternalArray__IReadOnlyCollection_get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_INTERNALARRAY__IREADONLYCOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Void InternalArray__RemoveAt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_INTERNALARRAY__REMOVEAT_OFFSET))(this, a1);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GET_LENGTH_OFFSET))(this);
		}

		::System::Int32 get_Rank()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GET_RANK_OFFSET))(this);
		}

		::System::Int32 GetRank()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GETRANK_OFFSET))(this);
		}

		::System::Int32 GetLength(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GETLENGTH_OFFSET))(this, a1);
		}

		::System::Int32 GetLowerBound(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GETLOWERBOUND_OFFSET))(this, a1);
		}

		::System::Object* GetValue_4(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GETVALUE_4_OFFSET))(this, a1);
		}

		::System::Void SetValue_4(::System::Object* a1, ::Il2CppArray<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SETVALUE_4_OFFSET))(this, a1, a2);
		}

		::System::Object* GetValueImpl(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GETVALUEIMPL_OFFSET))(this, a1);
		}

		::System::Void SetValueImpl(::System::Object* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SETVALUEIMPL_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean FastCopy(::System::Array* a1, ::System::Int32 a2, ::System::Array* a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Boolean(*)(::System::Array*, ::System::Int32, ::System::Array*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_FASTCOPY_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Array* CreateInstanceImpl(::System::Type* a1, ::Il2CppArray<::System::Int32>* a2, ::Il2CppArray<::System::Int32>* a3)
		{
			return ((::System::Array*(*)(::System::Type*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_CREATEINSTANCEIMPL_OFFSET))(a1, a2, a3);
		}

		::System::Int32 GetUpperBound(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GETUPPERBOUND_OFFSET))(this, a1);
		}

		::System::Object* GetValue_5(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GETVALUE_5_OFFSET))(this, a1);
		}

		::System::Object* GetValue_6(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GETVALUE_6_OFFSET))(this, a1, a2);
		}

		::System::Object* GetValue_7(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GETVALUE_7_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetValue_5(::System::Object* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SETVALUE_5_OFFSET))(this, a1, a2);
		}

		::System::Void SetValue_6(::System::Object* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SETVALUE_6_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetValue_7(::System::Object* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SETVALUE_7_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Array* UnsafeCreateInstance(::System::Type* a1, ::Il2CppArray<::System::Int32>* a2, ::Il2CppArray<::System::Int32>* a3)
		{
			return ((::System::Array*(*)(::System::Type*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_UNSAFECREATEINSTANCE_OFFSET))(a1, a2, a3);
		}

		static ::System::Array* UnsafeCreateInstance_1(::System::Type* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Array*(*)(::System::Type*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_UNSAFECREATEINSTANCE_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Array* UnsafeCreateInstance_2(::System::Type* a1, ::Il2CppArray<::System::Int32>* a2)
		{
			return ((::System::Array*(*)(::System::Type*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_UNSAFECREATEINSTANCE_2_OFFSET))(a1, a2);
		}

		static ::System::Array* CreateInstance_1(::System::Type* a1, ::System::Int32 a2)
		{
			return ((::System::Array*(*)(::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_CREATEINSTANCE_1_OFFSET))(a1, a2);
		}

		static ::System::Array* CreateInstance_2(::System::Type* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Array*(*)(::System::Type*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_CREATEINSTANCE_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Array* CreateInstance_3(::System::Type* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Array*(*)(::System::Type*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_CREATEINSTANCE_3_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Array* CreateInstance_4(::System::Type* a1, ::Il2CppArray<::System::Int32>* a2)
		{
			return ((::System::Array*(*)(::System::Type*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_CREATEINSTANCE_4_OFFSET))(a1, a2);
		}

		static ::System::Array* CreateInstance_5(::System::Type* a1, ::Il2CppArray<::System::Int32>* a2, ::Il2CppArray<::System::Int32>* a3)
		{
			return ((::System::Array*(*)(::System::Type*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_CREATEINSTANCE_5_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Clear(::System::Array* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_CLEAR_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ClearInternal(::System::Array* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_CLEARINTERNAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Copy_2(::System::Array* a1, ::System::Array* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_COPY_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Copy_3(::System::Array* a1, ::System::Int32 a2, ::System::Array* a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Int32, ::System::Array*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_COPY_3_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Exception* CreateArrayTypeMismatchException()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_CREATEARRAYTYPEMISMATCHEXCEPTION_OFFSET))();
		}

		static ::System::Boolean CanAssignArrayElement(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_CANASSIGNARRAYELEMENT_OFFSET))(a1, a2);
		}

		static ::System::Void ConstrainedCopy(::System::Array* a1, ::System::Int32 a2, ::System::Array* a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Int32, ::System::Array*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_CONSTRAINEDCOPY_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_INITIALIZE_OFFSET))(this);
		}

		static ::System::Void SortImpl(::System::Array* a1, ::System::Array* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Collections::IComparer* a5)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Array*, ::System::Int32, ::System::Int32, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTIMPL_OFFSET))(a1, a2, a3, a4, a5);
		}
	};
}
