#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_42;
class Class_1_23C1B7E6B450FFB8_7;
class Class_1_23C1B7E6B450FFB8_8;
class Class_1_D17272E82AE804C2_382;
class Class_1_F1F83A16E5B8B459_3;
namespace RPG::Client { class GridFightMonsterAffixConfig; }
namespace RPG::Client { class GridFightMonsterData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightSeasonRole; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBBFD4B0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBBFD4F0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GETROLESBYTRAIT_B__55_0_OFFSET UNITYSDK_OFFSET(0xBBFD640)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_AFFIXDATALIST_B__29_0_OFFSET UNITYSDK_OFFSET(0xBBFD500)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_AFFIXDATALIST_B__29_1_OFFSET UNITYSDK_OFFSET(0xBBFD5A0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_BOSSINFOS_B__31_0_OFFSET UNITYSDK_OFFSET(0xBBFD5B0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_ROLES_B__148_0_OFFSET UNITYSDK_OFFSET(0xBBFD680)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__53_0_OFFSET UNITYSDK_OFFSET(0xBBFD5E0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__53_1_OFFSET UNITYSDK_OFFSET(0xBBFD600)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__53_2_OFFSET UNITYSDK_OFFSET(0xBBFD620)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSettleRecord___c_TypeDefinitionIndex = 60969;

	class GridFightSettleRecord___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__55_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSettleRecord___c_TypeDefinitionIndex)->GetStaticField(0x36F30);
		}
		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>** StaticGet___9__148_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSettleRecord___c_TypeDefinitionIndex)->GetStaticField(0x36F38);
		}
		static ::RPG::Client::GridFightSettleRecord___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightSettleRecord___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightSettleRecord___c_TypeDefinitionIndex)->GetStaticField(0x36F40);
		}
		static ::System::Func_2<::Class_1_21C7581DFE99F091_42*, ::RPG::Client::GridFightMonsterAffixConfig*>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::Class_1_21C7581DFE99F091_42*, ::RPG::Client::GridFightMonsterAffixConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSettleRecord___c_TypeDefinitionIndex)->GetStaticField(0x36F48);
		}
		static ::System::Func_2<::Class_1_23C1B7E6B450FFB8_7*, ::System::Double>** StaticGet___9__53_2()
		{
			return (::System::Func_2<::Class_1_23C1B7E6B450FFB8_7*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSettleRecord___c_TypeDefinitionIndex)->GetStaticField(0x36F50);
		}
		static ::System::Func_2<::Class_1_F1F83A16E5B8B459_3*, ::System::Double>** StaticGet___9__53_0()
		{
			return (::System::Func_2<::Class_1_F1F83A16E5B8B459_3*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSettleRecord___c_TypeDefinitionIndex)->GetStaticField(0x36F58);
		}
		static ::System::Func_2<::RPG::Client::GridFightMonsterAffixConfig*, ::System::Boolean>** StaticGet___9__29_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterAffixConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSettleRecord___c_TypeDefinitionIndex)->GetStaticField(0x36F60);
		}
		static ::System::Func_2<::Class_1_23C1B7E6B450FFB8_8*, ::System::Double>** StaticGet___9__53_1()
		{
			return (::System::Func_2<::Class_1_23C1B7E6B450FFB8_8*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSettleRecord___c_TypeDefinitionIndex)->GetStaticField(0x36F68);
		}
		static ::System::Func_2<::Class_1_D17272E82AE804C2_382*, ::RPG::Client::GridFightMonsterData*>** StaticGet___9__31_0()
		{
			return (::System::Func_2<::Class_1_D17272E82AE804C2_382*, ::RPG::Client::GridFightMonsterData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSettleRecord___c_TypeDefinitionIndex)->GetStaticField(0x36F70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightMonsterAffixConfig* _get_AffixDataList_b__29_0(::Class_1_21C7581DFE99F091_42* a1)
		{
			return ((::RPG::Client::GridFightMonsterAffixConfig*(*)(::PVOID, ::Class_1_21C7581DFE99F091_42*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_AFFIXDATALIST_B__29_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_AffixDataList_b__29_1(::RPG::Client::GridFightMonsterAffixConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterAffixConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_AFFIXDATALIST_B__29_1_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightMonsterData* _get_BossInfos_b__31_0(::Class_1_D17272E82AE804C2_382* a1)
		{
			return ((::RPG::Client::GridFightMonsterData*(*)(::PVOID, ::Class_1_D17272E82AE804C2_382*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_BOSSINFOS_B__31_0_OFFSET))(this, a1);
		}

		::System::Double __SyncDamageStatistics_b__53_0(::Class_1_F1F83A16E5B8B459_3* a1)
		{
			return ((::System::Double(*)(::PVOID, ::Class_1_F1F83A16E5B8B459_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__53_0_OFFSET))(this, a1);
		}

		::System::Double __SyncDamageStatistics_b__53_1(::Class_1_23C1B7E6B450FFB8_8* a1)
		{
			return ((::System::Double(*)(::PVOID, ::Class_1_23C1B7E6B450FFB8_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__53_1_OFFSET))(this, a1);
		}

		::System::Double __SyncDamageStatistics_b__53_2(::Class_1_23C1B7E6B450FFB8_7* a1)
		{
			return ((::System::Double(*)(::PVOID, ::Class_1_23C1B7E6B450FFB8_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__53_2_OFFSET))(this, a1);
		}

		::System::Boolean _GetRolesByTrait_b__55_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GETROLESBYTRAIT_B__55_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole* _get_Roles_b__148_0(::RPG::Client::GridFightSeasonRole* a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_ROLES_B__148_0_OFFSET))(this, a1);
		}
	};
}
