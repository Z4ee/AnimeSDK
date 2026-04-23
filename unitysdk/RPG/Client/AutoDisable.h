#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_AUTODISABLE_START_OFFSET UNITYSDK_OFFSET(0x9D655B0)
#define RPG_CLIENT_AUTODISABLE_UPDATE_OFFSET UNITYSDK_OFFSET(0x9D65600)
#define RPG_CLIENT_AUTODISABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x9D656A0)

namespace RPG::Client
{
	inline static constexpr unsigned int AutoDisable_TypeDefinitionIndex = 62990;

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
