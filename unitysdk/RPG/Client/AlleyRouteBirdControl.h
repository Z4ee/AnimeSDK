#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_ALLEYROUTEBIRDCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x17EE97E0)

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyRouteBirdControl_TypeDefinitionIndex = 59536;

	class AlleyRouteBirdControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDCONTROL__CTOR_OFFSET))(this);
		}
	};
}
