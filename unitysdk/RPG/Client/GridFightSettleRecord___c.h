#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_39;
class Class_1_23C1B7E6B450FFB8_7;
class Class_1_23C1B7E6B450FFB8_8;
class Class_1_D17272E82AE804C2_369;
class Class_1_F1F83A16E5B8B459_3;
namespace RPG::Client { class GridFightMonsterAffixConfig; }
namespace RPG::Client { class GridFightMonsterData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightSeasonRole; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA58DD30)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA58DD70)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GETROLESBYTRAIT_B__55_0_OFFSET UNITYSDK_OFFSET(0xA58DEC0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_AFFIXDATALIST_B__29_0_OFFSET UNITYSDK_OFFSET(0xA58DD80)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_AFFIXDATALIST_B__29_1_OFFSET UNITYSDK_OFFSET(0xA58DE20)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_BOSSINFOS_B__31_0_OFFSET UNITYSDK_OFFSET(0xA58DE30)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_ROLES_B__148_0_OFFSET UNITYSDK_OFFSET(0xA58DF50)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__53_0_OFFSET UNITYSDK_OFFSET(0xA58DE60)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__53_1_OFFSET UNITYSDK_OFFSET(0xA58DE80)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__53_2_OFFSET UNITYSDK_OFFSET(0xA58DEA0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSettleRecord___c_TypeDefinitionIndex = 60034;

	class GridFightSettleRecord___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_23C1B7E6B450FFB8_7*, ::System::Double>** StaticGet___9__53_1()
		{
			return (::System::Func_2<::Class_1_23C1B7E6B450FFB8_7*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSettleRecord___c_TypeDefinitionIndex)->GetStaticField(0x19450);
		}
		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>** StaticGet___9__148_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSettleRecord___c_TypeDefinitionIndex)->GetStaticField(0x19458);
		}
		static ::System::Func_2<::Class_1_F1F83A16E5B8B459_3*, ::System::Double>** StaticGet___9__53_0()
		{
			return (::System::Func_2<::Class_1_F1F83A16E5B8B459_3*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSettleRecord___c_TypeDefinitionIndex)->GetStaticField(0x19460);
		}
		static ::System::Func_2<::Class_1_21C7581DFE99F091_39*, ::RPG::Client::GridFightMonsterAffixConfig*>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::Class_1_21C7581DFE99F091_39*, ::RPG::Client::GridFightMonsterAffixConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSettleRecord___c_TypeDefinitionIndex)->GetStaticField(0x19468);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__55_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSettleRecord___c_TypeDefinitionIndex)->GetStaticField(0x19470);
		}
		static ::System::Func_2<::Class_1_23C1B7E6B450FFB8_8*, ::System::Double>** StaticGet___9__53_2()
		{
			return (::System::Func_2<::Class_1_23C1B7E6B450FFB8_8*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSettleRecord___c_TypeDefinitionIndex)->GetStaticField(0x19478);
		}
		static ::System::Func_2<::Class_1_D17272E82AE804C2_369*, ::RPG::Client::GridFightMonsterData*>** StaticGet___9__31_0()
		{
			return (::System::Func_2<::Class_1_D17272E82AE804C2_369*, ::RPG::Client::GridFightMonsterData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSettleRecord___c_TypeDefinitionIndex)->GetStaticField(0x19480);
		}
		static ::RPG::Client::GridFightSettleRecord___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightSettleRecord___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightSettleRecord___c_TypeDefinitionIndex)->GetStaticField(0x19488);
		}
		static ::System::Func_2<::RPG::Client::GridFightMonsterAffixConfig*, ::System::Boolean>** StaticGet___9__29_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterAffixConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSettleRecord___c_TypeDefinitionIndex)->GetStaticField(0x19490);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightMonsterAffixConfig* _get_AffixDataList_b__29_0(::Class_1_21C7581DFE99F091_39* x)
		{
			return ((::RPG::Client::GridFightMonsterAffixConfig*(*)(::PVOID, ::Class_1_21C7581DFE99F091_39*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_AFFIXDATALIST_B__29_0_OFFSET))(this, x);
		}

		::System::Boolean _get_AffixDataList_b__29_1(::RPG::Client::GridFightMonsterAffixConfig* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterAffixConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_AFFIXDATALIST_B__29_1_OFFSET))(this, data);
		}

		::RPG::Client::GridFightMonsterData* _get_BossInfos_b__31_0(::Class_1_D17272E82AE804C2_369* x)
		{
			return ((::RPG::Client::GridFightMonsterData*(*)(::PVOID, ::Class_1_D17272E82AE804C2_369*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_BOSSINFOS_B__31_0_OFFSET))(this, x);
		}

		::System::Double __SyncDamageStatistics_b__53_0(::Class_1_F1F83A16E5B8B459_3* x)
		{
			return ((::System::Double(*)(::PVOID, ::Class_1_F1F83A16E5B8B459_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__53_0_OFFSET))(this, x);
		}

		::System::Double __SyncDamageStatistics_b__53_1(::Class_1_23C1B7E6B450FFB8_7* x)
		{
			return ((::System::Double(*)(::PVOID, ::Class_1_23C1B7E6B450FFB8_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__53_1_OFFSET))(this, x);
		}

		::System::Double __SyncDamageStatistics_b__53_2(::Class_1_23C1B7E6B450FFB8_8* x)
		{
			return ((::System::Double(*)(::PVOID, ::Class_1_23C1B7E6B450FFB8_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__53_2_OFFSET))(this, x);
		}

		::System::Boolean _GetRolesByTrait_b__55_0(::RPG::Client::GridFightRole* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GETROLESBYTRAIT_B__55_0_OFFSET))(this, x);
		}

		::RPG::Client::GridFightRole* _get_Roles_b__148_0(::RPG::Client::GridFightSeasonRole* x)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_ROLES_B__148_0_OFFSET))(this, x);
		}
	};
}
