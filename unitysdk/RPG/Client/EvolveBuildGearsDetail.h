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

#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL_CREATE_OFFSET UNITYSDK_OFFSET(0xCED5F20)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL_GET_ACCESSORYDETAILS_OFFSET UNITYSDK_OFFSET(0xCED7E90)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL_GET_GEARDETAILS_OFFSET UNITYSDK_OFFSET(0xCED7EB0)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL_GET_WEAPONDETAILS_OFFSET UNITYSDK_OFFSET(0xCED7E70)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL_GET__MODULE_OFFSET UNITYSDK_OFFSET(0xCED7DE0)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL_SETFORBIDMIX_OFFSET UNITYSDK_OFFSET(0xCED62B0)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL_SET_ACCESSORYDETAILS_OFFSET UNITYSDK_OFFSET(0xCED7EA0)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL_SET_GEARDETAILS_OFFSET UNITYSDK_OFFSET(0xCED7EC0)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL_SET_WEAPONDETAILS_OFFSET UNITYSDK_OFFSET(0xCED7E80)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__ADDTOGEARDETAILS_OFFSET UNITYSDK_OFFSET(0xCED6680)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__COLLECTGEARDETAILSFROMEQUIPINFO_OFFSET UNITYSDK_OFFSET(0xCED72F0)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__COLLECTGEARDETAILSTOCAPACITY_OFFSET UNITYSDK_OFFSET(0xCED75F0)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__COLLECTGEARDETAILS_OFFSET UNITYSDK_OFFSET(0xCED65C0)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__COLLECTGEARLEVEL_OFFSET UNITYSDK_OFFSET(0xCED69F0)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__COLLECTGEARSLEVEL_OFFSET UNITYSDK_OFFSET(0xCED6550)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__CREATEGEARDETAIL_OFFSET UNITYSDK_OFFSET(0xCED7840)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__CREATELEVELDATA_OFFSET UNITYSDK_OFFSET(0xCED79F0)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__CTOR_OFFSET UNITYSDK_OFFSET(0xCED5FD0)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__GETGEARRESONANCEEFFECTINFO_OFFSET UNITYSDK_OFFSET(0xCED6B50)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__HASGEARHORIZONTALRESONANCEEFFECTINFO_OFFSET UNITYSDK_OFFSET(0xCED7000)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__HASGEARORPREADD_OFFSET UNITYSDK_OFFSET(0xCED7230)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__HASGEARVERTICALRESONANCEEFFECTINFO_OFFSET UNITYSDK_OFFSET(0xCED6DD0)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__REFRESHALL_OFFSET UNITYSDK_OFFSET(0xCED6190)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__REFRESHGEARRESONANCEINFO_OFFSET UNITYSDK_OFFSET(0xCED68A0)
#define RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__TRYGETGEARLEVEL_OFFSET UNITYSDK_OFFSET(0xCED71A0)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildGearsDetail_TypeDefinitionIndex = 63839;

	class EvolveBuildGearsDetail : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildGearDetail*>* _GearDetails_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildGearLevelData*>* _GearsData; // 0x18
		::RPG::GameCore::EvolveBuildGearManager* _Manager; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _GearLevels; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>* _AccessoryDetails_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>* _WeaponDetails_k__BackingField; // 0x38
		::System::Boolean _ShowBlank; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::EvolveBuildGearsDetail* Create(::RPG::GameCore::EvolveBuildGearManager* a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::EvolveBuildGearsDetail*(*)(::RPG::GameCore::EvolveBuildGearManager*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL_CREATE_OFFSET))(a1, a2);
		}

		::System::Void SetForbidMix(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL_SETFORBIDMIX_OFFSET))(this, a1);
		}

		::System::Void _RefreshAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__REFRESHALL_OFFSET))(this);
		}

		::System::Void _AddToGearDetails(::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__ADDTOGEARDETAILS_OFFSET))(this, a1);
		}

		::System::Void _CollectGearsLevel(::RPG::Client::SortedEvolveBuildGearEquipInfoLists* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SortedEvolveBuildGearEquipInfoLists*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__COLLECTGEARSLEVEL_OFFSET))(this, a1);
		}

		::System::Void _CollectGearLevel(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__COLLECTGEARLEVEL_OFFSET))(this, a1);
		}

		::System::Void _RefreshGearResonanceInfo(::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__REFRESHGEARRESONANCEINFO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearResonanceEffectInfo*>* _GetGearResonanceEffectInfo(::RPG::Client::EvolveBuildGearDetail* a1, ::RPG::Client::EvolveBuildGearDetail* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearResonanceEffectInfo*>*(*)(::PVOID, ::RPG::Client::EvolveBuildGearDetail*, ::RPG::Client::EvolveBuildGearDetail*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__GETGEARRESONANCEEFFECTINFO_OFFSET))(this, a1, a2);
		}

		::System::Boolean _HasGearVerticalResonanceEffectInfo(::RPG::Client::EvolveBuildGearDetail* a1, ::RPG::Client::EvolveBuildGearDetail* a2, ::RPG::Client::EvolveBuildGearResonanceEffectInfo*& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EvolveBuildGearDetail*, ::RPG::Client::EvolveBuildGearDetail*, ::RPG::Client::EvolveBuildGearResonanceEffectInfo*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__HASGEARVERTICALRESONANCEEFFECTINFO_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _HasGearHorizontalResonanceEffectInfo(::RPG::Client::EvolveBuildGearDetail* a1, ::RPG::Client::EvolveBuildGearResonanceEffectInfo*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EvolveBuildGearDetail*, ::RPG::Client::EvolveBuildGearResonanceEffectInfo*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__HASGEARHORIZONTALRESONANCEEFFECTINFO_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _TryGetGearLevel(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__TRYGETGEARLEVEL_OFFSET))(this, a1);
		}

		::System::Boolean _HasGearOrPreAdd(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__HASGEARORPREADD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>* _CollectGearDetails(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* a1, ::RPG::GameCore::EvolveGearType a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__COLLECTGEARDETAILS_OFFSET))(this, a1, a2);
		}

		::System::Void _CollectGearDetailsFromEquipInfo(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* a1, ::RPG::GameCore::EvolveGearType a2, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*, ::RPG::GameCore::EvolveGearType, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__COLLECTGEARDETAILSFROMEQUIPINFO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _CollectGearDetailsToCapacity(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* a1, ::RPG::GameCore::EvolveGearType a2, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*, ::RPG::GameCore::EvolveGearType, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__COLLECTGEARDETAILSTOCAPACITY_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::EvolveBuildGearDetail* _CreateGearDetail(::System::UInt32 a1)
		{
			return ((::RPG::Client::EvolveBuildGearDetail*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__CREATEGEARDETAIL_OFFSET))(this, a1);
		}

		::RPG::Client::EvolveBuildGearLevelData* _CreateLevelData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::EvolveBuildGearLevelData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL__CREATELEVELDATA_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>* get_WeaponDetails()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL_GET_WEAPONDETAILS_OFFSET))(this);
		}

		::System::Void set_WeaponDetails(::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL_SET_WEAPONDETAILS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>* get_AccessoryDetails()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL_GET_ACCESSORYDETAILS_OFFSET))(this);
		}

		::System::Void set_AccessoryDetails(::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL_SET_ACCESSORYDETAILS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildGearDetail*>* get_GearDetails()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildGearDetail*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL_GET_GEARDETAILS_OFFSET))(this);
		}

		::System::Void set_GearDetails(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildGearDetail*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildGearDetail*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL_SET_GEARDETAILS_OFFSET))(this, a1);
		}

		::RPG::Client::EvolveBuildModule* get__Module()
		{
			return ((::RPG::Client::EvolveBuildModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSDETAIL_GET__MODULE_OFFSET))(this);
		}
	};
}
