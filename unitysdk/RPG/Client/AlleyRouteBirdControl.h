#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_ALLEYROUTEBIRDCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xB306C80)

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyRouteBirdControl_TypeDefinitionIndex = 58274;

	class AlleyRouteBirdControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDCONTROL__CTOR_OFFSET))(this);
		}
	};
}
