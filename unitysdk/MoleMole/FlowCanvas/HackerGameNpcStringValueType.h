#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameNpcStringValueType_TypeDefinitionIndex = 70054;

	enum class HackerGameNpcStringValueType : ::System::Int32
	{
		OnFeverDamagedEffectKey = 6,
		OnDamagedCameraShakeKey = 7,
		OnFeverDeathBodyEffectKey = 9,
		EntityTag = 11,
		OnDeathEvent = 2,
		OnDamagedEffectKey = 5,
		OnDamagedEvent = 1,
		OnCreatedEvent = 4,
		OnBeforeMoveEvent = 3,
		None = 0,
		OnEscapeEffectKey = 10,
		OnDeathBodyEffectKey = 8,
	};
}
