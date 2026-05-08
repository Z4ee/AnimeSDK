#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections { class IComparer; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections { class IEqualityComparer; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define SYSTEM_ARRAY_BINARYSEARCH_1_OFFSET UNITYSDK_OFFSET(0x19EBA200)
#define SYSTEM_ARRAY_BINARYSEARCH_2_OFFSET UNITYSDK_OFFSET(0x19EB9450)
#define SYSTEM_ARRAY_BINARYSEARCH_OFFSET UNITYSDK_OFFSET(0x19EB92B0)
#define SYSTEM_ARRAY_CANASSIGNARRAYELEMENT_OFFSET UNITYSDK_OFFSET(0x19EBC840)
#define SYSTEM_ARRAY_CLEARINTERNAL_OFFSET UNITYSDK_OFFSET(0x19EBC700)
#define SYSTEM_ARRAY_CLEAR_OFFSET UNITYSDK_OFFSET(0x19EB6ED0)
#define SYSTEM_ARRAY_CLONE_OFFSET UNITYSDK_OFFSET(0x19EB0420)
#define SYSTEM_ARRAY_COMBINEHASHCODES_OFFSET UNITYSDK_OFFSET(0x19EB8ED0)
#define SYSTEM_ARRAY_COPYTO_OFFSET UNITYSDK_OFFSET(0x19EB7C20)
#define SYSTEM_ARRAY_COPY_1_OFFSET UNITYSDK_OFFSET(0x19EB9A70)
#define SYSTEM_ARRAY_COPY_2_OFFSET UNITYSDK_OFFSET(0x19EB7DE0)
#define SYSTEM_ARRAY_COPY_OFFSET UNITYSDK_OFFSET(0x19EB99E0)
#define SYSTEM_ARRAY_CREATEARRAYTYPEMISMATCHEXCEPTION_OFFSET UNITYSDK_OFFSET(0x19EBC730)
#define SYSTEM_ARRAY_CREATEINSTANCEIMPL_OFFSET UNITYSDK_OFFSET(0x19EBC070)
#define SYSTEM_ARRAY_CREATEINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x19EBC480)
#define SYSTEM_ARRAY_CREATEINSTANCE_2_OFFSET UNITYSDK_OFFSET(0x19EBC100)
#define SYSTEM_ARRAY_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x19EBC690)
#define SYSTEM_ARRAY_FASTCOPY_OFFSET UNITYSDK_OFFSET(0x19EBC060)
#define SYSTEM_ARRAY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19EBBBF0)
#define SYSTEM_ARRAY_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x19EB9C50)
#define SYSTEM_ARRAY_GETLOWERBOUND_OFFSET UNITYSDK_OFFSET(0x19EB7AC0)
#define SYSTEM_ARRAY_GETMEDIAN_OFFSET UNITYSDK_OFFSET(0x19EBA420)
#define SYSTEM_ARRAY_GETRANK_OFFSET UNITYSDK_OFFSET(0x19EBC000)
#define SYSTEM_ARRAY_GETUPPERBOUND_OFFSET UNITYSDK_OFFSET(0x19EBC080)
#define SYSTEM_ARRAY_GETVALUEIMPL_OFFSET UNITYSDK_OFFSET(0x19EBC010)
#define SYSTEM_ARRAY_GETVALUE_1_OFFSET UNITYSDK_OFFSET(0x19EB9D30)
#define SYSTEM_ARRAY_GETVALUE_2_OFFSET UNITYSDK_OFFSET(0x19EB9E80)
#define SYSTEM_ARRAY_GETVALUE_3_OFFSET UNITYSDK_OFFSET(0x19EBA040)
#define SYSTEM_ARRAY_GETVALUE_4_OFFSET UNITYSDK_OFFSET(0x19EBA1B0)
#define SYSTEM_ARRAY_GETVALUE_5_OFFSET UNITYSDK_OFFSET(0x19EB7470)
#define SYSTEM_ARRAY_GETVALUE_6_OFFSET UNITYSDK_OFFSET(0x19EB9DF0)
#define SYSTEM_ARRAY_GETVALUE_7_OFFSET UNITYSDK_OFFSET(0x19EB9F90)
#define SYSTEM_ARRAY_GETVALUE_OFFSET UNITYSDK_OFFSET(0x19EB9CB0)
#define SYSTEM_ARRAY_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x19EBA1C0)
#define SYSTEM_ARRAY_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x19EBA1D0)
#define SYSTEM_ARRAY_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x19EBA1E0)
#define SYSTEM_ARRAY_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x19EB7350)
#define SYSTEM_ARRAY_GET_LONGLENGTH_OFFSET UNITYSDK_OFFSET(0x19EB9B80)
#define SYSTEM_ARRAY_GET_RANK_OFFSET UNITYSDK_OFFSET(0x19EB7DD0)
#define SYSTEM_ARRAY_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x19EBA1F0)
#define SYSTEM_ARRAY_INDEXOF_1_OFFSET UNITYSDK_OFFSET(0x19EBA430)
#define SYSTEM_ARRAY_INDEXOF_OFFSET UNITYSDK_OFFSET(0x19EB7810)
#define SYSTEM_ARRAY_INTERNALARRAY__ICOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x19EBBE60)
#define SYSTEM_ARRAY_INTERNALARRAY__ICOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x19EBBD50)
#define SYSTEM_ARRAY_INTERNALARRAY__ICOLLECTION_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x19EBBE50)
#define SYSTEM_ARRAY_INTERNALARRAY__IREADONLYCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x19EBBEB0)
#define SYSTEM_ARRAY_INTERNALARRAY__REMOVEAT_OFFSET UNITYSDK_OFFSET(0x19EBBFB0)
#define SYSTEM_ARRAY_REVERSE_1_OFFSET UNITYSDK_OFFSET(0x19EBA8B0)
#define SYSTEM_ARRAY_REVERSE_OFFSET UNITYSDK_OFFSET(0x19EBA720)
#define SYSTEM_ARRAY_SETVALUEIMPL_OFFSET UNITYSDK_OFFSET(0x19EBC050)
#define SYSTEM_ARRAY_SETVALUE_1_OFFSET UNITYSDK_OFFSET(0x19EBAD90)
#define SYSTEM_ARRAY_SETVALUE_2_OFFSET UNITYSDK_OFFSET(0x19EBAF00)
#define SYSTEM_ARRAY_SETVALUE_3_OFFSET UNITYSDK_OFFSET(0x19EBB0E0)
#define SYSTEM_ARRAY_SETVALUE_4_OFFSET UNITYSDK_OFFSET(0x19EBB260)
#define SYSTEM_ARRAY_SETVALUE_5_OFFSET UNITYSDK_OFFSET(0x19EB7630)
#define SYSTEM_ARRAY_SETVALUE_6_OFFSET UNITYSDK_OFFSET(0x19EBAE60)
#define SYSTEM_ARRAY_SETVALUE_7_OFFSET UNITYSDK_OFFSET(0x19EBB020)
#define SYSTEM_ARRAY_SETVALUE_OFFSET UNITYSDK_OFFSET(0x19EBAD00)
#define SYSTEM_ARRAY_SORTIMPL_OFFSET UNITYSDK_OFFSET(0x19EBBA70)
#define SYSTEM_ARRAY_SORT_1_OFFSET UNITYSDK_OFFSET(0x19EBB720)
#define SYSTEM_ARRAY_SORT_2_OFFSET UNITYSDK_OFFSET(0x19EBB740)
#define SYSTEM_ARRAY_SORT_3_OFFSET UNITYSDK_OFFSET(0x19EBB8E0)
#define SYSTEM_ARRAY_SORT_4_OFFSET UNITYSDK_OFFSET(0x19EBB400)
#define SYSTEM_ARRAY_SORT_OFFSET UNITYSDK_OFFSET(0x19EBB270)
#define SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ICOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x19EB7250)
#define SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_ADD_OFFSET UNITYSDK_OFFSET(0x19EB77A0)
#define SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x19EB79A0)
#define SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x19EB77F0)
#define SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x19EB7450)
#define SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x19EB7460)
#define SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_INDEXOF_OFFSET UNITYSDK_OFFSET(0x19EB7B20)
#define SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_INSERT_OFFSET UNITYSDK_OFFSET(0x19EB7B30)
#define SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x19EB7BD0)
#define SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x19EB7B80)
#define SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x19EB7620)
#define SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ISTRUCTURALCOMPARABLE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x19EB8580)
#define SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ISTRUCTURALEQUATABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x19EB8A10)
#define SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ISTRUCTURALEQUATABLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19EB8EE0)
#define SYSTEM_ARRAY_UNSAFECREATEINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x19EBC470)
#define SYSTEM_ARRAY_UNSAFECREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x19EBC0F0)
#define SYSTEM_ARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x19EBBD40)

