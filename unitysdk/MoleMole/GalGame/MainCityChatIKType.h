#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatIKType_TypeDefinitionIndex = 79023;

	enum class MainCityChatIKType : ::System::Int32
	{
		LookAtNpc = 1,
		LookAtPlayer = 0,
		LookAtMember = 3,
		LookAtSceneObject = 2,
	};
}
