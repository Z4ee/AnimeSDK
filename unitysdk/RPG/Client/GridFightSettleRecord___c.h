#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_17A912F7181BCCFA;
class Class_1_21C7581DFE99F091_50;
class Class_1_23C1B7E6B450FFB8_5;
class Class_1_8D398246A70BD04C_2;
class Class_1_D17272E82AE804C2_439;
namespace RPG::Client { class GridFightMonsterAffixConfig; }
namespace RPG::Client { class GridFightMonsterData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightSeasonRole; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5AEA90)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5AEAD0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GETROLESBYTRAIT_B__56_0_OFFSET UNITYSDK_OFFSET(0x1C5AEC40)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_AFFIXDATALIST_B__29_0_OFFSET UNITYSDK_OFFSET(0x1C5AEAE0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_AFFIXDATALIST_B__29_1_OFFSET UNITYSDK_OFFSET(0x1C5AEBA0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_BOSSINFOS_B__31_0_OFFSET UNITYSDK_OFFSET(0x1C5AEBB0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_ROLES_B__149_0_OFFSET UNITYSDK_OFFSET(0x1C5AECB0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__54_0_OFFSET UNITYSDK_OFFSET(0x1C5AEBE0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__54_1_OFFSET UNITYSDK_OFFSET(0x1C5AEC00)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__54_2_OFFSET UNITYSDK_OFFSET(0x1C5AEC20)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSettleRecord___c_TypeDefinitionIndex = 65269;

	class GridFightSettleRecord___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_21C7581DFE99F091_50*, ::RPG::Client::GridFightMonsterAffixConfig*>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::Class_1_21C7581DFE99F091_50*, ::RPG::Client::GridFightMonsterAffixConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSettleRecord___c_TypeDefinitionIndex)->GetStaticField(0x43480);
		}
		static ::System::Func_2<::Class_1_8D398246A70BD04C_2*, ::System::Double>** StaticGet___9__54_2()
		{
			return (::System::Func_2<::Class_1_8D398246A70BD04C_2*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSettleRecord___c_TypeDefinitionIndex)->GetStaticField(0x43488);
		}
		static ::System::Func_2<::Class_1_17A912F7181BCCFA*, ::System::Double>** StaticGet___9__54_0()
		{
			return (::System::Func_2<::Class_1_17A912F7181BCCFA*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSettleRecord___c_TypeDefinitionIndex)->GetStaticField(0x43490);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__56_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSettleRecord___c_TypeDefinitionIndex)->GetStaticField(0x43498);
		}
		static ::System::Func_2<::Class_1_D17272E82AE804C2_439*, ::RPG::Client::GridFightMonsterData*>** StaticGet___9__31_0()
		{
			return (::System::Func_2<::Class_1_D17272E82AE804C2_439*, ::RPG::Client::GridFightMonsterData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSettleRecord___c_TypeDefinitionIndex)->GetStaticField(0x434A0);
		}
		static ::System::Func_2<::Class_1_23C1B7E6B450FFB8_5*, ::System::Double>** StaticGet___9__54_1()
		{
			return (::System::Func_2<::Class_1_23C1B7E6B450FFB8_5*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSettleRecord___c_TypeDefinitionIndex)->GetStaticField(0x434A8);
		}
		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>** StaticGet___9__149_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSettleRecord___c_TypeDefinitionIndex)->GetStaticField(0x434B0);
		}
		static ::RPG::Client::GridFightSettleRecord___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightSettleRecord___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightSettleRecord___c_TypeDefinitionIndex)->GetStaticField(0x434B8);
		}
		static ::System::Func_2<::RPG::Client::GridFightMonsterAffixConfig*, ::System::Boolean>** StaticGet___9__29_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterAffixConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSettleRecord___c_TypeDefinitionIndex)->GetStaticField(0x434C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightMonsterAffixConfig* _get_AffixDataList_b__29_0(::Class_1_21C7581DFE99F091_50* a1)
		{
			return ((::RPG::Client::GridFightMonsterAffixConfig*(*)(::PVOID, ::Class_1_21C7581DFE99F091_50*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_AFFIXDATALIST_B__29_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_AffixDataList_b__29_1(::RPG::Client::GridFightMonsterAffixConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterAffixConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_AFFIXDATALIST_B__29_1_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightMonsterData* _get_BossInfos_b__31_0(::Class_1_D17272E82AE804C2_439* a1)
		{
			return ((::RPG::Client::GridFightMonsterData*(*)(::PVOID, ::Class_1_D17272E82AE804C2_439*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_BOSSINFOS_B__31_0_OFFSET))(this, a1);
		}

		::System::Double __SyncDamageStatistics_b__54_0(::Class_1_17A912F7181BCCFA* a1)
		{
			return ((::System::Double(*)(::PVOID, ::Class_1_17A912F7181BCCFA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__54_0_OFFSET))(this, a1);
		}

		::System::Double __SyncDamageStatistics_b__54_1(::Class_1_23C1B7E6B450FFB8_5* a1)
		{
			return ((::System::Double(*)(::PVOID, ::Class_1_23C1B7E6B450FFB8_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__54_1_OFFSET))(this, a1);
		}

		::System::Double __SyncDamageStatistics_b__54_2(::Class_1_8D398246A70BD04C_2* a1)
		{
			return ((::System::Double(*)(::PVOID, ::Class_1_8D398246A70BD04C_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__54_2_OFFSET))(this, a1);
		}

		::System::Boolean _GetRolesByTrait_b__56_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GETROLESBYTRAIT_B__56_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole* _get_Roles_b__149_0(::RPG::Client::GridFightSeasonRole* a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_ROLES_B__149_0_OFFSET))(this, a1);
		}
	};
}
