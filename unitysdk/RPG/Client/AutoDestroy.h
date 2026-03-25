#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_AUTODESTROY_START_OFFSET UNITYSDK_OFFSET(0x9103210)
#define RPG_CLIENT_AUTODESTROY_UPDATE_OFFSET UNITYSDK_OFFSET(0x9103260)
#define RPG_CLIENT_AUTODESTROY__CTOR_OFFSET UNITYSDK_OFFSET(0x91032F0)

namespace RPG::Client
{
	inline static constexpr unsigned int AutoDestroy_TypeDefinitionIndex = 55766;

	class AutoDestroy : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single _LifeTime; // 0x18
		::System::Single Field_5_1; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTODESTROY__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTODESTROY_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTODESTROY_UPDATE_OFFSET))(this);
		}
	};
}
