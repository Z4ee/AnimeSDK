#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define MOLEMOLE_TIMELINE_ZNET_ZNETABILITYSCRIPTSUPPORTBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x161022B0)

namespace MoleMole::Timeline::ZNet
{
	inline static constexpr unsigned int ZNetAbilityScriptSupportBehavior_TypeDefinitionIndex = 51706;

	class ZNetAbilityScriptSupportBehavior : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETABILITYSCRIPTSUPPORTBEHAVIOR__CTOR_OFFSET))(this);
		}
	};
}
