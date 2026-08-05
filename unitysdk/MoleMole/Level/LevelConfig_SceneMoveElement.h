#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define MOLEMOLE_LEVEL_LEVELCONFIG_SCENEMOVEELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x118E10E0)

namespace MoleMole::Level
{
	inline static constexpr unsigned int LevelConfig_SceneMoveElement_TypeDefinitionIndex = 86301;

	class LevelConfig_SceneMoveElement : public ::System::Object
	{
	public:
		::System::String* objectName; // 0x10
		::System::Boolean isMain; // 0x18
		::System::Int32 loopSegment; // 0x1C
		::UnityEngine::Vector3 direction; // 0x20
		::System::Single initSpeed; // 0x2C
		::System::Single speedUpAcceleration; // 0x30
		::System::Single speedDownAcceleration; // 0x34
		::System::Single maxSpeed; // 0x38
		::System::Single distance; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_LEVELCONFIG_SCENEMOVEELEMENT__CTOR_OFFSET))(this);
		}
	};
}
