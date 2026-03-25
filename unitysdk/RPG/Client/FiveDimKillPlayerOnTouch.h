#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_FIVEDIMKILLPLAYERONTOUCH__CTOR_OFFSET UNITYSDK_OFFSET(0x96E5170)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimKillPlayerOnTouch_TypeDefinitionIndex = 48907;

	class FiveDimKillPlayerOnTouch : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMKILLPLAYERONTOUCH__CTOR_OFFSET))(this);
		}
	};
}
