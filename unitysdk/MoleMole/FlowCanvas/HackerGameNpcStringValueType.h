#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameNpcStringValueType_TypeDefinitionIndex = 77935;

	enum class HackerGameNpcStringValueType : ::System::Int32
	{
		OnFeverDamagedEffectKey = 6,
		OnDeathEvent = 2,
		None = 0,
		OnFeverDeathBodyEffectKey = 9,
		OnBeforeMoveEvent = 3,
		EntityTag = 11,
		OnDamagedCameraShakeKey = 7,
		OnEscapeEffectKey = 10,
		OnDamagedEvent = 1,
		OnCreatedEvent = 4,
		OnDeathBodyEffectKey = 8,
		OnDamagedEffectKey = 5,
	};
}
