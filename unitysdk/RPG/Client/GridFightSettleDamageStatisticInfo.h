#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_722;
class Class_1_23C1B7E6B450FFB8_7;
class Class_1_F1F83A16E5B8B459_3;
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }

#define RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_COMPARETO_OFFSET UNITYSDK_OFFSET(0xA5871C0)
#define RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_CREATE_1_OFFSET UNITYSDK_OFFSET(0xA586F50)
#define RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xA586E90)
#define RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_GET_DAMAGEPERCENTAGE_OFFSET UNITYSDK_OFFSET(0xA5871A0)
#define RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_GET_ROLE_OFFSET UNITYSDK_OFFSET(0xA587140)
#define RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_GET_TOTALDAMAGE_OFFSET UNITYSDK_OFFSET(0xA587180)
#define RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_GET_TRAIT_OFFSET UNITYSDK_OFFSET(0xA587160)
#define RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_SET_DAMAGEPERCENTAGE_OFFSET UNITYSDK_OFFSET(0xA5871B0)
#define RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_SET_ROLE_OFFSET UNITYSDK_OFFSET(0xA587150)
#define RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_SET_TOTALDAMAGE_OFFSET UNITYSDK_OFFSET(0xA587190)
#define RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_SET_TRAIT_OFFSET UNITYSDK_OFFSET(0xA587170)
#define RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA586F40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSettleDamageStatisticInfo_TypeDefinitionIndex = 60031;

	class GridFightSettleDamageStatisticInfo : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTrait* _Trait_k__BackingField; // 0x10
		::RPG::Client::GridFightRole* _Role_k__BackingField; // 0x18
		::System::Double _TotalDamage_k__BackingField; // 0x20
		::System::Single _DamagePercentage_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightSettleDamageStatisticInfo* Create(::Class_1_F1F83A16E5B8B459_3* damageInfo, ::Class_0_16E4307DCC419505_722* context)
		{
			return ((::RPG::Client::GridFightSettleDamageStatisticInfo*(*)(::Class_1_F1F83A16E5B8B459_3*, ::Class_0_16E4307DCC419505_722*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_CREATE_OFFSET))(damageInfo, context);
		}

		static ::RPG::Client::GridFightSettleDamageStatisticInfo* Create_1(::Class_1_23C1B7E6B450FFB8_7* damageInfo, ::Class_0_16E4307DCC419505_722* context)
		{
			return ((::RPG::Client::GridFightSettleDamageStatisticInfo*(*)(::Class_1_23C1B7E6B450FFB8_7*, ::Class_0_16E4307DCC419505_722*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_CREATE_1_OFFSET))(damageInfo, context);
		}

		::RPG::Client::GridFightRole* get_Role()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_GET_ROLE_OFFSET))(this);
		}

		::System::Void set_Role(::RPG::Client::GridFightRole* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_SET_ROLE_OFFSET))(this, value);
		}

		::RPG::Client::GridFightTrait* get_Trait()
		{
			return ((::RPG::Client::GridFightTrait*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_GET_TRAIT_OFFSET))(this);
		}

		::System::Void set_Trait(::RPG::Client::GridFightTrait* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_SET_TRAIT_OFFSET))(this, value);
		}

		::System::Double get_TotalDamage()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_GET_TOTALDAMAGE_OFFSET))(this);
		}

		::System::Void set_TotalDamage(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_SET_TOTALDAMAGE_OFFSET))(this, value);
		}

		::System::Single get_DamagePercentage()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_GET_DAMAGEPERCENTAGE_OFFSET))(this);
		}

		::System::Void set_DamagePercentage(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_SET_DAMAGEPERCENTAGE_OFFSET))(this, value);
		}

		::System::Int32 CompareTo(::RPG::Client::GridFightSettleDamageStatisticInfo* other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightSettleDamageStatisticInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_COMPARETO_OFFSET))(this, other);
		}
	};
}
