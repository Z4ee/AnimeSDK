#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOFISHPOLEDUMMY__CTOR_OFFSET UNITYSDK_OFFSET(0x118E94E0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoFishPoleDummy_TypeDefinitionIndex = 80242;

	class MonoFishPoleDummy : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* WeaponStartPoint; // 0x18
		::UnityEngine::Transform* WeaponEndPoint; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFISHPOLEDUMMY__CTOR_OFFSET))(this);
		}
	};
}
