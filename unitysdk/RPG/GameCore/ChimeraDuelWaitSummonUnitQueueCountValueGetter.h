#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelValueGetter.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamSelectorType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELWAITSUMMONUNITQUEUECOUNTVALUEGETTER_METHOD_3_45FDF56B9FBD6DD7_OFFSET UNITYSDK_OFFSET(0x196493E0)
#define RPG_GAMECORE_CHIMERADUELWAITSUMMONUNITQUEUECOUNTVALUEGETTER_METHOD_3_7716E2E85E524797_OFFSET UNITYSDK_OFFSET(0x19649380)
#define RPG_GAMECORE_CHIMERADUELWAITSUMMONUNITQUEUECOUNTVALUEGETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x196493D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelWaitSummonUnitQueueCountValueGetter_TypeDefinitionIndex = 15228;

	class ChimeraDuelWaitSummonUnitQueueCountValueGetter : public ::RPG::GameCore::BaseChimeraDuelValueGetter
	{
	public:
		::RPG::GameCore::ChimeraDuelTeamSelectorType TeamSelectorType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELWAITSUMMONUNITQUEUECOUNTVALUEGETTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7716E2E85E524797(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelWaitSummonUnitQueueCountValueGetter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelWaitSummonUnitQueueCountValueGetter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELWAITSUMMONUNITQUEUECOUNTVALUEGETTER_METHOD_3_7716E2E85E524797_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_45FDF56B9FBD6DD7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelWaitSummonUnitQueueCountValueGetter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelWaitSummonUnitQueueCountValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELWAITSUMMONUNITQUEUECOUNTVALUEGETTER_METHOD_3_45FDF56B9FBD6DD7_OFFSET))(a1, a2);
		}
	};
}
