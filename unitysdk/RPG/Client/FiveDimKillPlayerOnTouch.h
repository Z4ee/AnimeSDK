#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_FIVEDIMKILLPLAYERONTOUCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1841C4E0)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimKillPlayerOnTouch_TypeDefinitionIndex = 57692;

	class FiveDimKillPlayerOnTouch : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMKILLPLAYERONTOUCH__CTOR_OFFSET))(this);
		}
	};
}
