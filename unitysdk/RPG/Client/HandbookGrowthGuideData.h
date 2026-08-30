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

#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1A04DBB0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_FAKERELICRECOMMEND_OFFSET UNITYSDK_OFFSET(0x1A04E340)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GETRECOMMENDPERCENTAGEBYGUIDEID_OFFSET UNITYSDK_OFFSET(0x1A04E6A0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GETRECOMMENDPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x1A04E900)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1A04F1E0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GET_INNERSETGUIDEDATA_OFFSET UNITYSDK_OFFSET(0x1A04F220)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GET_ISRELICEXTRACTUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1A04F260)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GET_MATERIALGUIDEDATA_OFFSET UNITYSDK_OFFSET(0x1A04F200)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GET_OUTERSETGUIDEDATA_OFFSET UNITYSDK_OFFSET(0x1A04F240)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0x1A04DDD0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1A04F1F0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_SET_INNERSETGUIDEDATA_OFFSET UNITYSDK_OFFSET(0x1A04F230)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_SET_ISRELICEXTRACTUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1A04F270)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_SET_MATERIALGUIDEDATA_OFFSET UNITYSDK_OFFSET(0x1A04F210)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_SET_OUTERSETGUIDEDATA_OFFSET UNITYSDK_OFFSET(0x1A04F250)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A04DD00)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA__GETDISPLAYROGUEAREADATA_OFFSET UNITYSDK_OFFSET(0x1A050AA0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA__GETSUITSETIDBYITEMID_OFFSET UNITYSDK_OFFSET(0x1A04F4C0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA__INITRELICSETIDTOGUIDEDATAMAP_OFFSET UNITYSDK_OFFSET(0x1A04EB70)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA__INITROGUERELICSETIDTOGUIDEDATAMAP_OFFSET UNITYSDK_OFFSET(0x1A04F0D0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA__INITROGUETOURNRELICSETIDTOGUIDEDATAMAP_OFFSET UNITYSDK_OFFSET(0x1A04F9E0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA__INITVANILLAROGUERELICSETIDTOGUIDEDATAMAP_OFFSET UNITYSDK_OFFSET(0x1A050320)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookGrowthGuideData_TypeDefinitionIndex = 65677;

	class HandbookGrowthGuideData : public ::System::Object
	{
	public:
		::RPG::Client::HandbookGrowthGuideEquipmentData* _OuterSetGuideData_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _RelicSetIDToGuideDataMap; // 0x18
		::RPG::Client::HandbookGrowthGuideEquipmentData* _InnerSetGuideData_k__BackingField; // 0x20
		::RPG::Client::HandbookGrowthGuideMaterialData* _MaterialGuideData_k__BackingField; // 0x28
		::System::UInt32 _AvatarID_k__BackingField; // 0x30
		::System::Boolean _IsRelicExtractUnlocked_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::HandbookGrowthGuideData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::HandbookGrowthGuideData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_CREATE_OFFSET))(a1);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_REFRESH_OFFSET))(this);
		}

		::System::Void FakeRelicRecommend()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_FAKERELICRECOMMEND_OFFSET))(this);
		}

		::System::Single GetRecommendPercentageByGuideID(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GETRECOMMENDPERCENTAGEBYGUIDEID_OFFSET))(this, a1);
		}

		::System::Single GetRecommendPercentage(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GETRECOMMENDPERCENTAGE_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_SET_AVATARID_OFFSET))(this, a1);
		}

		::RPG::Client::HandbookGrowthGuideMaterialData* get_MaterialGuideData()
		{
			return ((::RPG::Client::HandbookGrowthGuideMaterialData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GET_MATERIALGUIDEDATA_OFFSET))(this);
		}

		::System::Void set_MaterialGuideData(::RPG::Client::HandbookGrowthGuideMaterialData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::HandbookGrowthGuideMaterialData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_SET_MATERIALGUIDEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::HandbookGrowthGuideEquipmentData* get_InnerSetGuideData()
		{
			return ((::RPG::Client::HandbookGrowthGuideEquipmentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GET_INNERSETGUIDEDATA_OFFSET))(this);
		}

		::System::Void set_InnerSetGuideData(::RPG::Client::HandbookGrowthGuideEquipmentData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::HandbookGrowthGuideEquipmentData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_SET_INNERSETGUIDEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::HandbookGrowthGuideEquipmentData* get_OuterSetGuideData()
		{
			return ((::RPG::Client::HandbookGrowthGuideEquipmentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GET_OUTERSETGUIDEDATA_OFFSET))(this);
		}

		::System::Void set_OuterSetGuideData(::RPG::Client::HandbookGrowthGuideEquipmentData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::HandbookGrowthGuideEquipmentData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_SET_OUTERSETGUIDEDATA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRelicExtractUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_GET_ISRELICEXTRACTUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsRelicExtractUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA_SET_ISRELICEXTRACTUNLOCKED_OFFSET))(this, a1);
		}

		::System::Void _InitRelicSetIDToGuideDataMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA__INITRELICSETIDTOGUIDEDATAMAP_OFFSET))(this);
		}

		::System::Void _InitRogueRelicSetIDToGuideDataMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA__INITROGUERELICSETIDTOGUIDEDATAMAP_OFFSET))(this);
		}

		::System::Void _InitRogueTournRelicSetIDToGuideDataMap(::System::Collections::Generic::List_1<::RPG::Client::HandbookGuideData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::HandbookGuideData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA__INITROGUETOURNRELICSETIDTOGUIDEDATAMAP_OFFSET))(this, a1);
		}

		::System::Void _InitVanillaRogueRelicSetIDToGuideDataMap(::System::Collections::Generic::List_1<::RPG::Client::HandbookGuideData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::HandbookGuideData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA__INITVANILLAROGUERELICSETIDTOGUIDEDATAMAP_OFFSET))(this, a1);
		}

		::RPG::Client::RogueAreaData* _GetDisplayRogueAreaData(::RPG::Client::RogueProgressInfo* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::RogueAreaData*(*)(::PVOID, ::RPG::Client::RogueProgressInfo*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA__GETDISPLAYROGUEAREADATA_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _GetSuitSetIDByItemID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA__GETSUITSETIDBYITEMID_OFFSET))(this, a1);
		}
	};
}
