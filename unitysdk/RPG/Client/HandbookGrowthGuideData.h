#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class HandbookGrowthGuideEquipmentData; }
namespace RPG::Client { class HandbookGrowthGuideMaterialData; }
namespace RPG::Client { class HandbookGuideData; }
namespace RPG::Client { class RogueAreaData; }
namespace RPG::Client { class RogueProgressInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA5E3AE0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_FAKERELICRECOMMEND_OFFSET UNITYSDK_OFFSET(0xA5E3CF0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GETRECOMMENDPERCENTAGEBYGUIDEID_OFFSET UNITYSDK_OFFSET(0xA5E3D70)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GETRECOMMENDPERCENTAGE_OFFSET UNITYSDK_OFFSET(0xA5E3EE0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xA5E3F90)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GET_INNERSETGUIDEDATA_OFFSET UNITYSDK_OFFSET(0xA5E3FD0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GET_ISRELICEXTRACTUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA5E4010)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GET_MATERIALGUIDEDATA_OFFSET UNITYSDK_OFFSET(0xA5E3FB0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GET_OUTERSETGUIDEDATA_OFFSET UNITYSDK_OFFSET(0xA5E3FF0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0xA5E3C80)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0xA5E3FA0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_SET_INNERSETGUIDEDATA_OFFSET UNITYSDK_OFFSET(0xA5E3FE0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_SET_ISRELICEXTRACTUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA5E4020)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_SET_MATERIALGUIDEDATA_OFFSET UNITYSDK_OFFSET(0xA5E3FC0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_SET_OUTERSETGUIDEDATA_OFFSET UNITYSDK_OFFSET(0xA5E4000)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA5E3BF0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA__GETDISPLAYROGUEAREADATA_OFFSET UNITYSDK_OFFSET(0xA5E6080)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA__GETSUITSETIDBYITEMID_OFFSET UNITYSDK_OFFSET(0xA5E4890)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA__INITRELICSETIDTOGUIDEDATAMAP_OFFSET UNITYSDK_OFFSET(0xA5E4030)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA__INITROGUERELICSETIDTOGUIDEDATAMAP_OFFSET UNITYSDK_OFFSET(0xA5E4960)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA__INITROGUETOURNRELICSETIDTOGUIDEDATAMAP_OFFSET UNITYSDK_OFFSET(0xA5E4EB0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA__INITVANILLAROGUERELICSETIDTOGUIDEDATAMAP_OFFSET UNITYSDK_OFFSET(0xA5E5880)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookGrowthGuideData_TypeDefinitionIndex = 60413;

	class HandbookGrowthGuideData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _RelicSetIDToGuideDataMap; // 0x10
		::RPG::Client::HandbookGrowthGuideMaterialData* _MaterialGuideData_k__BackingField; // 0x18
		::RPG::Client::HandbookGrowthGuideEquipmentData* _OuterSetGuideData_k__BackingField; // 0x20
		::RPG::Client::HandbookGrowthGuideEquipmentData* _InnerSetGuideData_k__BackingField; // 0x28
		::System::UInt32 _AvatarID_k__BackingField; // 0x30
		::System::Boolean _IsRelicExtractUnlocked_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::HandbookGrowthGuideData* Create(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::HandbookGrowthGuideData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_CREATE_OFFSET))(avatarID);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_REFRESH_OFFSET))(this);
		}

		::System::Void FakeRelicRecommend()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_FAKERELICRECOMMEND_OFFSET))(this);
		}

		::System::Single GetRecommendPercentageByGuideID(::System::UInt32 guideID)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GETRECOMMENDPERCENTAGEBYGUIDEID_OFFSET))(this, guideID);
		}

		::System::Single GetRecommendPercentage(::System::UInt32 setID)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GETRECOMMENDPERCENTAGE_OFFSET))(this, setID);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_SET_AVATARID_OFFSET))(this, value);
		}

		::RPG::Client::HandbookGrowthGuideMaterialData* get_MaterialGuideData()
		{
			return ((::RPG::Client::HandbookGrowthGuideMaterialData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GET_MATERIALGUIDEDATA_OFFSET))(this);
		}

		::System::Void set_MaterialGuideData(::RPG::Client::HandbookGrowthGuideMaterialData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::HandbookGrowthGuideMaterialData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_SET_MATERIALGUIDEDATA_OFFSET))(this, value);
		}

		::RPG::Client::HandbookGrowthGuideEquipmentData* get_InnerSetGuideData()
		{
			return ((::RPG::Client::HandbookGrowthGuideEquipmentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GET_INNERSETGUIDEDATA_OFFSET))(this);
		}

		::System::Void set_InnerSetGuideData(::RPG::Client::HandbookGrowthGuideEquipmentData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::HandbookGrowthGuideEquipmentData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_SET_INNERSETGUIDEDATA_OFFSET))(this, value);
		}

		::RPG::Client::HandbookGrowthGuideEquipmentData* get_OuterSetGuideData()
		{
			return ((::RPG::Client::HandbookGrowthGuideEquipmentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GET_OUTERSETGUIDEDATA_OFFSET))(this);
		}

		::System::Void set_OuterSetGuideData(::RPG::Client::HandbookGrowthGuideEquipmentData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::HandbookGrowthGuideEquipmentData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_SET_OUTERSETGUIDEDATA_OFFSET))(this, value);
		}

		::System::Boolean get_IsRelicExtractUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GET_ISRELICEXTRACTUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsRelicExtractUnlocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_SET_ISRELICEXTRACTUNLOCKED_OFFSET))(this, value);
		}

		::System::Void _InitRelicSetIDToGuideDataMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA__INITRELICSETIDTOGUIDEDATAMAP_OFFSET))(this);
		}

		::System::Void _InitRogueRelicSetIDToGuideDataMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA__INITROGUERELICSETIDTOGUIDEDATAMAP_OFFSET))(this);
		}

		::System::Void _InitRogueTournRelicSetIDToGuideDataMap(::System::Collections::Generic::List_1<::RPG::Client::HandbookGuideData*>* guideDataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::HandbookGuideData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA__INITROGUETOURNRELICSETIDTOGUIDEDATAMAP_OFFSET))(this, guideDataList);
		}

		::System::Void _InitVanillaRogueRelicSetIDToGuideDataMap(::System::Collections::Generic::List_1<::RPG::Client::HandbookGuideData*>* guideDataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::HandbookGuideData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA__INITVANILLAROGUERELICSETIDTOGUIDEDATAMAP_OFFSET))(this, guideDataList);
		}

		::RPG::Client::RogueAreaData* _GetDisplayRogueAreaData(::RPG::Client::RogueProgressInfo* rogueProgressInfo, ::System::UInt32 areaProgressKey)
		{
			return ((::RPG::Client::RogueAreaData*(*)(::PVOID, ::RPG::Client::RogueProgressInfo*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA__GETDISPLAYROGUEAREADATA_OFFSET))(this, rogueProgressInfo, areaProgressKey);
		}

		::System::UInt32 _GetSuitSetIDByItemID(::System::UInt32 itemID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA__GETSUITSETIDBYITEMID_OFFSET))(this, itemID);
		}
	};
}
