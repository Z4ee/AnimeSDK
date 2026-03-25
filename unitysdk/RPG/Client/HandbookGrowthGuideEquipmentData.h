#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/HandbookGrowthGuideEquipmentData_RelicInfo.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class HandbookGrowthGuideEquipmentDataItem; }
namespace RPG::Client { class RelicRecommendData; }
namespace RPG::Client { class RelicRecommendSuitData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_CREATEFORINNERSET_OFFSET UNITYSDK_OFFSET(0x98FB0C0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_CREATEFOROUTERSET_OFFSET UNITYSDK_OFFSET(0x98FB560)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_FAKERECOMMEND_OFFSET UNITYSDK_OFFSET(0x98FB750)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_GETRECOMMENDPERCENTAGEBYGUIDEID_OFFSET UNITYSDK_OFFSET(0x98FB9F0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_GETRECOMMENDPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x98FBA80)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_GET_DATALIST_OFFSET UNITYSDK_OFFSET(0x98FC810)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_GET_EXISTINGRECOMMEND_OFFSET UNITYSDK_OFFSET(0x98FC830)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_GET_VALIDRELICCOUNT_OFFSET UNITYSDK_OFFSET(0x98FC850)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_SET_DATALIST_OFFSET UNITYSDK_OFFSET(0x98FC820)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_SET_EXISTINGRECOMMEND_OFFSET UNITYSDK_OFFSET(0x98FC840)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_SET_VALIDRELICCOUNT_OFFSET UNITYSDK_OFFSET(0x98FC860)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA__BUILDSETPERCENTMAP_OFFSET UNITYSDK_OFFSET(0x98FC590)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA__CALCULATERELICPERCENT_OFFSET UNITYSDK_OFFSET(0x98FBBE0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x98FB3D0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA__PREPAREDATALIST_OFFSET UNITYSDK_OFFSET(0x98FC080)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookGrowthGuideEquipmentData_TypeDefinitionIndex = 53284;

	class HandbookGrowthGuideEquipmentData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::HandbookGrowthGuideEquipmentDataItem*>* _DataList_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HandbookGrowthGuideEquipmentData_RelicInfo>* _GuideIDToRelicInfoDict; // 0x18
		::System::Boolean _ExistingRecommend_k__BackingField; // 0x20
		::System::UInt32 _ValidRelicCount_k__BackingField; // 0x24
		::System::Single _RecommendLimit; // 0x28

		::System::Void _ctor(::RPG::Client::RelicRecommendData* relicRecommendData, ::System::Boolean isInnerSet, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* relicSetIDToGuideDataMap, ::System::UInt32 defaultSetID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicRecommendData*, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA__CTOR_OFFSET))(this, relicRecommendData, isInnerSet, relicSetIDToGuideDataMap, defaultSetID);
		}

		static ::RPG::Client::HandbookGrowthGuideEquipmentData* CreateForInnerSet(::System::UInt32 avatarID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* relicSetIDToGuideDataMap)
		{
			return ((::RPG::Client::HandbookGrowthGuideEquipmentData*(*)(::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_CREATEFORINNERSET_OFFSET))(avatarID, relicSetIDToGuideDataMap);
		}

		static ::RPG::Client::HandbookGrowthGuideEquipmentData* CreateForOuterSet(::System::UInt32 avatarID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* relicSetIDToGuideDataMap)
		{
			return ((::RPG::Client::HandbookGrowthGuideEquipmentData*(*)(::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_CREATEFOROUTERSET_OFFSET))(avatarID, relicSetIDToGuideDataMap);
		}

		::System::Void FakeRecommend(::System::UInt32 avatarID, ::System::Boolean isInnerSet, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* relicSetIDToGuideDataMap)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_FAKERECOMMEND_OFFSET))(this, avatarID, isInnerSet, relicSetIDToGuideDataMap);
		}

		::System::Single GetRecommendPercentageByGuideID(::System::UInt32 guideID)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_GETRECOMMENDPERCENTAGEBYGUIDEID_OFFSET))(this, guideID);
		}

		::System::Single GetRecommendPercentage(::System::UInt32 setID)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_GETRECOMMENDPERCENTAGE_OFFSET))(this, setID);
		}

		::System::Void _CalculateRelicPercent(::RPG::Client::RelicRecommendData* relicRecommendData, ::System::Boolean isInnerSet, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* relicSetIDToGuideDataMap)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicRecommendData*, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA__CALCULATERELICPERCENT_OFFSET))(this, relicRecommendData, isInnerSet, relicSetIDToGuideDataMap);
		}

		::System::Void _BuildSetPercentMap(::Il2CppArray<::RPG::Client::RelicRecommendSuitData*>* setList, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>*& setPercentMap)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::RelicRecommendSuitData*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA__BUILDSETPERCENTMAP_OFFSET))(this, setList, setPercentMap);
		}

		::System::Void _PrepareDataList(::System::UInt32 defaultSetID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* relicSetIDToGuideDataMap)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA__PREPAREDATALIST_OFFSET))(this, defaultSetID, relicSetIDToGuideDataMap);
		}

		::System::Collections::Generic::List_1<::RPG::Client::HandbookGrowthGuideEquipmentDataItem*>* get_DataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::HandbookGrowthGuideEquipmentDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_GET_DATALIST_OFFSET))(this);
		}

		::System::Void set_DataList(::System::Collections::Generic::List_1<::RPG::Client::HandbookGrowthGuideEquipmentDataItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::HandbookGrowthGuideEquipmentDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_SET_DATALIST_OFFSET))(this, value);
		}

		::System::Boolean get_ExistingRecommend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_GET_EXISTINGRECOMMEND_OFFSET))(this);
		}

		::System::Void set_ExistingRecommend(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_SET_EXISTINGRECOMMEND_OFFSET))(this, value);
		}

		::System::UInt32 get_ValidRelicCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_GET_VALIDRELICCOUNT_OFFSET))(this);
		}

		::System::Void set_ValidRelicCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEEQUIPMENTDATA_SET_VALIDRELICCOUNT_OFFSET))(this, value);
		}
	};
}
