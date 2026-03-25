#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightDraftSelectAction_DraftActionState_TypeDefinitionIndex = 52439;

	enum class GridFightDraftSelectAction_DraftActionState : ::System::Int32
	{
		None = 0,
		WaitSelectRsp = 1,
		WaitRerollRsp = 2,
	};
}
