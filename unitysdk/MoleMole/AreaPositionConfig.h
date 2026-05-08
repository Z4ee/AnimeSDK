#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class ExpeditionAreaNavConfig; }

#define MOLEMOLE_AREAPOSITIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x159BAF40)

namespace MoleMole
{
	inline static constexpr unsigned int AreaPositionConfig_TypeDefinitionIndex = 73699;

	class AreaPositionConfig : public ::System::Object
	{
	public:
		::MoleMole::ExpeditionAreaNavConfig* NavConfig; // 0x10
		::UnityEngine::Vector2 MobilePosition; // 0x18
		::UnityEngine::Vector2 ConsolePosition; // 0x20
		::UnityEngine::Vector2 Position; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AREAPOSITIONCONFIG__CTOR_OFFSET))(this);
		}
	};
}
