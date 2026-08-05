#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatIKType_TypeDefinitionIndex = 78898;

	enum class MainCityChatIKType : ::System::Int32
	{
		LookAtMember = 3,
		LookAtPlayer = 0,
		LookAtSceneObject = 2,
		LookAtNpc = 1,
	};
}
