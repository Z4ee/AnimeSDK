#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseChallengeTargetData.h"
#include "unitysdk/RPG/Client/ChallengeTargetState.h"

namespace RPG::GameCore { class ChallengeTargetConfigRow; }
namespace System { class Object; }

#define RPG_CLIENT_SCORECHALLENGETARGETDATA_CALCULATETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xB154E70)
#define RPG_CLIENT_SCORECHALLENGETARGETDATA_SETCHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xB154EE0)
#define RPG_CLIENT_SCORECHALLENGETARGETDATA_UPDATECHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xB154DB0)
#define RPG_CLIENT_SCORECHALLENGETARGETDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB154D70)
#define RPG_CLIENT_SCORECHALLENGETARGETDATA___IFIXBASEPROXY_SETCHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xB155010)
#define RPG_CLIENT_SCORECHALLENGETARGETDATA___IFIXBASEPROXY_UPDATECHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xB154FA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ScoreChallengeTargetData_TypeDefinitionIndex = 58139;

	class ScoreChallengeTargetData : public ::RPG::Client::BaseChallengeTargetData
	{
	public:
		::System::Void _ctor(::RPG::GameCore::ChallengeTargetConfigRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeTargetConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCORECHALLENGETARGETDATA__CTOR_OFFSET))(this, row);
		}

		::System::Void UpdateChallengeTargetState(::System::Object* targetParams, ::System::Boolean isFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCORECHALLENGETARGETDATA_UPDATECHALLENGETARGETSTATE_OFFSET))(this, targetParams, isFinish);
		}

		::RPG::Client::ChallengeTargetState CalculateTargetState(::System::Object* targetParams, ::System::Boolean isFinish)
		{
			return ((::RPG::Client::ChallengeTargetState(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCORECHALLENGETARGETDATA_CALCULATETARGETSTATE_OFFSET))(this, targetParams, isFinish);
		}

		::System::Void SetChallengeTargetState(::System::Object* targetParams, ::System::Boolean isFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCORECHALLENGETARGETDATA_SETCHALLENGETARGETSTATE_OFFSET))(this, targetParams, isFinish);
		}

		::System::Void __iFixBaseProxy_UpdateChallengeTargetState(::System::Object* P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCORECHALLENGETARGETDATA___IFIXBASEPROXY_UPDATECHALLENGETARGETSTATE_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_SetChallengeTargetState(::System::Object* P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCORECHALLENGETARGETDATA___IFIXBASEPROXY_SETCHALLENGETARGETSTATE_OFFSET))(this, P0, P1);
		}
	};
}
