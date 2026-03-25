#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_AUTODISABLE_START_OFFSET UNITYSDK_OFFSET(0x9103300)
#define RPG_CLIENT_AUTODISABLE_UPDATE_OFFSET UNITYSDK_OFFSET(0x9103350)
#define RPG_CLIENT_AUTODISABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x91033F0)

namespace RPG::Client
{
	inline static constexpr unsigned int AutoDisable_TypeDefinitionIndex = 55767;

	class AutoDisable : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single LifeTime; // 0x18
		::System::Single Field_5_1; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTODISABLE__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTODISABLE_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTODISABLE_UPDATE_OFFSET))(this);
		}
	};
}
