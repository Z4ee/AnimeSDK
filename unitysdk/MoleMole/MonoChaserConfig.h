#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define MOLEMOLE_MONOCHASERCONFIG_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x190917A0)
#define MOLEMOLE_MONOCHASERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x190917B0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoChaserConfig_TypeDefinitionIndex = 40246;

	class MonoChaserConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single offsetX; // 0x18
		::System::Single offsetY; // 0x1C
		::System::String* attachPoint; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCHASERCONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_Delta()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCHASERCONFIG_GET_DELTA_OFFSET))(this);
		}
	};
}
