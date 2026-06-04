#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_FIVEDIMKILLPLAYERONTOUCH__CTOR_OFFSET UNITYSDK_OFFSET(0xBA406D0)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimKillPlayerOnTouch_TypeDefinitionIndex = 56453;

	class FiveDimKillPlayerOnTouch : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMKILLPLAYERONTOUCH__CTOR_OFFSET))(this);
		}
	};
}
