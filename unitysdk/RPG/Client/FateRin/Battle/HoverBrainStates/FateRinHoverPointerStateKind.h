#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::FateRin::Battle::HoverBrainStates
{
	inline static constexpr unsigned int FateRinHoverPointerStateKind_TypeDefinitionIndex = 79675;

	enum class FateRinHoverPointerStateKind : ::System::Int32
	{
		Idle = 0,
		DraggingInsideSelectArea = 1,
		DraggingReadyToRelease = 2,
		ClickWaitingInitialRelease = 3,
		ClickWaitingConfirmPress = 4,
		ClickConfirmPressing = 5,
		CancelledAwaitingRelease = 6,
	};
}
