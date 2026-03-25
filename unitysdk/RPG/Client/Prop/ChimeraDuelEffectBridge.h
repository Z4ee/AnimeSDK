#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_PROP_CHIMERADUELEFFECTBRIDGE_START_OFFSET UNITYSDK_OFFSET(0xA046FA0)
#define RPG_CLIENT_PROP_CHIMERADUELEFFECTBRIDGE__CTOR_OFFSET UNITYSDK_OFFSET(0xA046FE0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelEffectBridge_TypeDefinitionIndex = 63748;

	class ChimeraDuelEffectBridge : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELEFFECTBRIDGE__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELEFFECTBRIDGE_START_OFFSET))(this);
		}
	};
}
