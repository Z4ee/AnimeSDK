#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_631;
class Class_1_6EBEA8069CDA622C_8;
class Class_1_8E5A9F762BDF32F5;
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }

#define RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_COMPARETO_OFFSET UNITYSDK_OFFSET(0x98A5B60)
#define RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_CREATE_1_OFFSET UNITYSDK_OFFSET(0x98A58F0)
#define RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x98A5830)
#define RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_GET_DAMAGEPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x98A5B40)
#define RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_GET_ROLE_OFFSET UNITYSDK_OFFSET(0x98A5AE0)
#define RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_GET_TOTALDAMAGE_OFFSET UNITYSDK_OFFSET(0x98A5B20)
#define RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_GET_TRAIT_OFFSET UNITYSDK_OFFSET(0x98A5B00)
#define RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_SET_DAMAGEPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x98A5B50)
#define RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_SET_ROLE_OFFSET UNITYSDK_OFFSET(0x98A5AF0)
#define RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_SET_TOTALDAMAGE_OFFSET UNITYSDK_OFFSET(0x98A5B30)
#define RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_SET_TRAIT_OFFSET UNITYSDK_OFFSET(0x98A5B10)
#define RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x98A58E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSettleDamageStatisticInfo_TypeDefinitionIndex = 52945;

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

		static ::RPG::Client::GridFightSettleDamageStatisticInfo* Create(::Class_1_8E5A9F762BDF32F5* damageInfo, ::Class_0_16E4307DCC419505_631* context)
		{
			return ((::RPG::Client::GridFightSettleDamageStatisticInfo*(*)(::Class_1_8E5A9F762BDF32F5*, ::Class_0_16E4307DCC419505_631*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_CREATE_OFFSET))(damageInfo, context);
		}

		static ::RPG::Client::GridFightSettleDamageStatisticInfo* Create_1(::Class_1_6EBEA8069CDA622C_8* damageInfo, ::Class_0_16E4307DCC419505_631* context)
		{
			return ((::RPG::Client::GridFightSettleDamageStatisticInfo*(*)(::Class_1_6EBEA8069CDA622C_8*, ::Class_0_16E4307DCC419505_631*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLEDAMAGESTATISTICINFO_CREATE_1_OFFSET))(damageInfo, context);
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
