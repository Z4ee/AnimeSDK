#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define CRIWARE_CRITIMELINE_MANA_CRIMANABEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E312DC0)

namespace CriWare::CriTimeline::Mana
{
	inline static constexpr unsigned int CriManaBehaviour_TypeDefinitionIndex = 34377;

	class CriManaBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANABEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
