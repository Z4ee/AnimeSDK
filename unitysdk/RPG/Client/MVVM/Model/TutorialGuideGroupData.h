#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_80.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_29.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TutorialGuideShowType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MVVM::Model { class ITutorialGuideCollection; }
namespace RPG::Client::MVVM::Model { class TutorialGuideCategoryInfo; }
namespace RPG::Client::MVVM::Model { class TutorialGuideSpecialGotoInfo; }
namespace RPG::Client::MVVM::Model { class TutorialSingleGuideInfo; }
namespace RPG::GameCore { class TutorialTriggerParam; }

#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GETCATEGORYINFO_OFFSET UNITYSDK_OFFSET(0xA732E40)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GETGUIDEINFOBYINDEX_OFFSET UNITYSDK_OFFSET(0xA732A50)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GETSPECIALGOTOINFO_OFFSET UNITYSDK_OFFSET(0xA732F30)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_CANREVIEW_OFFSET UNITYSDK_OFFSET(0xA7330C0)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0xA7330A0)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_FINISHTRIGGERPARAMS_OFFSET UNITYSDK_OFFSET(0xA733140)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xA733020)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_GROUPTYPEID_OFFSET UNITYSDK_OFFSET(0xA733040)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_GUIDECOUNT_OFFSET UNITYSDK_OFFSET(0xA733060)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_GUIDETYPE_OFFSET UNITYSDK_OFFSET(0xA732D30)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_HASVIDEO_OFFSET UNITYSDK_OFFSET(0xA7331A0)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_MESSAGETEXT_OFFSET UNITYSDK_OFFSET(0xA733160)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_ORDER_OFFSET UNITYSDK_OFFSET(0xA733100)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xA733180)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_TRIGGERPARAMS_OFFSET UNITYSDK_OFFSET(0xA733120)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_TUTORIALGUIDEIDLIST_OFFSET UNITYSDK_OFFSET(0xA733080)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_TUTORIALSHOWTYPE_OFFSET UNITYSDK_OFFSET(0xA7330E0)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_USERDATA_OFFSET UNITYSDK_OFFSET(0xA7331D0)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_VIDEOID_OFFSET UNITYSDK_OFFSET(0xA7331B0)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SETSTATUSBYINT_OFFSET UNITYSDK_OFFSET(0xA732DF0)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_CANREVIEW_OFFSET UNITYSDK_OFFSET(0xA7330D0)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_CATEGORY_OFFSET UNITYSDK_OFFSET(0xA7330B0)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_FINISHTRIGGERPARAMS_OFFSET UNITYSDK_OFFSET(0xA733150)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xA733030)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_GROUPTYPEID_OFFSET UNITYSDK_OFFSET(0xA733050)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_GUIDECOUNT_OFFSET UNITYSDK_OFFSET(0xA733070)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_MESSAGETEXT_OFFSET UNITYSDK_OFFSET(0xA733170)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_ORDER_OFFSET UNITYSDK_OFFSET(0xA733110)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xA733190)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_TRIGGERPARAMS_OFFSET UNITYSDK_OFFSET(0xA733130)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_TUTORIALGUIDEIDLIST_OFFSET UNITYSDK_OFFSET(0xA733090)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_TUTORIALSHOWTYPE_OFFSET UNITYSDK_OFFSET(0xA7330F0)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_USERDATA_OFFSET UNITYSDK_OFFSET(0xA7331E0)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_VIDEOID_OFFSET UNITYSDK_OFFSET(0xA7331C0)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA732A40)

namespace RPG::Client::MVVM::Model
{
	inline static constexpr unsigned int TutorialGuideGroupData_TypeDefinitionIndex = 68534;

	class TutorialGuideGroupData : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* _FinishTriggerParams_k__BackingField; // 0x10
		::RPG::Client::MVVM::Model::ITutorialGuideCollection* _BelongCollection; // 0x18
		::Il2CppArray<::System::UInt32>* _TutorialGuideIDList_k__BackingField; // 0x20
		::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* _TriggerParams_k__BackingField; // 0x28
		::System::Object* _UserData_k__BackingField; // 0x30
		::RPG::GameCore::TutorialGuideShowType _TutorialShowType_k__BackingField; // 0x38
		::System::UInt32 _GroupID_k__BackingField; // 0x3C
		::RPG::Client::TextID _MessageText_k__BackingField; // 0x40
		::System::UInt32 _Order_k__BackingField; // 0x50
		::System::Boolean _CanReview_k__BackingField; // 0x54
		::Enum_3_0A3761FE34514D6C_80 _Status_k__BackingField; // 0x58
		::System::UInt32 _Category_k__BackingField; // 0x5C
		::System::Int32 _GuideCount_k__BackingField; // 0x60
		::System::UInt32 _GroupTypeID_k__BackingField; // 0x64
		::System::UInt32 _VideoID_k__BackingField; // 0x68

