#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EvolveGearType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EvolveBuildGearLevelData; }
namespace RPG::Client { class EvolveBuildGearResonanceEffectInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_CREATEEMPTY_OFFSET UNITYSDK_OFFSET(0x19944ED0)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_CREATEFROMGEARID_OFFSET UNITYSDK_OFFSET(0x19944FB0)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_CREATELOCKED_OFFSET UNITYSDK_OFFSET(0x19944F40)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_CREATE_OFFSET UNITYSDK_OFFSET(0x19944E20)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GETMIXDESC_OFFSET UNITYSDK_OFFSET(0x19945320)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GET_CANSHOWMIX_OFFSET UNITYSDK_OFFSET(0x19945600)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GET_EMPTYGEARTYPE_OFFSET UNITYSDK_OFFSET(0x199455C0)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GET_FIRSTGEARDETAIL_OFFSET UNITYSDK_OFFSET(0x199454C0)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GET_GEARDETAIL_OFFSET UNITYSDK_OFFSET(0x199454A0)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GET_ISEMPTYWEAPON_OFFSET UNITYSDK_OFFSET(0x19945570)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x19945520)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x199455E0)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GET_MIXGEARDETAIL_OFFSET UNITYSDK_OFFSET(0x19945500)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GET_RESONANCEEFFECTINFOS_OFFSET UNITYSDK_OFFSET(0x19945660)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GET_SECONDGEARDETAIL_OFFSET UNITYSDK_OFFSET(0x199454E0)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_SETFORBIDMIX_OFFSET UNITYSDK_OFFSET(0x199452D0)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_SETRESONANCEEFFECTINFOS_OFFSET UNITYSDK_OFFSET(0x19945450)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_SET_EMPTYGEARTYPE_OFFSET UNITYSDK_OFFSET(0x199455D0)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_SET_FIRSTGEARDETAIL_OFFSET UNITYSDK_OFFSET(0x199454D0)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_SET_GEARDETAIL_OFFSET UNITYSDK_OFFSET(0x199454B0)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_SET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x199455F0)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_SET_MIXGEARDETAIL_OFFSET UNITYSDK_OFFSET(0x19945510)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_SET_RESONANCEEFFECTINFOS_OFFSET UNITYSDK_OFFSET(0x19945670)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL_SET_SECONDGEARDETAIL_OFFSET UNITYSDK_OFFSET(0x199454F0)
#define RPG_CLIENT_EVOLVEBUILDGEARDETAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x19944EC0)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildGearDetail_TypeDefinitionIndex = 63836;

	class EvolveBuildGearDetail : public ::System::Object
	{
	public:
		::RPG::Client::EvolveBuildGearLevelData* _FirstGearDetail_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearResonanceEffectInfo*>* _ResonanceEffectInfos_k__BackingField; // 0x18
		::RPG::Client::EvolveBuildGearLevelData* _GearDetail_k__BackingField; // 0x20
		::RPG::Client::EvolveBuildGearLevelData* _SecondGearDetail_k__BackingField; // 0x28
		::RPG::Client::EvolveBuildGearLevelData* _MixGearDetail_k__BackingField; // 0x30
		::System::Boolean _IsUnlock_k__BackingField; // 0x38
		::System::Boolean _IsForbidMix; // 0x39
		::RPG::GameCore::EvolveGearType _EmptyGearType_k__BackingField; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::EvolveBuildGearDetail* Create(::RPG::Client::EvolveBuildGearLevelData* a1, ::RPG::Client::EvolveBuildGearLevelData* a2, ::RPG::Client::EvolveBuildGearLevelData* a3, ::RPG::Client::EvolveBuildGearLevelData* a4)
		{
			return ((::RPG::Client::EvolveBuildGearDetail*(*)(::RPG::Client::EvolveBuildGearLevelData*, ::RPG::Client::EvolveBuildGearLevelData*, ::RPG::Client::EvolveBuildGearLevelData*, ::RPG::Client::EvolveBuildGearLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_CREATE_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::EvolveBuildGearDetail* CreateEmpty(::RPG::GameCore::EvolveGearType a1)
		{
			return ((::RPG::Client::EvolveBuildGearDetail*(*)(::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_CREATEEMPTY_OFFSET))(a1);
		}

		static ::RPG::Client::EvolveBuildGearDetail* CreateLocked(::RPG::GameCore::EvolveGearType a1)
		{
			return ((::RPG::Client::EvolveBuildGearDetail*(*)(::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_CREATELOCKED_OFFSET))(a1);
		}

		static ::RPG::Client::EvolveBuildGearDetail* CreateFromGearID(::System::UInt32 a1)
		{
			return ((::RPG::Client::EvolveBuildGearDetail*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_CREATEFROMGEARID_OFFSET))(a1);
		}

		::System::Void SetForbidMix(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_SETFORBIDMIX_OFFSET))(this, a1);
		}

		::RPG::Client::TextID GetMixDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GETMIXDESC_OFFSET))(this);
		}

		::System::Void SetResonanceEffectInfos(::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearResonanceEffectInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearResonanceEffectInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_SETRESONANCEEFFECTINFOS_OFFSET))(this, a1);
		}

		::RPG::Client::EvolveBuildGearLevelData* get_GearDetail()
		{
			return ((::RPG::Client::EvolveBuildGearLevelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GET_GEARDETAIL_OFFSET))(this);
		}

		::System::Void set_GearDetail(::RPG::Client::EvolveBuildGearLevelData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildGearLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_SET_GEARDETAIL_OFFSET))(this, a1);
		}

		::RPG::Client::EvolveBuildGearLevelData* get_FirstGearDetail()
		{
			return ((::RPG::Client::EvolveBuildGearLevelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GET_FIRSTGEARDETAIL_OFFSET))(this);
		}

		::System::Void set_FirstGearDetail(::RPG::Client::EvolveBuildGearLevelData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildGearLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_SET_FIRSTGEARDETAIL_OFFSET))(this, a1);
		}

		::RPG::Client::EvolveBuildGearLevelData* get_SecondGearDetail()
		{
			return ((::RPG::Client::EvolveBuildGearLevelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GET_SECONDGEARDETAIL_OFFSET))(this);
		}

		::System::Void set_SecondGearDetail(::RPG::Client::EvolveBuildGearLevelData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildGearLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_SET_SECONDGEARDETAIL_OFFSET))(this, a1);
		}

		::RPG::Client::EvolveBuildGearLevelData* get_MixGearDetail()
		{
			return ((::RPG::Client::EvolveBuildGearLevelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GET_MIXGEARDETAIL_OFFSET))(this);
		}

		::System::Void set_MixGearDetail(::RPG::Client::EvolveBuildGearLevelData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildGearLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_SET_MIXGEARDETAIL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Boolean get_IsEmptyWeapon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GET_ISEMPTYWEAPON_OFFSET))(this);
		}

		::RPG::GameCore::EvolveGearType get_EmptyGearType()
		{
			return ((::RPG::GameCore::EvolveGearType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GET_EMPTYGEARTYPE_OFFSET))(this);
		}

		::System::Void set_EmptyGearType(::RPG::GameCore::EvolveGearType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_SET_EMPTYGEARTYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Void set_IsUnlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_SET_ISUNLOCK_OFFSET))(this, a1);
		}

		::System::Boolean get_CanShowMix()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GET_CANSHOWMIX_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearResonanceEffectInfo*>* get_ResonanceEffectInfos()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearResonanceEffectInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_GET_RESONANCEEFFECTINFOS_OFFSET))(this);
		}

		::System::Void set_ResonanceEffectInfos(::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearResonanceEffectInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearResonanceEffectInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARDETAIL_SET_RESONANCEEFFECTINFOS_OFFSET))(this, a1);
		}
	};
}
