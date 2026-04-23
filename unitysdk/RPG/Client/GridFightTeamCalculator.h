#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameRefData; }
namespace RPG::GameCore { class DynamicValue; }
namespace System::Text { class StringBuilder; }

#define RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR_CALCULATE_OFFSET UNITYSDK_OFFSET(0xA5A8190)
#define RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR_GET__CARRYMARK_OFFSET UNITYSDK_OFFSET(0xA5A7720)
#define RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR_GET__COSTSCORES_OFFSET UNITYSDK_OFFSET(0xA5A7650)
#define RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR_GET__ISINGAME_OFFSET UNITYSDK_OFFSET(0xA5A8100)
#define RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR_GET__NOCARRYMARK_OFFSET UNITYSDK_OFFSET(0xA5A7830)
#define RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR_GET__OLDEXPIREDREFSCORERATIO_OFFSET UNITYSDK_OFFSET(0xA5A7FF0)
#define RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR_GET__OLDREFSCORERATIO_OFFSET UNITYSDK_OFFSET(0xA5A7EE0)
#define RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR_GET__STARSCORES_OFFSET UNITYSDK_OFFSET(0xA5A7580)
#define RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR_GET__TRAITACTIVESCORES_OFFSET UNITYSDK_OFFSET(0xA5A7940)
#define RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR_GET__TRAITEMBLEMTARGETDEFAULTSCORE_OFFSET UNITYSDK_OFFSET(0xA5A7DD0)
#define RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR_GET__TRAITEMBLEMTARGETSCORES_OFFSET UNITYSDK_OFFSET(0xA5A7D00)
#define RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR_GET__TRAITTARGETDEFAULTSCORE_OFFSET UNITYSDK_OFFSET(0xA5A7BF0)
#define RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR_GET__TRAITTARGETSCORES_OFFSET UNITYSDK_OFFSET(0xA5A7B20)
#define RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR_GET__TRAITUNACTIVEDEFAULT_OFFSET UNITYSDK_OFFSET(0xA5A7A10)
#define RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR__CALCULATEAUGMENTPORTALSCORE_OFFSET UNITYSDK_OFFSET(0xA5AAEC0)
#define RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR__CALCULATEEMBLEMSCORE_OFFSET UNITYSDK_OFFSET(0xA5AA080)
#define RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR__CALCULATEROLESCORE_OFFSET UNITYSDK_OFFSET(0xA5A8530)
#define RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA5AC080)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeamCalculator_TypeDefinitionIndex = 59674;

	class GridFightTeamCalculator : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR__CTOR_OFFSET))(this);
		}

		static ::Il2CppArray<::RPG::GameCore::DynamicValue*>* get__StarScores()
		{
			return ((::Il2CppArray<::RPG::GameCore::DynamicValue*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR_GET__STARSCORES_OFFSET))();
		}

		static ::Il2CppArray<::RPG::GameCore::DynamicValue*>* get__CostScores()
		{
			return ((::Il2CppArray<::RPG::GameCore::DynamicValue*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR_GET__COSTSCORES_OFFSET))();
		}

		static ::System::Single get__CarryMark()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR_GET__CARRYMARK_OFFSET))();
		}

		static ::System::Single get__NoCarryMark()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR_GET__NOCARRYMARK_OFFSET))();
		}

		static ::Il2CppArray<::RPG::GameCore::DynamicValue*>* get__TraitActiveScores()
		{
			return ((::Il2CppArray<::RPG::GameCore::DynamicValue*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR_GET__TRAITACTIVESCORES_OFFSET))();
		}

		static ::System::Single get__TraitUnactiveDefault()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR_GET__TRAITUNACTIVEDEFAULT_OFFSET))();
		}

		static ::Il2CppArray<::RPG::GameCore::DynamicValue*>* get__TraitTargetScores()
		{
			return ((::Il2CppArray<::RPG::GameCore::DynamicValue*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR_GET__TRAITTARGETSCORES_OFFSET))();
		}

		static ::System::Single get__TraitTargetDefaultScore()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR_GET__TRAITTARGETDEFAULTSCORE_OFFSET))();
		}

		static ::Il2CppArray<::RPG::GameCore::DynamicValue*>* get__TraitEmblemTargetScores()
		{
			return ((::Il2CppArray<::RPG::GameCore::DynamicValue*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR_GET__TRAITEMBLEMTARGETSCORES_OFFSET))();
		}

		static ::System::Single get__TraitEmblemTargetDefaultScore()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR_GET__TRAITEMBLEMTARGETDEFAULTSCORE_OFFSET))();
		}

		static ::System::Single get__OldRefScoreRatio()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR_GET__OLDREFSCORERATIO_OFFSET))();
		}

		static ::System::Single get__OldExpiredRefScoreRatio()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR_GET__OLDEXPIREDREFSCORERATIO_OFFSET))();
		}

		::System::Boolean get__IsInGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR_GET__ISINGAME_OFFSET))(this);
		}

		::System::Single Calculate(::RPG::Client::GridFightGameRefData* refData, ::System::Text::StringBuilder* logger)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR_CALCULATE_OFFSET))(this, refData, logger);
		}

		::System::Single _CalculateRoleScore(::RPG::Client::GridFightGameRefData* refData, ::System::Text::StringBuilder* logger)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR__CALCULATEROLESCORE_OFFSET))(this, refData, logger);
		}

		::System::Single _CalculateEmblemScore(::RPG::Client::GridFightGameRefData* refData, ::System::Text::StringBuilder* logger)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR__CALCULATEEMBLEMSCORE_OFFSET))(this, refData, logger);
		}

		::System::Single _CalculateAugmentPortalScore(::RPG::Client::GridFightGameRefData* refData, ::System::Text::StringBuilder* logger)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR__CALCULATEAUGMENTPORTALSCORE_OFFSET))(this, refData, logger);
		}
	};
}
