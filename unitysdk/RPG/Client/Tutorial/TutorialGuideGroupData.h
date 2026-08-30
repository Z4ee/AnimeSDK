#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_83.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_31.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TutorialGuideShowType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Tutorial { class ITutorialGuideCollection; }
namespace RPG::Client::Tutorial { class TutorialGuideCategoryInfo; }
namespace RPG::Client::Tutorial { class TutorialGuideSpecialGotoInfo; }
namespace RPG::Client::Tutorial { class TutorialSingleGuideInfo; }
namespace RPG::GameCore { class TutorialTriggerParam; }

#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GETCATEGORYINFO_OFFSET UNITYSDK_OFFSET(0x1B106E50)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GETGUIDEINFOBYINDEX_OFFSET UNITYSDK_OFFSET(0x1B106800)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GETSPECIALGOTOINFO_OFFSET UNITYSDK_OFFSET(0x1B106F90)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_CANREVIEW_OFFSET UNITYSDK_OFFSET(0x1B107170)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1B107150)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_FINISHTRIGGERPARAMS_OFFSET UNITYSDK_OFFSET(0x1B1071F0)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B1070D0)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_GROUPTYPEID_OFFSET UNITYSDK_OFFSET(0x1B1070F0)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_GUIDECOUNT_OFFSET UNITYSDK_OFFSET(0x1B107110)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_GUIDETYPE_OFFSET UNITYSDK_OFFSET(0x1B106B10)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_HASVIDEO_OFFSET UNITYSDK_OFFSET(0x1B107250)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_MESSAGETEXT_OFFSET UNITYSDK_OFFSET(0x1B107210)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1B1071B0)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1B107230)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_TRIGGERPARAMS_OFFSET UNITYSDK_OFFSET(0x1B1071D0)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_TUTORIALGUIDEIDLIST_OFFSET UNITYSDK_OFFSET(0x1B107130)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_TUTORIALSHOWTYPE_OFFSET UNITYSDK_OFFSET(0x1B107190)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_USERDATA_OFFSET UNITYSDK_OFFSET(0x1B1072C0)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_VIDEOID_OFFSET UNITYSDK_OFFSET(0x1B1072A0)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SETSTATUSBYINT_OFFSET UNITYSDK_OFFSET(0x1B106E00)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_CANREVIEW_OFFSET UNITYSDK_OFFSET(0x1B107180)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1B107160)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_FINISHTRIGGERPARAMS_OFFSET UNITYSDK_OFFSET(0x1B107200)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B1070E0)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_GROUPTYPEID_OFFSET UNITYSDK_OFFSET(0x1B107100)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_GUIDECOUNT_OFFSET UNITYSDK_OFFSET(0x1B107120)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_MESSAGETEXT_OFFSET UNITYSDK_OFFSET(0x1B107220)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_ORDER_OFFSET UNITYSDK_OFFSET(0x1B1071C0)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x1B107240)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_TRIGGERPARAMS_OFFSET UNITYSDK_OFFSET(0x1B1071E0)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_TUTORIALGUIDEIDLIST_OFFSET UNITYSDK_OFFSET(0x1B107140)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_TUTORIALSHOWTYPE_OFFSET UNITYSDK_OFFSET(0x1B1071A0)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_USERDATA_OFFSET UNITYSDK_OFFSET(0x1B1072D0)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_VIDEOID_OFFSET UNITYSDK_OFFSET(0x1B1072B0)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1067F0)

namespace RPG::Client::Tutorial
{
	inline static constexpr unsigned int TutorialGuideGroupData_TypeDefinitionIndex = 78526;

	class TutorialGuideGroupData : public ::System::Object
	{
	public:
		::System::Object* _UserData_k__BackingField; // 0x10
		::Il2CppArray<::System::UInt32>* _TutorialGuideIDList_k__BackingField; // 0x18
		::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* _FinishTriggerParams_k__BackingField; // 0x20
		::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* _TriggerParams_k__BackingField; // 0x28
		::RPG::Client::Tutorial::ITutorialGuideCollection* _BelongCollection; // 0x30
		::System::UInt32 _VideoID_k__BackingField; // 0x38
		::Enum_3_0A3761FE34514D6C_83 _Status_k__BackingField; // 0x3C
		::System::Int32 _GuideCount_k__BackingField; // 0x40
		::System::UInt32 _GroupID_k__BackingField; // 0x44
		::RPG::Client::TextID _MessageText_k__BackingField; // 0x48
		::RPG::GameCore::TutorialGuideShowType _TutorialShowType_k__BackingField; // 0x58
		::System::Boolean _CanReview_k__BackingField; // 0x5C
		::System::UInt32 _Category_k__BackingField; // 0x60
		::System::UInt32 _Order_k__BackingField; // 0x64
		::System::UInt32 _GroupTypeID_k__BackingField; // 0x68

