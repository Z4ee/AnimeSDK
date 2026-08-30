#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_25.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace RPG::GameCore { class SwordTrainingEndingRow; }
namespace RPG::GameCore { class SwordTrainingStoryRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x1B47E740)
#define RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B47E810)
#define RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1B47EF50)
#define RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_GET_QUESTID_OFFSET UNITYSDK_OFFSET(0x1B47EB20)
#define RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_GET_QUESTSTATUS_OFFSET UNITYSDK_OFFSET(0x1B47E9F0)
#define RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_GET_REWARDITEMS_OFFSET UNITYSDK_OFFSET(0x1B47EBC0)
#define RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_GET_STORYID_OFFSET UNITYSDK_OFFSET(0x1B47E830)
#define RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_GET_STORYIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B47EC90)
#define RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_GET_STORYTITLE_OFFSET UNITYSDK_OFFSET(0x1B47EDD0)
#define RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_GET_STORYUNLOCKDESC_OFFSET UNITYSDK_OFFSET(0x1B47EE90)
#define RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_GET_STORYUNLOCKIMAGE_OFFSET UNITYSDK_OFFSET(0x1B47ED30)
#define RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_GET__ENDINGROW_OFFSET UNITYSDK_OFFSET(0x1B47E8D0)
#define RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_GET__STORYROW_OFFSET UNITYSDK_OFFSET(0x1B47E930)
#define RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_SET_ID_OFFSET UNITYSDK_OFFSET(0x1B47E820)
#define RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1B47EF60)
#define RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_SYNC_OFFSET UNITYSDK_OFFSET(0x1B47E7C0)
#define RPG_CLIENT_SWORDTRAININGENDINGDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B47E7B0)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingEndingDataItem_TypeDefinitionIndex = 62020;

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

		static ::RPG::Client::SwordTrainingEndingDataItem* Create(::RPG::GameCore::SwordTrainingEndingRow* a1)
		{
			return ((::RPG::Client::SwordTrainingEndingDataItem*(*)(::RPG::GameCore::SwordTrainingEndingRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_CREATE_OFFSET))(a1);
		}

		::System::Void Sync(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_SYNC_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_SET_ID_OFFSET))(this, a1);
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

		::Enum_3_4608E37A1B3D374A_25 get_QuestStatus()
		{
			return ((::Enum_3_4608E37A1B3D374A_25(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_GET_QUESTSTATUS_OFFSET))(this);
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

		::System::Void set_IsFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGDATAITEM_SET_ISFINISHED_OFFSET))(this, a1);
		}
	};
}
