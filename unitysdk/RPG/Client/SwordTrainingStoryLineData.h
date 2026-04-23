#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SwordTrainingUnlockData; }
namespace RPG::GameCore { class SwordTrainingStoryLineRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB264C30)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB265150)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_AVATARIDLIST_OFFSET UNITYSDK_OFFSET(0xB265630)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_ENDINGSTORYIDS_OFFSET UNITYSDK_OFFSET(0xB2649D0)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_ISTRIGGERED_OFFSET UNITYSDK_OFFSET(0xB265790)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xB24CFA0)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xB265720)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xB2650F0)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_STARTTALKIMAGE_OFFSET UNITYSDK_OFFSET(0xB2653F0)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_STARTTALKSENTENCEID_OFFSET UNITYSDK_OFFSET(0xB2654D0)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_STORYHARDDESC_OFFSET UNITYSDK_OFFSET(0xB2652F0)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_STORYLINEDESC_OFFSET UNITYSDK_OFFSET(0xB2655B0)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_STORYLINEIMAGE_OFFSET UNITYSDK_OFFSET(0xB265540)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_TALKSENTENCEID_OFFSET UNITYSDK_OFFSET(0xB265460)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xB265370)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_UNLOCKCONDITIONDESC_OFFSET UNITYSDK_OFFSET(0xB265190)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_SETFINISHED_OFFSET UNITYSDK_OFFSET(0xB264350)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_SET_ISTRIGGERED_OFFSET UNITYSDK_OFFSET(0xB2657A0)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB2650E0)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingStoryLineData_TypeDefinitionIndex = 57186;

	class SwordTrainingStoryLineData : public ::System::Object
	{
	public:
		::RPG::Client::SwordTrainingUnlockData* UnlockData; // 0x10
		::System::Boolean _IsTriggered_k__BackingField; // 0x18
		::System::UInt32 StoryLineID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SwordTrainingStoryLineData* Create(::System::UInt32 storyLineID)
		{
			return ((::RPG::Client::SwordTrainingStoryLineData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_CREATE_OFFSET))(storyLineID);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void SetFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_SETFINISHED_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::RPG::Client::TextID get_UnlockConditionDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_UNLOCKCONDITIONDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_StoryHardDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_STORYHARDDESC_OFFSET))(this);
		}

		::RPG::GameCore::SwordTrainingStoryLineRow* get_Row()
		{
			return ((::RPG::GameCore::SwordTrainingStoryLineRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_TITLE_OFFSET))(this);
		}

		::System::String* get_StartTalkImage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_STARTTALKIMAGE_OFFSET))(this);
		}

		::System::UInt32 get_TalkSentenceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_TALKSENTENCEID_OFFSET))(this);
		}

		::System::UInt32 get_StartTalkSentenceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_STARTTALKSENTENCEID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_EndingStoryIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_ENDINGSTORYIDS_OFFSET))(this);
		}

		::System::String* get_StoryLineImage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_STORYLINEIMAGE_OFFSET))(this);
		}

		::RPG::Client::TextID get_StoryLineDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_STORYLINEDESC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AvatarIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_AVATARIDLIST_OFFSET))(this);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_REWARDID_OFFSET))(this);
		}

		::System::Boolean get_IsTriggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_ISTRIGGERED_OFFSET))(this);
		}

		::System::Void set_IsTriggered(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_SET_ISTRIGGERED_OFFSET))(this, value);
		}
	};
}
