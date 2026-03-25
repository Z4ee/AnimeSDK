#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_358;
class Class_2_FD0167EB507B9435_2;
namespace RPG::Client { class GridFightMonsterAffixConfig; }
namespace RPG::Client { class GridFightMonsterCampConfig; }
namespace RPG::Client { class GridFightStageNode; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTSTAGE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x98B3640)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x98B3680)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_AFFIXDATALIST_B__102_0_OFFSET UNITYSDK_OFFSET(0x98B3B00)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_AFFIXDATALIST_B__102_1_OFFSET UNITYSDK_OFFSET(0x98B3B70)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_CAMPDATALIST_B__104_0_OFFSET UNITYSDK_OFFSET(0x98B3B80)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_CAMPDATALIST_B__104_1_OFFSET UNITYSDK_OFFSET(0x98B3C00)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_DIFFICULTYMODIFYVALUE_B__42_1_OFFSET UNITYSDK_OFFSET(0x98B3690)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_LATESTBATTENODE_B__88_0_OFFSET UNITYSDK_OFFSET(0x98B36B0)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_LATESTMONSTERNODE_B__90_0_OFFSET UNITYSDK_OFFSET(0x98B3AA0)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_PROGRESS_B__94_0_OFFSET UNITYSDK_OFFSET(0x98B3AE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightStage___c_TypeDefinitionIndex = 52979;

	class GridFightStage___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightStageNode*, ::System::Boolean>** StaticGet___9__88_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightStageNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStage___c_TypeDefinitionIndex)->GetStaticField(0x1A370);
		}
		static ::System::Func_2<::Class_2_FD0167EB507B9435_2*, ::System::Int32>** StaticGet___9__42_1()
		{
			return (::System::Func_2<::Class_2_FD0167EB507B9435_2*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStage___c_TypeDefinitionIndex)->GetStaticField(0x1A378);
		}
		static ::System::Func_2<::RPG::Client::GridFightMonsterAffixConfig*, ::System::Boolean>** StaticGet___9__102_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterAffixConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStage___c_TypeDefinitionIndex)->GetStaticField(0x1A380);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightMonsterAffixConfig*>** StaticGet___9__102_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightMonsterAffixConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStage___c_TypeDefinitionIndex)->GetStaticField(0x1A388);
		}
		static ::System::Func_2<::Class_1_FA4F4A67B1C04320_358*, ::RPG::Client::GridFightMonsterCampConfig*>** StaticGet___9__104_0()
		{
			return (::System::Func_2<::Class_1_FA4F4A67B1C04320_358*, ::RPG::Client::GridFightMonsterCampConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStage___c_TypeDefinitionIndex)->GetStaticField(0x1A390);
		}
		static ::System::Func_2<::RPG::Client::GridFightStageNode*, ::System::Boolean>** StaticGet___9__94_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightStageNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStage___c_TypeDefinitionIndex)->GetStaticField(0x1A398);
		}
		static ::System::Func_2<::RPG::Client::GridFightStageNode*, ::System::Boolean>** StaticGet___9__90_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightStageNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStage___c_TypeDefinitionIndex)->GetStaticField(0x1A3A0);
		}
		static ::RPG::Client::GridFightStage___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightStage___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightStage___c_TypeDefinitionIndex)->GetStaticField(0x1A3A8);
		}
		static ::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::Boolean>** StaticGet___9__104_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStage___c_TypeDefinitionIndex)->GetStaticField(0x1A3B0);
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

		::System::Boolean _get_LatestBatteNode_b__88_0(::RPG::Client::GridFightStageNode* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightStageNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_LATESTBATTENODE_B__88_0_OFFSET))(this, node);
		}

		::System::Boolean _get_LatestMonsterNode_b__90_0(::RPG::Client::GridFightStageNode* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightStageNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_LATESTMONSTERNODE_B__90_0_OFFSET))(this, node);
		}

		::System::Boolean _get_Progress_b__94_0(::RPG::Client::GridFightStageNode* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightStageNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_PROGRESS_B__94_0_OFFSET))(this, x);
		}

		::RPG::Client::GridFightMonsterAffixConfig* _get_AffixDataList_b__102_0(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightMonsterAffixConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_AFFIXDATALIST_B__102_0_OFFSET))(this, id);
		}

		::System::Boolean _get_AffixDataList_b__102_1(::RPG::Client::GridFightMonsterAffixConfig* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterAffixConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_AFFIXDATALIST_B__102_1_OFFSET))(this, data);
		}

		::RPG::Client::GridFightMonsterCampConfig* _get_CampDataList_b__104_0(::Class_1_FA4F4A67B1C04320_358* info)
		{
			return ((::RPG::Client::GridFightMonsterCampConfig*(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_358*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_CAMPDATALIST_B__104_0_OFFSET))(this, info);
		}

		::System::Boolean _get_CampDataList_b__104_1(::RPG::Client::GridFightMonsterCampConfig* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_CAMPDATALIST_B__104_1_OFFSET))(this, data);
		}
	};
}
