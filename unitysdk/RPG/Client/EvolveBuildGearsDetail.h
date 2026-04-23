#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveGearType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EvolveBuildGearDetail; }
namespace RPG::Client { class EvolveBuildGearLevelData; }
namespace RPG::Client { class EvolveBuildGearResonanceEffectInfo; }
namespace RPG::Client { class EvolveBuildModule; }
namespace RPG::Client { class SortedEvolveBuildGearEquipInfoLists; }
namespace RPG::GameCore { class EvolveBuildGearEquipInfo; }
namespace RPG::GameCore { class EvolveBuildGearManager; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL_CREATE_OFFSET UNITYSDK_OFFSET(0xA2B97A0)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL_GET_ACCESSORYDETAILS_OFFSET UNITYSDK_OFFSET(0xA2BB360)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL_GET_GEARDETAILS_OFFSET UNITYSDK_OFFSET(0xA2BB380)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL_GET_WEAPONDETAILS_OFFSET UNITYSDK_OFFSET(0xA2BB340)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL_GET__MODULE_OFFSET UNITYSDK_OFFSET(0xA2BB2E0)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL_SETFORBIDMIX_OFFSET UNITYSDK_OFFSET(0xA2B9B00)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL_SET_ACCESSORYDETAILS_OFFSET UNITYSDK_OFFSET(0xA2BB370)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL_SET_GEARDETAILS_OFFSET UNITYSDK_OFFSET(0xA2BB390)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL_SET_WEAPONDETAILS_OFFSET UNITYSDK_OFFSET(0xA2BB350)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__ADDTOGEARDETAILS_OFFSET UNITYSDK_OFFSET(0xA2B9EB0)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__COLLECTGEARDETAILSFROMEQUIPINFO_OFFSET UNITYSDK_OFFSET(0xA2BA950)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__COLLECTGEARDETAILSTOCAPACITY_OFFSET UNITYSDK_OFFSET(0xA2BAB70)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__COLLECTGEARDETAILS_OFFSET UNITYSDK_OFFSET(0xA2B9DF0)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__COLLECTGEARLEVEL_OFFSET UNITYSDK_OFFSET(0xA2BA1F0)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__COLLECTGEARSLEVEL_OFFSET UNITYSDK_OFFSET(0xA2B9D80)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__CREATEGEARDETAIL_OFFSET UNITYSDK_OFFSET(0xA2BAD50)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__CREATELEVELDATA_OFFSET UNITYSDK_OFFSET(0xA2BAF00)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__CTOR_OFFSET UNITYSDK_OFFSET(0xA2B9850)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__GETGEARRESONANCEEFFECTINFO_OFFSET UNITYSDK_OFFSET(0xA2BA370)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__HASGEARHORIZONTALRESONANCEEFFECTINFO_OFFSET UNITYSDK_OFFSET(0xA2BA690)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__HASGEARORPREADD_OFFSET UNITYSDK_OFFSET(0xA2BA880)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__HASGEARVERTICALRESONANCEEFFECTINFO_OFFSET UNITYSDK_OFFSET(0xA2BA4E0)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__REFRESHALL_OFFSET UNITYSDK_OFFSET(0xA2B99E0)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__REFRESHGEARRESONANCEINFO_OFFSET UNITYSDK_OFFSET(0xA2BA090)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__TRYGETGEARLEVEL_OFFSET UNITYSDK_OFFSET(0xA2BA7F0)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildGearsDetail_TypeDefinitionIndex = 58771;

