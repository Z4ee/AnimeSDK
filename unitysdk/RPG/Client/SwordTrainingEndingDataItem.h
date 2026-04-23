#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_23.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace RPG::GameCore { class SwordTrainingEndingRow; }
namespace RPG::GameCore { class SwordTrainingStoryRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xB24DA20)
#define RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0xB24DAF0)
#define RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xB24E0F0)
#define RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_GET_QUESTID_OFFSET UNITYSDK_OFFSET(0xB24DDD0)
#define RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_GET_QUESTSTATUS_OFFSET UNITYSDK_OFFSET(0xB24DCA0)
#define RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_GET_REWARDITEMS_OFFSET UNITYSDK_OFFSET(0xB24DE40)
#define RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_GET_STORYID_OFFSET UNITYSDK_OFFSET(0xB24DB10)
#define RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_GET_STORYIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xB24DF10)
#define RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_GET_STORYTITLE_OFFSET UNITYSDK_OFFSET(0xB24DFF0)
#define RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_GET_STORYUNLOCKDESC_OFFSET UNITYSDK_OFFSET(0xB24E070)
#define RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_GET_STORYUNLOCKIMAGE_OFFSET UNITYSDK_OFFSET(0xB24DF80)
#define RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_GET__ENDINGROW_OFFSET UNITYSDK_OFFSET(0xB24DB80)
#define RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_GET__STORYROW_OFFSET UNITYSDK_OFFSET(0xB24DBE0)
#define RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_SET_ID_OFFSET UNITYSDK_OFFSET(0xB24DB00)
#define RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xB24E100)
#define RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_SYNC_OFFSET UNITYSDK_OFFSET(0xB24DAA0)
#define RPG_CLIENT_SWORDTRAININGENDINGDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB24DA90)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingEndingDataItem_TypeDefinitionIndex = 57129;

	class SwordTrainingEndingDataItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _RewardItems; // 0x10
		::System::Boolean _IsFinished_k__BackingField; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGDATAITEM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SwordTrainingEndingDataItem* Create(::RPG::GameCore::SwordTrainingEndingRow* row)
		{
			return ((::RPG::Client::SwordTrainingEndingDataItem*(*)(::RPG::GameCore::SwordTrainingEndingRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_CREATE_OFFSET))(row);
		}

		::System::Void Sync(::System::Boolean isFinished)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_SYNC_OFFSET))(this, isFinished);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_SET_ID_OFFSET))(this, value);
		}

		::System::UInt32 get_StoryID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_GET_STORYID_OFFSET))(this);
		}

		::RPG::GameCore::SwordTrainingEndingRow* get__EndingRow()
		{
			return ((::RPG::GameCore::SwordTrainingEndingRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_GET__ENDINGROW_OFFSET))(this);
		}

		::RPG::GameCore::SwordTrainingStoryRow* get__StoryRow()
		{
			return ((::RPG::GameCore::SwordTrainingStoryRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_GET__STORYROW_OFFSET))(this);
		}

		::Enum_3_4608E37A1B3D374A_23 get_QuestStatus()
		{
			return ((::Enum_3_4608E37A1B3D374A_23(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_GET_QUESTSTATUS_OFFSET))(this);
		}

		::System::UInt32 get_QuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_GET_QUESTID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_RewardItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_GET_REWARDITEMS_OFFSET))(this);
		}

		::System::String* get_StoryImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_GET_STORYIMAGEPATH_OFFSET))(this);
		}

		::System::String* get_StoryUnlockImage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_GET_STORYUNLOCKIMAGE_OFFSET))(this);
		}

		::RPG::Client::TextID get_StoryTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_GET_STORYTITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_StoryUnlockDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_GET_STORYUNLOCKDESC_OFFSET))(this);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_SET_ISFINISHED_OFFSET))(this, value);
		}
	};
}
