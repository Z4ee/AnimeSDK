#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EReplayTag_TypeDefinitionIndex = 53664;

	enum class EReplayTag : ::System::Int32
	{
		Undefine = 0,
		Stage = 1,
		Avatar = 2,
		Monster = 3,
		TrialPlayer = 4,
		InsertAction = 5,
		OneMore = 6,
		SnapshotHashMismatch = 7,
		OperationFail = 8,
		QuitBattle = 9,
		AutoBattle = 10,
		RandomCountMismatch = 11,
		StateKept3Frame = 12,
		VerifyTimeout = 13,
		ServerException = 14,
		ClientTag_Start = 15,
		Platform = 16,
		LocalExcelJson = 17,
		DEBUG_ForceVerifyError = 18,
		Tutorial = 19,
		OpBlockedBeforeBattle = 20,
		DEBUG_Suspension = 21,
	};
}
