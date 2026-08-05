#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_Data.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MONOUITABLESCROLLV2_DATALISTWRAPPER_ADD_1_OFFSET UNITYSDK_OFFSET(0x12B37710)
#define MONOUITABLESCROLLV2_DATALISTWRAPPER_ADD_OFFSET UNITYSDK_OFFSET(0x12B374D0)
#define MONOUITABLESCROLLV2_DATALISTWRAPPER_CLEAR_OFFSET UNITYSDK_OFFSET(0x12B38140)
#define MONOUITABLESCROLLV2_DATALISTWRAPPER_CLONETOOBJECTLIST_OFFSET UNITYSDK_OFFSET(0x12B38500)
#define MONOUITABLESCROLLV2_DATALISTWRAPPER_CLONETOOTHER_OFFSET UNITYSDK_OFFSET(0x12B38390)
#define MONOUITABLESCROLLV2_DATALISTWRAPPER_ENABLECHECKPOOLREFERENCERECYCLE_OFFSET UNITYSDK_OFFSET(0x12B37290)
#define MONOUITABLESCROLLV2_DATALISTWRAPPER_GET_CHECKPOOLREFERENCERECYCLE_OFFSET UNITYSDK_OFFSET(0x12B36FD0)
#define MONOUITABLESCROLLV2_DATALISTWRAPPER_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x12B36FF0)
#define MONOUITABLESCROLLV2_DATALISTWRAPPER_GET_DATAS_OFFSET UNITYSDK_OFFSET(0x12B36FE0)
#define MONOUITABLESCROLLV2_DATALISTWRAPPER_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x12B37010)
#define MONOUITABLESCROLLV2_DATALISTWRAPPER_INSERTRANGE_OFFSET UNITYSDK_OFFSET(0x12B37B70)
#define MONOUITABLESCROLLV2_DATALISTWRAPPER_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x12B379A0)
#define MONOUITABLESCROLLV2_DATALISTWRAPPER_REMOVERANGE_OFFSET UNITYSDK_OFFSET(0x12B37F70)
#define MONOUITABLESCROLLV2_DATALISTWRAPPER_REMOVE_OFFSET UNITYSDK_OFFSET(0x12B37850)
#define MONOUITABLESCROLLV2_DATALISTWRAPPER_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x12B37040)
#define MONOUITABLESCROLLV2_DATALISTWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x12B384A0)

inline static constexpr unsigned int MonoUITableScrollV2_DataListWrapper_TypeDefinitionIndex = 75063;

class MonoUITableScrollV2_DataListWrapper : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MonoUITableScrollV2_Data>* _datas; // 0x10
	::System::Boolean _checkPoolReferenceRecycle; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_DATALISTWRAPPER__CTOR_OFFSET))(this);
	}

	::System::Boolean get_CheckPoolReferenceRecycle()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_DATALISTWRAPPER_GET_CHECKPOOLREFERENCERECYCLE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MonoUITableScrollV2_Data>* get_Datas()
	{
		return ((::System::Collections::Generic::List_1<::MonoUITableScrollV2_Data>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_DATALISTWRAPPER_GET_DATAS_OFFSET))(this);
	}

	::System::Int32 get_Count()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_DATALISTWRAPPER_GET_COUNT_OFFSET))(this);
	}

	::MonoUITableScrollV2_Data get_Item(::System::Int32 index)
	{
		return ((::MonoUITableScrollV2_Data(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_DATALISTWRAPPER_GET_ITEM_OFFSET))(this, index);
	}

	::System::Void set_Item(::System::Int32 index, ::MonoUITableScrollV2_Data value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MonoUITableScrollV2_Data))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_DATALISTWRAPPER_SET_ITEM_OFFSET))(this, index, value);
	}

	::System::Void EnableCheckPoolReferenceRecycle(::System::Boolean isEnable)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_DATALISTWRAPPER_ENABLECHECKPOOLREFERENCERECYCLE_OFFSET))(this, isEnable);
	}

	::System::Void Add(::System::Collections::Generic::List_1<::MonoUITableScrollV2_Data>* datas)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MonoUITableScrollV2_Data>*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_DATALISTWRAPPER_ADD_OFFSET))(this, datas);
	}

	::System::Void Add_1(::MonoUITableScrollV2_Data data)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_Data))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_DATALISTWRAPPER_ADD_1_OFFSET))(this, data);
	}

	::System::Void Remove(::MonoUITableScrollV2_Data data)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_Data))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_DATALISTWRAPPER_REMOVE_OFFSET))(this, data);
	}

	::System::Void RemoveAt(::System::Int32 index)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_DATALISTWRAPPER_REMOVEAT_OFFSET))(this, index);
	}

	::System::Void InsertRange(::System::Int32 index, ::System::Collections::Generic::IEnumerable_1<::MonoUITableScrollV2_Data>* collection)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IEnumerable_1<::MonoUITableScrollV2_Data>*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_DATALISTWRAPPER_INSERTRANGE_OFFSET))(this, index, collection);
	}

	::System::Void RemoveRange(::System::Int32 index, ::System::Int32 count)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_DATALISTWRAPPER_REMOVERANGE_OFFSET))(this, index, count);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_DATALISTWRAPPER_CLEAR_OFFSET))(this);
	}

	::System::Void CloneToOther(::MonoUITableScrollV2_DataListWrapper*& dataListWrapper)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_DataListWrapper*&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_DATALISTWRAPPER_CLONETOOTHER_OFFSET))(this, dataListWrapper);
	}

	::System::Void CloneToObjectList(::System::Collections::Generic::List_1<::System::Object*>* objects)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_DATALISTWRAPPER_CLONETOOBJECTLIST_OFFSET))(this, objects);
	}
};
