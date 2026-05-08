#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkRoom;
class AkRoom_PriorityList_CompareByPriority;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKROOM_PRIORITYLIST_ADD_OFFSET UNITYSDK_OFFSET(0x1C374070)
#define AKROOM_PRIORITYLIST_BINARYSEARCH_OFFSET UNITYSDK_OFFSET(0x1C3740E0)
#define AKROOM_PRIORITYLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C374030)
#define AKROOM_PRIORITYLIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1C3742D0)
#define AKROOM_PRIORITYLIST_GETHIGHESTPRIORITYACTIVEANDENABLEDROOMID_OFFSET UNITYSDK_OFFSET(0x1C373E20)
#define AKROOM_PRIORITYLIST_GETHIGHESTPRIORITYACTIVEANDENABLEDROOM_OFFSET UNITYSDK_OFFSET(0x1C373F60)
#define AKROOM_PRIORITYLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1C374010)
#define AKROOM_PRIORITYLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1C374420)
#define AKROOM_PRIORITYLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x1C374270)
#define AKROOM_PRIORITYLIST__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C374500)
#define AKROOM_PRIORITYLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1C374480)

inline static constexpr unsigned int AkRoom_PriorityList_TypeDefinitionIndex = 31615;

class AkRoom_PriorityList : public ::System::Object
{
public:
	static ::AkRoom_PriorityList_CompareByPriority** StaticGet_s_compareByPriority()
	{
		return (::AkRoom_PriorityList_CompareByPriority**)Il2CppClass::FromTypeDefinitionIndex(AkRoom_PriorityList_TypeDefinitionIndex)->GetStaticField(0x258C0);
	}
	::System::Collections::Generic::List_1<::AkRoom*>* rooms; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOM_PRIORITYLIST__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKROOM_PRIORITYLIST__CCTOR_OFFSET))();
	}

	::System::UInt64 GetHighestPriorityActiveAndEnabledRoomID()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOM_PRIORITYLIST_GETHIGHESTPRIORITYACTIVEANDENABLEDROOMID_OFFSET))(this);
	}

	::AkRoom* GetHighestPriorityActiveAndEnabledRoom()
	{
		return ((::AkRoom*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOM_PRIORITYLIST_GETHIGHESTPRIORITYACTIVEANDENABLEDROOM_OFFSET))(this);
	}

	::System::Int32 get_Count()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOM_PRIORITYLIST_GET_COUNT_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOM_PRIORITYLIST_CLEAR_OFFSET))(this);
	}

	::System::Void Add(::AkRoom* room)
	{
		return ((::System::Void(*)(::PVOID, ::AkRoom*))((::PBYTE)hIl2Cpp + AKROOM_PRIORITYLIST_ADD_OFFSET))(this, room);
	}

	::System::Void Remove(::AkRoom* room)
	{
		return ((::System::Void(*)(::PVOID, ::AkRoom*))((::PBYTE)hIl2Cpp + AKROOM_PRIORITYLIST_REMOVE_OFFSET))(this, room);
	}

	::System::Boolean Contains(::AkRoom* room)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkRoom*))((::PBYTE)hIl2Cpp + AKROOM_PRIORITYLIST_CONTAINS_OFFSET))(this, room);
	}

	::System::Int32 BinarySearch(::AkRoom* room)
	{
		return ((::System::Int32(*)(::PVOID, ::AkRoom*))((::PBYTE)hIl2Cpp + AKROOM_PRIORITYLIST_BINARYSEARCH_OFFSET))(this, room);
	}

	::AkRoom* get_Item(::System::Int32 index)
	{
		return ((::AkRoom*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKROOM_PRIORITYLIST_GET_ITEM_OFFSET))(this, index);
	}
};
