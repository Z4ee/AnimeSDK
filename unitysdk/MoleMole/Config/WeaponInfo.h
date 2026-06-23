#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_CONFIG_WEAPONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3629E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int WeaponInfo_TypeDefinitionIndex = 46434;

	class WeaponInfo : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 StartRotation; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_WEAPONINFO__CTOR_OFFSET))(this);
		}
	};
}
