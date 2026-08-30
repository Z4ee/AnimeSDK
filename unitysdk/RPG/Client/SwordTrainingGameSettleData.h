#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_33.h"
#include "unitysdk/RPG/Client/SwordTrainingSettleReason.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_C9DFE5EE7107C629_23;
namespace RPG::Client { class SwordTrainingGameSettleStatusData; }
namespace RPG::GameCore { class SwordTrainingEndingRow; }
namespace RPG::GameCore { class SwordTrainingPowerRankConfigRow; }
namespace RPG::GameCore { class SwordTrainingStoryRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xE12D650)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_DEQUEUETCONTROLLERNAME_OFFSET UNITYSDK_OFFSET(0xE132B60)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_DONEXT_OFFSET UNITYSDK_OFFSET(0xE132FC0)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_ENQUEUECONTROLLERNAME_OFFSET UNITYSDK_OFFSET(0xE132BE0)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_GET_DIFFICULTYLEVELHINTCONTENT_OFFSET UNITYSDK_OFFSET(0xE132A00)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_GET_ENDINGROW_OFFSET UNITYSDK_OFFSET(0xE132AA0)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_GET_FIRSTPASSENDINGROW_OFFSET UNITYSDK_OFFSET(0xE132B00)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_GET_JOINEDPARTNERIMGPATH_OFFSET UNITYSDK_OFFSET(0xE1329E0)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_GET_POWERICON_OFFSET UNITYSDK_OFFSET(0xE132A80)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_GET_POWERRANKID_OFFSET UNITYSDK_OFFSET(0xE132A60)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_GET_POWERVALUE_OFFSET UNITYSDK_OFFSET(0xE132A40)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_GET_REASON_OFFSET UNITYSDK_OFFSET(0xE132A20)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_GET_UNLOCKEDHINTSTRLIST_OFFSET UNITYSDK_OFFSET(0xE1329C0)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_HASNEXTPAGE_OFFSET UNITYSDK_OFFSET(0xE132E10)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_SETUPQUEUE_OFFSET UNITYSDK_OFFSET(0xE130570)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_SET_DIFFICULTYLEVELHINTCONTENT_OFFSET UNITYSDK_OFFSET(0xE132A10)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_SET_JOINEDPARTNERIMGPATH_OFFSET UNITYSDK_OFFSET(0xE1329F0)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_SET_POWERICON_OFFSET UNITYSDK_OFFSET(0xE132A90)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_SET_POWERRANKID_OFFSET UNITYSDK_OFFSET(0xE132A70)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_SET_POWERVALUE_OFFSET UNITYSDK_OFFSET(0xE132A50)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_SET_REASON_OFFSET UNITYSDK_OFFSET(0xE132A30)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_SET_UNLOCKEDHINTSTRLIST_OFFSET UNITYSDK_OFFSET(0xE1329D0)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_TRYSHOWNEXT_OFFSET UNITYSDK_OFFSET(0xE132C70)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE12FB90)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__GETPOWERRANKROWBYPOWERVALUE_OFFSET UNITYSDK_OFFSET(0xE132590)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__INITALLPOWERRANKROW_OFFSET UNITYSDK_OFFSET(0xE132640)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__ISALLENDINGFINISHED_OFFSET UNITYSDK_OFFSET(0xE1332D0)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__ISANYENDINGFINISHED_OFFSET UNITYSDK_OFFSET(0xE132F20)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__SETPOWER_OFFSET UNITYSDK_OFFSET(0xE1304F0)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__SETSETTLEREASON_OFFSET UNITYSDK_OFFSET(0xE1301C0)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__SETSTATUSDATA_OFFSET UNITYSDK_OFFSET(0xE130260)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__SHOULDSHOWFINISHPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xE132E70)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__TRYADDGENREUNLOCKHINT_OFFSET UNITYSDK_OFFSET(0xE1317A0)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__TRYADDPARTNERBYUNLOCKID_OFFSET UNITYSDK_OFFSET(0xE12FD40)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__TRYADDPARTNERUPPERBOUNDHINT_OFFSET UNITYSDK_OFFSET(0xE1308B0)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__TRYADDSKILLBYUNLOCKID_OFFSET UNITYSDK_OFFSET(0xE12FFC0)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__TRYADDSTORYLINEUNLOCKEDHINT_OFFSET UNITYSDK_OFFSET(0xE130BE0)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__TRYADDUNLOCKEDHINTINFOS_OFFSET UNITYSDK_OFFSET(0xE130480)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingGameSettleData_TypeDefinitionIndex = 62042;

	class SwordTrainingGameSettleData : public ::System::Object
	{
	public:
		::System::String* _DifficultyLevelHintContent_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::SwordTrainingPowerRankConfigRow*>* _AllPowerRankRowList; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* _UnlockedHintStrList_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingGameSettleStatusData*>* StatusDataList; // 0x28
		::System::String* _PowerIcon_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* SkillTypeIDs; // 0x38
		::System::Collections::Generic::Queue_1<::System::String*>* _UIControllerQueue; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* UnlockedPartnerList; // 0x48
		::System::Collections::Generic::List_1<::System::String*>* _JoinedPartnerImgPath_k__BackingField; // 0x50
		::System::UInt32 _FirstPassEndingID; // 0x58
		::System::UInt32 _EndingStoryID; // 0x5C
		::RPG::Client::TextID _PowerRankID_k__BackingField; // 0x60
		::System::UInt32 _PowerValue_k__BackingField; // 0x70
		::RPG::Client::SwordTrainingSettleReason _Reason_k__BackingField; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SwordTrainingGameSettleData* Create(::Class_1_C9DFE5EE7107C629_23* a1)
		{
			return ((::RPG::Client::SwordTrainingGameSettleData*(*)(::Class_1_C9DFE5EE7107C629_23*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_CREATE_OFFSET))(a1);
		}

		::System::Void _TryAddSkillByUnlockID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__TRYADDSKILLBYUNLOCKID_OFFSET))(this, a1);
		}

		::System::Void _TryAddUnlockedHintInfos(::Class_1_C9DFE5EE7107C629_23* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_23*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__TRYADDUNLOCKEDHINTINFOS_OFFSET))(this, a1);
		}

		::System::Void _TryAddPartnerUpperBoundHint(::Class_1_C9DFE5EE7107C629_23* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_23*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__TRYADDPARTNERUPPERBOUNDHINT_OFFSET))(this, a1);
		}

		::System::Void _TryAddStoryLineUnlockedHint(::Class_1_C9DFE5EE7107C629_23* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_23*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__TRYADDSTORYLINEUNLOCKEDHINT_OFFSET))(this, a1);
		}

		::System::Void _TryAddGenreUnlockHint(::Class_1_C9DFE5EE7107C629_23* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_23*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__TRYADDGENREUNLOCKHINT_OFFSET))(this, a1);
		}

		::System::Void _TryAddPartnerByUnlockID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__TRYADDPARTNERBYUNLOCKID_OFFSET))(this, a1);
		}

		::System::Void _SetSettleReason(::Enum_3_96F6662CA3713095_33 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_96F6662CA3713095_33))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__SETSETTLEREASON_OFFSET))(this, a1);
		}

		::System::Void _SetStatusData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__SETSTATUSDATA_OFFSET))(this);
		}

		::System::Void _SetPower(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__SETPOWER_OFFSET))(this, a1);
		}

		::RPG::GameCore::SwordTrainingPowerRankConfigRow* _GetPowerRankRowByPowerValue(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SwordTrainingPowerRankConfigRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__GETPOWERRANKROWBYPOWERVALUE_OFFSET))(this, a1);
		}

		::System::Void _InitAllPowerRankRow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__INITALLPOWERRANKROW_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_UnlockedHintStrList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_GET_UNLOCKEDHINTSTRLIST_OFFSET))(this);
		}

		::System::Void set_UnlockedHintStrList(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_SET_UNLOCKEDHINTSTRLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_JoinedPartnerImgPath()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_GET_JOINEDPARTNERIMGPATH_OFFSET))(this);
		}

		::System::Void set_JoinedPartnerImgPath(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_SET_JOINEDPARTNERIMGPATH_OFFSET))(this, a1);
		}

		::System::String* get_DifficultyLevelHintContent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_GET_DIFFICULTYLEVELHINTCONTENT_OFFSET))(this);
		}

		::System::Void set_DifficultyLevelHintContent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_SET_DIFFICULTYLEVELHINTCONTENT_OFFSET))(this, a1);
		}

		::RPG::Client::SwordTrainingSettleReason get_Reason()
		{
			return ((::RPG::Client::SwordTrainingSettleReason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_GET_REASON_OFFSET))(this);
		}

		::System::Void set_Reason(::RPG::Client::SwordTrainingSettleReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingSettleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_SET_REASON_OFFSET))(this, a1);
		}

		::System::UInt32 get_PowerValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_GET_POWERVALUE_OFFSET))(this);
		}

		::System::Void set_PowerValue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_SET_POWERVALUE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_PowerRankID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_GET_POWERRANKID_OFFSET))(this);
		}

		::System::Void set_PowerRankID(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_SET_POWERRANKID_OFFSET))(this, a1);
		}

		::System::String* get_PowerIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_GET_POWERICON_OFFSET))(this);
		}

		::System::Void set_PowerIcon(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_SET_POWERICON_OFFSET))(this, a1);
		}

		::RPG::GameCore::SwordTrainingStoryRow* get_EndingRow()
		{
			return ((::RPG::GameCore::SwordTrainingStoryRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_GET_ENDINGROW_OFFSET))(this);
		}

		::RPG::GameCore::SwordTrainingEndingRow* get_FirstPassEndingRow()
		{
			return ((::RPG::GameCore::SwordTrainingEndingRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_GET_FIRSTPASSENDINGROW_OFFSET))(this);
		}

		::System::String* DequeuetControllerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_DEQUEUETCONTROLLERNAME_OFFSET))(this);
		}

		::System::Void EnqueueControllerName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_ENQUEUECONTROLLERNAME_OFFSET))(this, a1);
		}

		::System::Boolean TryShowNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_TRYSHOWNEXT_OFFSET))(this);
		}

		::System::Void SetupQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_SETUPQUEUE_OFFSET))(this);
		}

		::System::Boolean HasNextPage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_HASNEXTPAGE_OFFSET))(this);
		}

		::System::Void DoNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_DONEXT_OFFSET))(this);
		}

		::System::Boolean _IsAllEndingFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__ISALLENDINGFINISHED_OFFSET))(this);
		}

		::System::Boolean _IsAnyEndingFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__ISANYENDINGFINISHED_OFFSET))(this);
		}

		::System::Boolean _ShouldShowFinishPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__SHOULDSHOWFINISHPERFORMANCE_OFFSET))(this);
		}
	};
}
