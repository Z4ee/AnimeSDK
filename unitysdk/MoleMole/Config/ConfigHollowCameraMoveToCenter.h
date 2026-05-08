#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAMOVETOCENTER__CTOR_OFFSET UNITYSDK_OFFSET(0xFB05690)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowCameraMoveToCenter_TypeDefinitionIndex = 63169;

	class ConfigHollowCameraMoveToCenter : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 center; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAMOVETOCENTER__CTOR_OFFSET))(this);
		}
	};
}
