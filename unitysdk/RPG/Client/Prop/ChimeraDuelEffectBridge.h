#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_PROP_CHIMERADUELEFFECTBRIDGE__CTOR_OFFSET UNITYSDK_OFFSET(0xDC13650)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelEffectBridge_TypeDefinitionIndex = 77827;

	class ChimeraDuelEffectBridge : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELEFFECTBRIDGE__CTOR_OFFSET))(this);
		}
	};
}
