#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define MOLEMOLE_TIMELINE_ZNET_ZNETABILITYSCRIPTSUPPORTBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x199A0E10)

namespace MoleMole::Timeline::ZNet
{
	inline static constexpr unsigned int ZNetAbilityScriptSupportBehavior_TypeDefinitionIndex = 67021;

	class ZNetAbilityScriptSupportBehavior : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETABILITYSCRIPTSUPPORTBEHAVIOR__CTOR_OFFSET))(this);
		}
	};
}
