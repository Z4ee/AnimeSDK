#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_CHENLINGPREPARECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x935A1C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingPrepareConfig_TypeDefinitionIndex = 59374;

	class ChenLingPrepareConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single DragDistance; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPREPARECONFIG__CTOR_OFFSET))(this);
		}
	};
}