		::System::Void _ctor(::RPG::Client::MVVM::Model::ITutorialGuideCollection* belongCollection)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Model::ITutorialGuideCollection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA__CTOR_OFFSET))(this, belongCollection);
		}

		::RPG::Client::MVVM::Model::TutorialSingleGuideInfo* GetGuideInfoByIndex(::System::Int32 index)
		{
			return ((::RPG::Client::MVVM::Model::TutorialSingleGuideInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GETGUIDEINFOBYINDEX_OFFSET))(this, index);
		}

		::System::Void SetStatusByInt(::System::Int32 status)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SETSTATUSBYINT_OFFSET))(this, status);
		}

		::RPG::Client::MVVM::Model::TutorialGuideCategoryInfo* GetCategoryInfo()
		{
			return ((::RPG::Client::MVVM::Model::TutorialGuideCategoryInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GETCATEGORYINFO_OFFSET))(this);
		}

		::RPG::Client::MVVM::Model::TutorialGuideSpecialGotoInfo* GetSpecialGotoInfo()
		{
			return ((::RPG::Client::MVVM::Model::TutorialGuideSpecialGotoInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GETSPECIALGOTOINFO_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_GROUPID_OFFSET))(this, value);
		}

		::System::UInt32 get_GroupTypeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_GROUPTYPEID_OFFSET))(this);
		}

		::System::Void set_GroupTypeID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_GROUPTYPEID_OFFSET))(this, value);
		}

		::System::Int32 get_GuideCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_GUIDECOUNT_OFFSET))(this);
		}

		::System::Void set_GuideCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_GUIDECOUNT_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_TutorialGuideIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_TUTORIALGUIDEIDLIST_OFFSET))(this);
		}

		::System::Void set_TutorialGuideIDList(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_TUTORIALGUIDEIDLIST_OFFSET))(this, value);
		}

		::System::UInt32 get_Category()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_CATEGORY_OFFSET))(this);
		}

		::System::Void set_Category(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_CATEGORY_OFFSET))(this, value);
		}

		::System::Boolean get_CanReview()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_CANREVIEW_OFFSET))(this);
		}

		::System::Void set_CanReview(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_CANREVIEW_OFFSET))(this, value);
		}

		::RPG::GameCore::TutorialGuideShowType get_TutorialShowType()
		{
			return ((::RPG::GameCore::TutorialGuideShowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_TUTORIALSHOWTYPE_OFFSET))(this);
		}

		::System::Void set_TutorialShowType(::RPG::GameCore::TutorialGuideShowType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TutorialGuideShowType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_TUTORIALSHOWTYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_Order()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_ORDER_OFFSET))(this);
		}

		::System::Void set_Order(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_ORDER_OFFSET))(this, value);
		}

		::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* get_TriggerParams()
		{
			return ((::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_TRIGGERPARAMS_OFFSET))(this);
		}

		::System::Void set_TriggerParams(::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_TRIGGERPARAMS_OFFSET))(this, value);
		}

		::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* get_FinishTriggerParams()
		{
			return ((::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_FINISHTRIGGERPARAMS_OFFSET))(this);
		}

		::System::Void set_FinishTriggerParams(::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_FINISHTRIGGERPARAMS_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_MessageText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_MESSAGETEXT_OFFSET))(this);
		}

		::System::Void set_MessageText(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_MESSAGETEXT_OFFSET))(this, value);
		}

		::Enum_3_0A3761FE34514D6C_80 get_Status()
		{
			return ((::Enum_3_0A3761FE34514D6C_80(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Enum_3_0A3761FE34514D6C_80 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_80))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_STATUS_OFFSET))(this, value);
		}

		::System::Boolean get_HasVideo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_HASVIDEO_OFFSET))(this);
		}

		::System::UInt32 get_VideoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_VIDEOID_OFFSET))(this);
		}

		::System::Void set_VideoID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_VIDEOID_OFFSET))(this, value);
		}

		::Enum_3_ED790DAC948A65A9_29 get_GuideType()
		{
			return ((::Enum_3_ED790DAC948A65A9_29(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_GUIDETYPE_OFFSET))(this);
		}

		::System::Object* get_UserData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_USERDATA_OFFSET))(this);
		}

		::System::Void set_UserData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_USERDATA_OFFSET))(this, value);
		}
	};
}