		::System::Void _ctor(::RPG::Client::Tutorial::ITutorialGuideCollection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Tutorial::ITutorialGuideCollection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Tutorial::TutorialSingleGuideInfo* GetGuideInfoByIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::Tutorial::TutorialSingleGuideInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GETGUIDEINFOBYINDEX_OFFSET))(this, a1);
		}

		::System::Void SetStatusByInt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SETSTATUSBYINT_OFFSET))(this, a1);
		}

		::RPG::Client::Tutorial::TutorialGuideCategoryInfo* GetCategoryInfo()
		{
			return ((::RPG::Client::Tutorial::TutorialGuideCategoryInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GETCATEGORYINFO_OFFSET))(this);
		}

		::RPG::Client::Tutorial::TutorialGuideSpecialGotoInfo* GetSpecialGotoInfo()
		{
			return ((::RPG::Client::Tutorial::TutorialGuideSpecialGotoInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GETSPECIALGOTOINFO_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_GROUPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_GroupTypeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_GROUPTYPEID_OFFSET))(this);
		}

		::System::Void set_GroupTypeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_GROUPTYPEID_OFFSET))(this, a1);
		}

		::System::Int32 get_GuideCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_GUIDECOUNT_OFFSET))(this);
		}

		::System::Void set_GuideCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_GUIDECOUNT_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_TutorialGuideIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_TUTORIALGUIDEIDLIST_OFFSET))(this);
		}

		::System::Void set_TutorialGuideIDList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_TUTORIALGUIDEIDLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_Category()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_CATEGORY_OFFSET))(this);
		}

		::System::Void set_Category(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_CATEGORY_OFFSET))(this, a1);
		}

		::System::Boolean get_CanReview()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_CANREVIEW_OFFSET))(this);
		}

		::System::Void set_CanReview(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_CANREVIEW_OFFSET))(this, a1);
		}

		::RPG::GameCore::TutorialGuideShowType get_TutorialShowType()
		{
			return ((::RPG::GameCore::TutorialGuideShowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_TUTORIALSHOWTYPE_OFFSET))(this);
		}

		::System::Void set_TutorialShowType(::RPG::GameCore::TutorialGuideShowType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TutorialGuideShowType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_TUTORIALSHOWTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Order()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_ORDER_OFFSET))(this);
		}

		::System::Void set_Order(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_ORDER_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* get_TriggerParams()
		{
			return ((::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_TRIGGERPARAMS_OFFSET))(this);
		}

		::System::Void set_TriggerParams(::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_TRIGGERPARAMS_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* get_FinishTriggerParams()
		{
			return ((::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_FINISHTRIGGERPARAMS_OFFSET))(this);
		}

		::System::Void set_FinishTriggerParams(::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_FINISHTRIGGERPARAMS_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_MessageText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_MESSAGETEXT_OFFSET))(this);
		}

		::System::Void set_MessageText(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_MESSAGETEXT_OFFSET))(this, a1);
		}

		::Enum_3_0A3761FE34514D6C_83 get_Status()
		{
			return ((::Enum_3_0A3761FE34514D6C_83(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Enum_3_0A3761FE34514D6C_83 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_83))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_STATUS_OFFSET))(this, a1);
		}

		::System::Boolean get_HasVideo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_HASVIDEO_OFFSET))(this);
		}

		::System::UInt32 get_VideoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_VIDEOID_OFFSET))(this);
		}

		::System::Void set_VideoID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_VIDEOID_OFFSET))(this, a1);
		}

		::Enum_3_ED790DAC948A65A9_31 get_GuideType()
		{
			return ((::Enum_3_ED790DAC948A65A9_31(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_GUIDETYPE_OFFSET))(this);
		}

		::System::Object* get_UserData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_USERDATA_OFFSET))(this);
		}

		::System::Void set_UserData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_USERDATA_OFFSET))(this, a1);
		}
	};
}
