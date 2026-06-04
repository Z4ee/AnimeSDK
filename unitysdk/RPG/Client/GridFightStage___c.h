#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_42;
class Class_1_D17272E82AE804C2_380;
class Class_2_FD0167EB507B9435_2;
namespace RPG::Client { class GridFightMonsterAffixConfig; }
namespace RPG::Client { class GridFightMonsterCampConfig; }
namespace RPG::Client { class GridFightStageNode; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTSTAGE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBC042A0)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBC042E0)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_AFFIXDATALIST_B__105_0_OFFSET UNITYSDK_OFFSET(0xBC04540)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_AFFIXDATALIST_B__105_1_OFFSET UNITYSDK_OFFSET(0xBC045E0)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_CAMPDATALIST_B__107_0_OFFSET UNITYSDK_OFFSET(0xBC045F0)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_CAMPDATALIST_B__107_1_OFFSET UNITYSDK_OFFSET(0xBC04690)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_DIFFICULTYMODIFYVALUE_B__42_1_OFFSET UNITYSDK_OFFSET(0xBC042F0)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_LATESTBATTENODE_B__89_0_OFFSET UNITYSDK_OFFSET(0xBC04310)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_LATESTMONSTERNODE_B__91_0_OFFSET UNITYSDK_OFFSET(0xBC044E0)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_PROGRESS_B__95_0_OFFSET UNITYSDK_OFFSET(0xBC04520)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightStage___c_TypeDefinitionIndex = 61002;

	class GridFightStage___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightStage___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightStage___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightStage___c_TypeDefinitionIndex)->GetStaticField(0x37440);
		}
		static ::System::Func_2<::RPG::Client::GridFightStageNode*, ::System::Boolean>** StaticGet___9__95_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightStageNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStage___c_TypeDefinitionIndex)->GetStaticField(0x37448);
		}
		static ::System::Func_2<::RPG::Client::GridFightStageNode*, ::System::Boolean>** StaticGet___9__89_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightStageNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStage___c_TypeDefinitionIndex)->GetStaticField(0x37450);
		}
		static ::System::Func_2<::Class_1_21C7581DFE99F091_42*, ::RPG::Client::GridFightMonsterAffixConfig*>** StaticGet___9__105_0()
		{
			return (::System::Func_2<::Class_1_21C7581DFE99F091_42*, ::RPG::Client::GridFightMonsterAffixConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStage___c_TypeDefinitionIndex)->GetStaticField(0x37458);
		}
		static ::System::Func_2<::Class_2_FD0167EB507B9435_2*, ::System::Int32>** StaticGet___9__42_1()
		{
			return (::System::Func_2<::Class_2_FD0167EB507B9435_2*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStage___c_TypeDefinitionIndex)->GetStaticField(0x37460);
		}
		static ::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::Boolean>** StaticGet___9__107_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStage___c_TypeDefinitionIndex)->GetStaticField(0x37468);
		}
		static ::System::Func_2<::RPG::Client::GridFightStageNode*, ::System::Boolean>** StaticGet___9__91_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightStageNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStage___c_TypeDefinitionIndex)->GetStaticField(0x37470);
		}
		static ::System::Func_2<::Class_1_D17272E82AE804C2_380*, ::RPG::Client::GridFightMonsterCampConfig*>** StaticGet___9__107_0()
		{
			return (::System::Func_2<::Class_1_D17272E82AE804C2_380*, ::RPG::Client::GridFightMonsterCampConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStage___c_TypeDefinitionIndex)->GetStaticField(0x37478);
		}
		static ::System::Func_2<::RPG::Client::GridFightMonsterAffixConfig*, ::System::Boolean>** StaticGet___9__105_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterAffixConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStage___c_TypeDefinitionIndex)->GetStaticField(0x37480);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _get_DifficultyModifyValue_b__42_1(::Class_2_FD0167EB507B9435_2* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_FD0167EB507B9435_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_DIFFICULTYMODIFYVALUE_B__42_1_OFFSET))(this, a1);
		}

		::System::Boolean _get_LatestBatteNode_b__89_0(::RPG::Client::GridFightStageNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightStageNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_LATESTBATTENODE_B__89_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_LatestMonsterNode_b__91_0(::RPG::Client::GridFightStageNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightStageNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_LATESTMONSTERNODE_B__91_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_Progress_b__95_0(::RPG::Client::GridFightStageNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightStageNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_PROGRESS_B__95_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightMonsterAffixConfig* _get_AffixDataList_b__105_0(::Class_1_21C7581DFE99F091_42* a1)
		{
			return ((::RPG::Client::GridFightMonsterAffixConfig*(*)(::PVOID, ::Class_1_21C7581DFE99F091_42*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_AFFIXDATALIST_B__105_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_AffixDataList_b__105_1(::RPG::Client::GridFightMonsterAffixConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterAffixConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_AFFIXDATALIST_B__105_1_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightMonsterCampConfig* _get_CampDataList_b__107_0(::Class_1_D17272E82AE804C2_380* a1)
		{
			return ((::RPG::Client::GridFightMonsterCampConfig*(*)(::PVOID, ::Class_1_D17272E82AE804C2_380*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_CAMPDATALIST_B__107_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_CampDataList_b__107_1(::RPG::Client::GridFightMonsterCampConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_CAMPDATALIST_B__107_1_OFFSET))(this, a1);
		}
	};
}
