#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardTeamType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDSHOWREWARDPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBF8910)

namespace RPG::Client::FateRin::CaseBoard
{
	inline static constexpr unsigned int CaseBoardShowRewardParams_TypeDefinitionIndex = 79486;

	class CaseBoardShowRewardParams : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FateRinCaseBoardTeamType>* Slots; // 0x10
		::System::Single ToProgress; // 0x18
		::System::Single FromProgress; // 0x1C
		::System::Single GrowthDuration; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDSHOWREWARDPARAMS__CTOR_OFFSET))(this);
		}
	};
}