namespace System
{
	inline static constexpr unsigned int Array_TypeDefinitionIndex = 126;

	class Array : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY__CTOR_OFFSET))(this);
		}

		::System::Int32 System_Collections_ICollection_get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ICOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean System_Collections_IList_get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Object* System_Collections_IList_get_Item(::System::Int32 index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void System_Collections_IList_set_Item(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Int32 System_Collections_IList_Add(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_ADD_OFFSET))(this, value);
		}

		::System::Boolean System_Collections_IList_Contains(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_CONTAINS_OFFSET))(this, value);
		}

		::System::Void System_Collections_IList_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_CLEAR_OFFSET))(this);
		}

		::System::Int32 System_Collections_IList_IndexOf(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_INDEXOF_OFFSET))(this, value);
		}

		::System::Void System_Collections_IList_Insert(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_INSERT_OFFSET))(this, index, value);
		}

		::System::Void System_Collections_IList_Remove(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_REMOVE_OFFSET))(this, value);
		}

		::System::Void System_Collections_IList_RemoveAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ILIST_REMOVEAT_OFFSET))(this, index);
		}

		::System::Void CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_COPYTO_OFFSET))(this, array, index);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_CLONE_OFFSET))(this);
		}

		::System::Int32 System_Collections_IStructuralComparable_CompareTo(::System::Object* other, ::System::Collections::IComparer* comparer)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ISTRUCTURALCOMPARABLE_COMPARETO_OFFSET))(this, other, comparer);
		}

		::System::Boolean System_Collections_IStructuralEquatable_Equals(::System::Object* other, ::System::Collections::IEqualityComparer* comparer)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Collections::IEqualityComparer*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ISTRUCTURALEQUATABLE_EQUALS_OFFSET))(this, other, comparer);
		}

		static ::System::Int32 CombineHashCodes(::System::Int32 h1, ::System::Int32 h2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_COMBINEHASHCODES_OFFSET))(h1, h2);
		}

		::System::Int32 System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer* comparer)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::IEqualityComparer*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SYSTEM_COLLECTIONS_ISTRUCTURALEQUATABLE_GETHASHCODE_OFFSET))(this, comparer);
		}

		static ::System::Int32 BinarySearch(::System::Array* array, ::System::Object* value)
		{
			return ((::System::Int32(*)(::System::Array*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_BINARYSEARCH_OFFSET))(array, value);
		}

		static ::System::Void Copy(::System::Array* sourceArray, ::System::Array* destinationArray, ::System::Int64 length)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Array*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_COPY_OFFSET))(sourceArray, destinationArray, length);
		}

		::System::Int64 get_LongLength()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GET_LONGLENGTH_OFFSET))(this);
		}

		::System::Object* GetValue(::System::Int64 index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GETVALUE_OFFSET))(this, index);
		}

		::System::Object* GetValue_1(::System::Int64 index1, ::System::Int64 index2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GETVALUE_1_OFFSET))(this, index1, index2);
		}

		::System::Object* GetValue_2(::System::Int64 index1, ::System::Int64 index2, ::System::Int64 index3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int64, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GETVALUE_2_OFFSET))(this, index1, index2, index3);
		}

		::System::Object* GetValue_3(::Il2CppArray<::System::Int64>* indices)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Int64>*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GETVALUE_3_OFFSET))(this, indices);
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

		static ::System::Int32 BinarySearch_1(::System::Array* array, ::System::Object* value, ::System::Collections::IComparer* comparer)
		{
			return ((::System::Int32(*)(::System::Array*, ::System::Object*, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_BINARYSEARCH_1_OFFSET))(array, value, comparer);
		}

		static ::System::Int32 BinarySearch_2(::System::Array* array, ::System::Int32 index, ::System::Int32 length, ::System::Object* value, ::System::Collections::IComparer* comparer)
		{
			return ((::System::Int32(*)(::System::Array*, ::System::Int32, ::System::Int32, ::System::Object*, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_BINARYSEARCH_2_OFFSET))(array, index, length, value, comparer);
		}

		static ::System::Int32 GetMedian(::System::Int32 low, ::System::Int32 hi)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GETMEDIAN_OFFSET))(low, hi);
		}

		static ::System::Int32 IndexOf(::System::Array* array, ::System::Object* value)
		{
			return ((::System::Int32(*)(::System::Array*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_INDEXOF_OFFSET))(array, value);
		}

		static ::System::Int32 IndexOf_1(::System::Array* array, ::System::Object* value, ::System::Int32 startIndex, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::System::Array*, ::System::Object*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_INDEXOF_1_OFFSET))(array, value, startIndex, count);
		}

		static ::System::Void Reverse(::System::Array* array)
		{
			return ((::System::Void(*)(::System::Array*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_REVERSE_OFFSET))(array);
		}

		static ::System::Void Reverse_1(::System::Array* array, ::System::Int32 index, ::System::Int32 length)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_REVERSE_1_OFFSET))(array, index, length);
		}

		::System::Void SetValue(::System::Object* value, ::System::Int64 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SETVALUE_OFFSET))(this, value, index);
		}

		::System::Void SetValue_1(::System::Object* value, ::System::Int64 index1, ::System::Int64 index2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SETVALUE_1_OFFSET))(this, value, index1, index2);
		}

		::System::Void SetValue_2(::System::Object* value, ::System::Int64 index1, ::System::Int64 index2, ::System::Int64 index3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int64, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SETVALUE_2_OFFSET))(this, value, index1, index2, index3);
		}

		::System::Void SetValue_3(::System::Object* value, ::Il2CppArray<::System::Int64>* indices)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Il2CppArray<::System::Int64>*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SETVALUE_3_OFFSET))(this, value, indices);
		}

		static ::System::Void Sort(::System::Array* array, ::System::Collections::IComparer* comparer)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORT_OFFSET))(array, comparer);
		}

		static ::System::Void Sort_1(::System::Array* array, ::System::Int32 index, ::System::Int32 length, ::System::Collections::IComparer* comparer)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Int32, ::System::Int32, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORT_1_OFFSET))(array, index, length, comparer);
		}

		static ::System::Void Sort_2(::System::Array* keys, ::System::Array* items)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Array*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORT_2_OFFSET))(keys, items);
		}

		static ::System::Void Sort_3(::System::Array* keys, ::System::Array* items, ::System::Collections::IComparer* comparer)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Array*, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORT_3_OFFSET))(keys, items, comparer);
		}

		static ::System::Void Sort_4(::System::Array* keys, ::System::Array* items, ::System::Int32 index, ::System::Int32 length, ::System::Collections::IComparer* comparer)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Array*, ::System::Int32, ::System::Int32, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORT_4_OFFSET))(keys, items, index, length, comparer);
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

		::System::Void InternalArray__RemoveAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_INTERNALARRAY__REMOVEAT_OFFSET))(this, index);
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

		::System::Int32 GetLength(::System::Int32 dimension)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GETLENGTH_OFFSET))(this, dimension);
		}

		::System::Int32 GetLowerBound(::System::Int32 dimension)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GETLOWERBOUND_OFFSET))(this, dimension);
		}

		::System::Object* GetValue_4(::Il2CppArray<::System::Int32>* indices)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GETVALUE_4_OFFSET))(this, indices);
		}

		::System::Void SetValue_4(::System::Object* value, ::Il2CppArray<::System::Int32>* indices)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SETVALUE_4_OFFSET))(this, value, indices);
		}

		::System::Object* GetValueImpl(::System::Int32 pos)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GETVALUEIMPL_OFFSET))(this, pos);
		}

		::System::Void SetValueImpl(::System::Object* value, ::System::Int32 pos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SETVALUEIMPL_OFFSET))(this, value, pos);
		}

		static ::System::Boolean FastCopy(::System::Array* source, ::System::Int32 source_idx, ::System::Array* dest, ::System::Int32 dest_idx, ::System::Int32 length)
		{
			return ((::System::Boolean(*)(::System::Array*, ::System::Int32, ::System::Array*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_FASTCOPY_OFFSET))(source, source_idx, dest, dest_idx, length);
		}

		static ::System::Array* CreateInstanceImpl(::System::Type* elementType, ::Il2CppArray<::System::Int32>* lengths, ::Il2CppArray<::System::Int32>* bounds)
		{
			return ((::System::Array*(*)(::System::Type*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_CREATEINSTANCEIMPL_OFFSET))(elementType, lengths, bounds);
		}

		::System::Int32 GetUpperBound(::System::Int32 dimension)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GETUPPERBOUND_OFFSET))(this, dimension);
		}

		::System::Object* GetValue_5(::System::Int32 index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GETVALUE_5_OFFSET))(this, index);
		}

		::System::Object* GetValue_6(::System::Int32 index1, ::System::Int32 index2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GETVALUE_6_OFFSET))(this, index1, index2);
		}

		::System::Object* GetValue_7(::System::Int32 index1, ::System::Int32 index2, ::System::Int32 index3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_GETVALUE_7_OFFSET))(this, index1, index2, index3);
		}

		::System::Void SetValue_5(::System::Object* value, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SETVALUE_5_OFFSET))(this, value, index);
		}

		::System::Void SetValue_6(::System::Object* value, ::System::Int32 index1, ::System::Int32 index2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SETVALUE_6_OFFSET))(this, value, index1, index2);
		}

		::System::Void SetValue_7(::System::Object* value, ::System::Int32 index1, ::System::Int32 index2, ::System::Int32 index3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SETVALUE_7_OFFSET))(this, value, index1, index2, index3);
		}

		static ::System::Array* UnsafeCreateInstance(::System::Type* elementType, ::Il2CppArray<::System::Int32>* lengths, ::Il2CppArray<::System::Int32>* lowerBounds)
		{
			return ((::System::Array*(*)(::System::Type*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_UNSAFECREATEINSTANCE_OFFSET))(elementType, lengths, lowerBounds);
		}

		static ::System::Array* UnsafeCreateInstance_1(::System::Type* elementType, ::Il2CppArray<::System::Int32>* lengths)
		{
			return ((::System::Array*(*)(::System::Type*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_UNSAFECREATEINSTANCE_1_OFFSET))(elementType, lengths);
		}

		static ::System::Array* CreateInstance(::System::Type* elementType, ::System::Int32 length)
		{
			return ((::System::Array*(*)(::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_CREATEINSTANCE_OFFSET))(elementType, length);
		}

		static ::System::Array* CreateInstance_1(::System::Type* elementType, ::Il2CppArray<::System::Int32>* lengths)
		{
			return ((::System::Array*(*)(::System::Type*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_CREATEINSTANCE_1_OFFSET))(elementType, lengths);
		}

		static ::System::Array* CreateInstance_2(::System::Type* elementType, ::Il2CppArray<::System::Int32>* lengths, ::Il2CppArray<::System::Int32>* lowerBounds)
		{
			return ((::System::Array*(*)(::System::Type*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_CREATEINSTANCE_2_OFFSET))(elementType, lengths, lowerBounds);
		}

		static ::System::Void Clear(::System::Array* array, ::System::Int32 index, ::System::Int32 length)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_CLEAR_OFFSET))(array, index, length);
		}

		static ::System::Void ClearInternal(::System::Array* a, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_CLEARINTERNAL_OFFSET))(a, index, count);
		}

		static ::System::Void Copy_1(::System::Array* sourceArray, ::System::Array* destinationArray, ::System::Int32 length)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_COPY_1_OFFSET))(sourceArray, destinationArray, length);
		}

		static ::System::Void Copy_2(::System::Array* sourceArray, ::System::Int32 sourceIndex, ::System::Array* destinationArray, ::System::Int32 destinationIndex, ::System::Int32 length)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Int32, ::System::Array*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_COPY_2_OFFSET))(sourceArray, sourceIndex, destinationArray, destinationIndex, length);
		}

		static ::System::Exception* CreateArrayTypeMismatchException()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_CREATEARRAYTYPEMISMATCHEXCEPTION_OFFSET))();
		}

		static ::System::Boolean CanAssignArrayElement(::System::Type* source, ::System::Type* target)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_CANASSIGNARRAYELEMENT_OFFSET))(source, target);
		}

		static ::System::Void SortImpl(::System::Array* keys, ::System::Array* items, ::System::Int32 index, ::System::Int32 length, ::System::Collections::IComparer* comparer)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Array*, ::System::Int32, ::System::Int32, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_ARRAY_SORTIMPL_OFFSET))(keys, items, index, length, comparer);
		}
	};
}
