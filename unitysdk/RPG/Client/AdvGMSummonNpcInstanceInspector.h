#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_ADVGMSUMMONNPCINSTANCEINSPECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x901F630)

namespace RPG::Client
{
	inline static constexpr unsigned int AdvGMSummonNpcInstanceInspector_TypeDefinitionIndex = 59603;

	class AdvGMSummonNpcInstanceInspector : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVGMSUMMONNPCINSTANCEINSPECTOR__CTOR_OFFSET))(this);
		}
	};
}
