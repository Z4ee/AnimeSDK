#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TeamDataRefreshMask_TypeDefinitionIndex = 65102;

	enum class TeamDataRefreshMask : ::System::Int32
	{
		Team = 1,
		MemberList = 2,
		MP = 2,
		MemberSP = 4,
		MemberHP = 8,
		MemberData = 16,
		Full = 27,
		MemberListFull = 26,
	};
}
