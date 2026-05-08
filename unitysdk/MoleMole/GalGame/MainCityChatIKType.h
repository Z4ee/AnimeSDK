#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatIKType_TypeDefinitionIndex = 47374;

	enum class MainCityChatIKType : ::System::Int32
	{
		LookAtMember = 3,
		LookAtSceneObject = 2,
		LookAtNpc = 1,
		LookAtPlayer = 0,
	};
}
