#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_651F579F3468E9F7;
namespace RPG::Client { class PlayerDiaryItemData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLAYERDIARYDATA_GET_DIARYITEMS_OFFSET UNITYSDK_OFFSET(0x1AE06920)
#define RPG_CLIENT_PLAYERDIARYDATA_GET_HASRECORD_OFFSET UNITYSDK_OFFSET(0x1AE068C0)
#define RPG_CLIENT_PLAYERDIARYDATA_SET_DIARYITEMS_OFFSET UNITYSDK_OFFSET(0x1AE06930)
#define RPG_CLIENT_PLAYERDIARYDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x1AE05C00)
#define RPG_CLIENT_PLAYERDIARYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE06940)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerDiaryData_TypeDefinitionIndex = 64342;

	class PlayerDiaryData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PlayerDiaryItemData*>* _DiaryItems_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::System::Collections::Generic::IList_1<::Class_1_651F579F3468E9F7*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_651F579F3468E9F7*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Boolean get_HasRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYDATA_GET_HASRECORD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlayerDiaryItemData*>* get_DiaryItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlayerDiaryItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYDATA_GET_DIARYITEMS_OFFSET))(this);
		}

		::System::Void set_DiaryItems(::System::Collections::Generic::List_1<::RPG::Client::PlayerDiaryItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PlayerDiaryItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYDATA_SET_DIARYITEMS_OFFSET))(this, a1);
		}
	};
}
