#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameNpcStringValueType_TypeDefinitionIndex = 62932;

	enum class HackerGameNpcStringValueType : ::System::Int32
	{
		OnFeverDeathBodyEffectKey = 9,
		OnDeathEvent = 2,
		OnFeverDamagedEffectKey = 6,
		None = 0,
		OnEscapeEffectKey = 10,
		OnDeathBodyEffectKey = 8,
		EntityTag = 11,
		OnDamagedEffectKey = 5,
		OnCreatedEvent = 4,
		OnDamagedCameraShakeKey = 7,
		OnBeforeMoveEvent = 3,
		OnDamagedEvent = 1,
	};
}
