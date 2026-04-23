#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightScoreRewardConfigRow; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA5D3510)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA5D3550)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE___C__GETALLREWARD_B__2_1_OFFSET UNITYSDK_OFFSET(0xA5D3560)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE___C__GETCANTAKEREWARDSCORERANKLIST_B__4_1_OFFSET UNITYSDK_OFFSET(0xA5D3580)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE___C__GETREWARDDISPLAYDATABYRANKS_B__16_1_OFFSET UNITYSDK_OFFSET(0xA5D35C0)
#define RPG_CLIENT_GRIDFIGHTWEEKLYSCORE___C___GETMAXSCORE_B__13_0_OFFSET UNITYSDK_OFFSET(0xA5D35A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightWeeklyScore___c_TypeDefinitionIndex = 60323;

	class GridFightWeeklyScore___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::GridFightScoreRewardConfigRow*, ::System::UInt32>** StaticGet___9__16_1()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightScoreRewardConfigRow*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightWeeklyScore___c_TypeDefinitionIndex)->GetStaticField(0x1C560);
		}
		static ::System::Func_2<::RPG::GameCore::GridFightScoreRewardConfigRow*, ::System::UInt32>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightScoreRewardConfigRow*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightWeeklyScore___c_TypeDefinitionIndex)->GetStaticField(0x1C568);
		}
		static ::RPG::Client::GridFightWeeklyScore___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightWeeklyScore___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightWeeklyScore___c_TypeDefinitionIndex)->GetStaticField(0x1C570);
		}
		static ::System::Func_2<::RPG::GameCore::GridFightScoreRewardConfigRow*, ::System::UInt32>** StaticGet___9__4_1()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightScoreRewardConfigRow*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightWeeklyScore___c_TypeDefinitionIndex)->GetStaticField(0x1C578);
		}
		static ::System::Func_2<::RPG::GameCore::GridFightScoreRewardConfigRow*, ::System::UInt32>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightScoreRewardConfigRow*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightWeeklyScore___c_TypeDefinitionIndex)->GetStaticField(0x1C580);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetAllReward_b__2_1(::RPG::GameCore::GridFightScoreRewardConfigRow* config)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GridFightScoreRewardConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE___C__GETALLREWARD_B__2_1_OFFSET))(this, config);
		}

		::System::UInt32 _GetCanTakeRewardScoreRankList_b__4_1(::RPG::GameCore::GridFightScoreRewardConfigRow* config)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GridFightScoreRewardConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE___C__GETCANTAKEREWARDSCORERANKLIST_B__4_1_OFFSET))(this, config);
		}

		::System::UInt32 __GetMaxScore_b__13_0(::RPG::GameCore::GridFightScoreRewardConfigRow* config)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GridFightScoreRewardConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE___C___GETMAXSCORE_B__13_0_OFFSET))(this, config);
		}

		::System::UInt32 _GetRewardDisplayDataByRanks_b__16_1(::RPG::GameCore::GridFightScoreRewardConfigRow* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GridFightScoreRewardConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTWEEKLYSCORE___C__GETREWARDDISPLAYDATABYRANKS_B__16_1_OFFSET))(this, x);
		}
	};
}
