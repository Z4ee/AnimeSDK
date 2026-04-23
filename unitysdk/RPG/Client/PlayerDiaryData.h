#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0DBDDE68AC58CF23;
namespace RPG::Client { class PlayerDiaryItemData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLAYERDIARYDATA_GET_DIARYITEMS_OFFSET UNITYSDK_OFFSET(0xAD5E1C0)
#define RPG_CLIENT_PLAYERDIARYDATA_GET_HASRECORD_OFFSET UNITYSDK_OFFSET(0xAD5E160)
#define RPG_CLIENT_PLAYERDIARYDATA_SET_DIARYITEMS_OFFSET UNITYSDK_OFFSET(0xAD5E1D0)
#define RPG_CLIENT_PLAYERDIARYDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xAD5D6F0)
#define RPG_CLIENT_PLAYERDIARYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAD5E1E0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerDiaryData_TypeDefinitionIndex = 59142;

	class PlayerDiaryData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PlayerDiaryItemData*>* _DiaryItems_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::System::Collections::Generic::IList_1<::Class_1_0DBDDE68AC58CF23*>* infos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_0DBDDE68AC58CF23*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYDATA_SYNC_OFFSET))(this, infos);
		}

		::System::Boolean get_HasRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYDATA_GET_HASRECORD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlayerDiaryItemData*>* get_DiaryItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlayerDiaryItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYDATA_GET_DIARYITEMS_OFFSET))(this);
		}

		::System::Void set_DiaryItems(::System::Collections::Generic::List_1<::RPG::Client::PlayerDiaryItemData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PlayerDiaryItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYDATA_SET_DIARYITEMS_OFFSET))(this, value);
		}
	};
}
