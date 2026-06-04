#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_773;
class Class_1_23C1B7E6B450FFB8_8;
class Class_1_F1F83A16E5B8B459_3;
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }

#define RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_COMPARETO_OFFSET UNITYSDK_OFFSET(0xBBF69E0)
#define RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_CREATE_1_OFFSET UNITYSDK_OFFSET(0xBBF6770)
#define RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xBBF66B0)
#define RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_GET_DAMAGEPERCENTAGE_OFFSET UNITYSDK_OFFSET(0xBBF69C0)
#define RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_GET_ROLE_OFFSET UNITYSDK_OFFSET(0xBBF6960)
#define RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_GET_TOTALDAMAGE_OFFSET UNITYSDK_OFFSET(0xBBF69A0)
#define RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_GET_TRAIT_OFFSET UNITYSDK_OFFSET(0xBBF6980)
#define RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_SET_DAMAGEPERCENTAGE_OFFSET UNITYSDK_OFFSET(0xBBF69D0)
#define RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_SET_ROLE_OFFSET UNITYSDK_OFFSET(0xBBF6970)
#define RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_SET_TOTALDAMAGE_OFFSET UNITYSDK_OFFSET(0xBBF69B0)
#define RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_SET_TRAIT_OFFSET UNITYSDK_OFFSET(0xBBF6990)
#define RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xBBF6760)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSettleDamageStatisticInfo_TypeDefinitionIndex = 60966;

	class GridFightSettleDamageStatisticInfo : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* _Role_k__BackingField; // 0x10
		::RPG::Client::GridFightTrait* _Trait_k__BackingField; // 0x18
		::System::Single _DamagePercentage_k__BackingField; // 0x20
		::System::Double _TotalDamage_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightSettleDamageStatisticInfo* Create(::Class_1_F1F83A16E5B8B459_3* a1, ::Class_0_16E4307DCC419505_773* a2)
		{
			return ((::RPG::Client::GridFightSettleDamageStatisticInfo*(*)(::Class_1_F1F83A16E5B8B459_3*, ::Class_0_16E4307DCC419505_773*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_CREATE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::GridFightSettleDamageStatisticInfo* Create_1(::Class_1_23C1B7E6B450FFB8_8* a1, ::Class_0_16E4307DCC419505_773* a2)
		{
			return ((::RPG::Client::GridFightSettleDamageStatisticInfo*(*)(::Class_1_23C1B7E6B450FFB8_8*, ::Class_0_16E4307DCC419505_773*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_CREATE_1_OFFSET))(a1, a2);
		}

		::RPG::Client::GridFightRole* get_Role()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_GET_ROLE_OFFSET))(this);
		}

		::System::Void set_Role(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_SET_ROLE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTrait* get_Trait()
		{
			return ((::RPG::Client::GridFightTrait*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_GET_TRAIT_OFFSET))(this);
		}

		::System::Void set_Trait(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_SET_TRAIT_OFFSET))(this, a1);
		}

		::System::Double get_TotalDamage()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_GET_TOTALDAMAGE_OFFSET))(this);
		}

		::System::Void set_TotalDamage(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_SET_TOTALDAMAGE_OFFSET))(this, a1);
		}

		::System::Single get_DamagePercentage()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_GET_DAMAGEPERCENTAGE_OFFSET))(this);
		}

		::System::Void set_DamagePercentage(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_SET_DAMAGEPERCENTAGE_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo(::RPG::Client::GridFightSettleDamageStatisticInfo* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightSettleDamageStatisticInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_COMPARETO_OFFSET))(this, a1);
		}
	};
}
