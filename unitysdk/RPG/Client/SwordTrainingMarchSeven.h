#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_SWORDTRAININGMARCHSEVEN__CTOR_OFFSET UNITYSDK_OFFSET(0xB257EE0)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingMarchSeven_TypeDefinitionIndex = 67182;

	class SwordTrainingMarchSeven : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGMARCHSEVEN__CTOR_OFFSET))(this);
		}
	};
}
