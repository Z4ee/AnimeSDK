#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_39;
class Class_1_D17272E82AE804C2_367;
class Class_2_FD0167EB507B9435_2;
namespace RPG::Client { class GridFightMonsterAffixConfig; }
namespace RPG::Client { class GridFightMonsterCampConfig; }
namespace RPG::Client { class GridFightStageNode; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTSTAGE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA596870)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA5968B0)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_AFFIXDATALIST_B__105_0_OFFSET UNITYSDK_OFFSET(0xA596B10)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_AFFIXDATALIST_B__105_1_OFFSET UNITYSDK_OFFSET(0xA596BB0)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_CAMPDATALIST_B__107_0_OFFSET UNITYSDK_OFFSET(0xA596BC0)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_CAMPDATALIST_B__107_1_OFFSET UNITYSDK_OFFSET(0xA596C60)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_DIFFICULTYMODIFYVALUE_B__42_1_OFFSET UNITYSDK_OFFSET(0xA5968C0)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_LATESTBATTENODE_B__89_0_OFFSET UNITYSDK_OFFSET(0xA5968E0)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_LATESTMONSTERNODE_B__91_0_OFFSET UNITYSDK_OFFSET(0xA596AB0)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_PROGRESS_B__95_0_OFFSET UNITYSDK_OFFSET(0xA596AF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightStage___c_TypeDefinitionIndex = 60067;

	class GridFightStage___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightStageNode*, ::System::Boolean>** StaticGet___9__89_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightStageNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStage___c_TypeDefinitionIndex)->GetStaticField(0x19A90);
		}
		static ::System::Func_2<::RPG::Client::GridFightMonsterAffixConfig*, ::System::Boolean>** StaticGet___9__105_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterAffixConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStage___c_TypeDefinitionIndex)->GetStaticField(0x19A98);
		}
		static ::System::Func_2<::Class_1_21C7581DFE99F091_39*, ::RPG::Client::GridFightMonsterAffixConfig*>** StaticGet___9__105_0()
		{
			return (::System::Func_2<::Class_1_21C7581DFE99F091_39*, ::RPG::Client::GridFightMonsterAffixConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStage___c_TypeDefinitionIndex)->GetStaticField(0x19AA0);
		}
		static ::System::Func_2<::RPG::Client::GridFightStageNode*, ::System::Boolean>** StaticGet___9__95_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightStageNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStage___c_TypeDefinitionIndex)->GetStaticField(0x19AA8);
		}
		static ::System::Func_2<::RPG::Client::GridFightStageNode*, ::System::Boolean>** StaticGet___9__91_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightStageNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStage___c_TypeDefinitionIndex)->GetStaticField(0x19AB0);
		}
		static ::System::Func_2<::Class_1_D17272E82AE804C2_367*, ::RPG::Client::GridFightMonsterCampConfig*>** StaticGet___9__107_0()
		{
			return (::System::Func_2<::Class_1_D17272E82AE804C2_367*, ::RPG::Client::GridFightMonsterCampConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStage___c_TypeDefinitionIndex)->GetStaticField(0x19AB8);
		}
		static ::RPG::Client::GridFightStage___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightStage___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightStage___c_TypeDefinitionIndex)->GetStaticField(0x19AC0);
		}
		static ::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::Boolean>** StaticGet___9__107_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStage___c_TypeDefinitionIndex)->GetStaticField(0x19AC8);
		}
		static ::System::Func_2<::Class_2_FD0167EB507B9435_2*, ::System::Int32>** StaticGet___9__42_1()
		{
			return (::System::Func_2<::Class_2_FD0167EB507B9435_2*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStage___c_TypeDefinitionIndex)->GetStaticField(0x19AD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _get_DifficultyModifyValue_b__42_1(::Class_2_FD0167EB507B9435_2* x)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_FD0167EB507B9435_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_DIFFICULTYMODIFYVALUE_B__42_1_OFFSET))(this, x);
		}

		::System::Boolean _get_LatestBatteNode_b__89_0(::RPG::Client::GridFightStageNode* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightStageNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_LATESTBATTENODE_B__89_0_OFFSET))(this, node);
		}

		::System::Boolean _get_LatestMonsterNode_b__91_0(::RPG::Client::GridFightStageNode* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightStageNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_LATESTMONSTERNODE_B__91_0_OFFSET))(this, node);
		}

		::System::Boolean _get_Progress_b__95_0(::RPG::Client::GridFightStageNode* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightStageNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_PROGRESS_B__95_0_OFFSET))(this, x);
		}

		::RPG::Client::GridFightMonsterAffixConfig* _get_AffixDataList_b__105_0(::Class_1_21C7581DFE99F091_39* x)
		{
			return ((::RPG::Client::GridFightMonsterAffixConfig*(*)(::PVOID, ::Class_1_21C7581DFE99F091_39*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_AFFIXDATALIST_B__105_0_OFFSET))(this, x);
		}

		::System::Boolean _get_AffixDataList_b__105_1(::RPG::Client::GridFightMonsterAffixConfig* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterAffixConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_AFFIXDATALIST_B__105_1_OFFSET))(this, data);
		}

		::RPG::Client::GridFightMonsterCampConfig* _get_CampDataList_b__107_0(::Class_1_D17272E82AE804C2_367* info)
		{
			return ((::RPG::Client::GridFightMonsterCampConfig*(*)(::PVOID, ::Class_1_D17272E82AE804C2_367*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_CAMPDATALIST_B__107_0_OFFSET))(this, info);
		}

		::System::Boolean _get_CampDataList_b__107_1(::RPG::Client::GridFightMonsterCampConfig* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_CAMPDATALIST_B__107_1_OFFSET))(this, data);
		}
	};
}
