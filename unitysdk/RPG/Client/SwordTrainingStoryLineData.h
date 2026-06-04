#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SwordTrainingUnlockData; }
namespace RPG::GameCore { class SwordTrainingStoryLineRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC9B1CB0)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC9B21C0)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_AVATARIDLIST_OFFSET UNITYSDK_OFFSET(0xC9B26B0)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_ENDINGSTORYIDS_OFFSET UNITYSDK_OFFSET(0xC9B1A90)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_ISTRIGGERED_OFFSET UNITYSDK_OFFSET(0xC9B2810)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xC999990)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xC9B27A0)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xC9B2160)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_STARTTALKIMAGE_OFFSET UNITYSDK_OFFSET(0xC9B2470)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_STARTTALKSENTENCEID_OFFSET UNITYSDK_OFFSET(0xC9B2550)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_STORYHARDDESC_OFFSET UNITYSDK_OFFSET(0xC9B2370)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_STORYLINEDESC_OFFSET UNITYSDK_OFFSET(0xC9B2630)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_STORYLINEIMAGE_OFFSET UNITYSDK_OFFSET(0xC9B25C0)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_TALKSENTENCEID_OFFSET UNITYSDK_OFFSET(0xC9B24E0)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xC9B23F0)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_UNLOCKCONDITIONDESC_OFFSET UNITYSDK_OFFSET(0xC9B2200)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_SETFINISHED_OFFSET UNITYSDK_OFFSET(0xC9B13D0)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_SET_ISTRIGGERED_OFFSET UNITYSDK_OFFSET(0xC9B2820)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC9B2150)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingStoryLineData_TypeDefinitionIndex = 57976;

	class SwordTrainingStoryLineData : public ::System::Object
	{
	public:
		::RPG::Client::SwordTrainingUnlockData* UnlockData; // 0x10
		::System::UInt32 StoryLineID; // 0x18
		::System::Boolean _IsTriggered_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SwordTrainingStoryLineData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::SwordTrainingStoryLineData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_CREATE_OFFSET))(a1);
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

		::System::Void set_IsTriggered(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_SET_ISTRIGGERED_OFFSET))(this, a1);
		}
	};
}
