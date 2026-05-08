#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define MOLEMOLE_ROLEHUDSPCOLORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1703D350)

namespace MoleMole
{
	inline static constexpr unsigned int RoleHudSpColorConfig_TypeDefinitionIndex = 76569;

	class RoleHudSpColorConfig : public ::System::Object
	{
	public:
		::UnityEngine::Color BlinkRampColorA; // 0x10
		::UnityEngine::Color BlinkRampColorB; // 0x20
		::UnityEngine::Color BlinkColorA; // 0x30
		::UnityEngine::Color BlinkColorB; // 0x40
		::System::Boolean EnableBlink; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ROLEHUDSPCOLORCONFIG__CTOR_OFFSET))(this);
		}
	};
}