	class EvolveBuildGearsDetail : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>* _WeaponDetails_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildGearLevelData*>* _GearsData; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildGearDetail*>* _GearDetails_k__BackingField; // 0x20
		::RPG::GameCore::EvolveBuildGearManager* _Manager; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>* _AccessoryDetails_k__BackingField; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _GearLevels; // 0x38
		::System::Boolean _ShowBlank; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::EvolveBuildGearsDetail* Create(::RPG::GameCore::EvolveBuildGearManager* manager, ::System::Boolean showBlank)
		{
			return ((::RPG::Client::EvolveBuildGearsDetail*(*)(::RPG::GameCore::EvolveBuildGearManager*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL_CREATE_OFFSET))(manager, showBlank);
		}

		::System::Void SetForbidMix(::System::Boolean forbidMix)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL_SETFORBIDMIX_OFFSET))(this, forbidMix);
		}

		::System::Void _RefreshAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__REFRESHALL_OFFSET))(this);
		}

		::System::Void _AddToGearDetails(::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>* details)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__ADDTOGEARDETAILS_OFFSET))(this, details);
		}

		::System::Void _CollectGearsLevel(::RPG::Client::SortedEvolveBuildGearEquipInfoLists* gearSortLists)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SortedEvolveBuildGearEquipInfoLists*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__COLLECTGEARSLEVEL_OFFSET))(this, gearSortLists);
		}

		::System::Void _CollectGearLevel(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* infoList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__COLLECTGEARLEVEL_OFFSET))(this, infoList);
		}

		::System::Void _RefreshGearResonanceInfo(::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>* details)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__REFRESHGEARRESONANCEINFO_OFFSET))(this, details);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearResonanceEffectInfo*>* _GetGearResonanceEffectInfo(::RPG::Client::EvolveBuildGearDetail* detail, ::RPG::Client::EvolveBuildGearDetail* nextDetail)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearResonanceEffectInfo*>*(*)(::PVOID, ::RPG::Client::EvolveBuildGearDetail*, ::RPG::Client::EvolveBuildGearDetail*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__GETGEARRESONANCEEFFECTINFO_OFFSET))(this, detail, nextDetail);
		}

		::System::Boolean _HasGearVerticalResonanceEffectInfo(::RPG::Client::EvolveBuildGearDetail* detail, ::RPG::Client::EvolveBuildGearDetail* nextDetail, ::RPG::Client::EvolveBuildGearResonanceEffectInfo*& resonanceEffectInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EvolveBuildGearDetail*, ::RPG::Client::EvolveBuildGearDetail*, ::RPG::Client::EvolveBuildGearResonanceEffectInfo*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__HASGEARVERTICALRESONANCEEFFECTINFO_OFFSET))(this, detail, nextDetail, resonanceEffectInfo);
		}

		::System::Boolean _HasGearHorizontalResonanceEffectInfo(::RPG::Client::EvolveBuildGearDetail* detail, ::RPG::Client::EvolveBuildGearResonanceEffectInfo*& resonanceEffectInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EvolveBuildGearDetail*, ::RPG::Client::EvolveBuildGearResonanceEffectInfo*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__HASGEARHORIZONTALRESONANCEEFFECTINFO_OFFSET))(this, detail, resonanceEffectInfo);
		}

		::System::UInt32 _TryGetGearLevel(::System::UInt32 gearID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__TRYGETGEARLEVEL_OFFSET))(this, gearID);
		}

		::System::Boolean _HasGearOrPreAdd(::System::UInt32 gearID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__HASGEARORPREADD_OFFSET))(this, gearID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>* _CollectGearDetails(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* gearInfos, ::RPG::GameCore::EvolveGearType gearType)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__COLLECTGEARDETAILS_OFFSET))(this, gearInfos, gearType);
		}

		::System::Void _CollectGearDetailsFromEquipInfo(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* gearInfos, ::RPG::GameCore::EvolveGearType gearType, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>* gearDetails)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*, ::RPG::GameCore::EvolveGearType, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__COLLECTGEARDETAILSFROMEQUIPINFO_OFFSET))(this, gearInfos, gearType, gearDetails);
		}

		::System::Void _CollectGearDetailsToCapacity(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* gearInfos, ::RPG::GameCore::EvolveGearType gearType, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>* gearDetails)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*, ::RPG::GameCore::EvolveGearType, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__COLLECTGEARDETAILSTOCAPACITY_OFFSET))(this, gearInfos, gearType, gearDetails);
		}

		::RPG::Client::EvolveBuildGearDetail* _CreateGearDetail(::System::UInt32 gearID)
		{
			return ((::RPG::Client::EvolveBuildGearDetail*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__CREATEGEARDETAIL_OFFSET))(this, gearID);
		}

		::RPG::Client::EvolveBuildGearLevelData* _CreateLevelData(::System::UInt32 gearID, ::System::UInt32 forgeID)
		{
			return ((::RPG::Client::EvolveBuildGearLevelData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__CREATELEVELDATA_OFFSET))(this, gearID, forgeID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>* get_WeaponDetails()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL_GET_WEAPONDETAILS_OFFSET))(this);
		}

		::System::Void set_WeaponDetails(::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL_SET_WEAPONDETAILS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>* get_AccessoryDetails()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL_GET_ACCESSORYDETAILS_OFFSET))(this);
		}

		::System::Void set_AccessoryDetails(::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL_SET_ACCESSORYDETAILS_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildGearDetail*>* get_GearDetails()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildGearDetail*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL_GET_GEARDETAILS_OFFSET))(this);
		}

		::System::Void set_GearDetails(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildGearDetail*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildGearDetail*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL_SET_GEARDETAILS_OFFSET))(this, value);
		}

		::RPG::Client::EvolveBuildModule* get__Module()
		{
			return ((::RPG::Client::EvolveBuildModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL_GET__MODULE_OFFSET))(this);
		}
	};
}
