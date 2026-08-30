#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/ViewSide.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPG_CLIENT_SHOTTEMPLATERUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF84090)

namespace RPG::Client
{
	inline static constexpr unsigned int ShotTemplateRuntime_TypeDefinitionIndex = 69656;

	class ShotTemplateRuntime : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Int32 ActorCount; // 0x18
		::UnityEngine::Vector2 Composition1; // 0x1C
		::UnityEngine::Vector2 Composition2; // 0x24
		::System::Single Yaw; // 0x2C
		::System::Single Pitch; // 0x30
		::System::Single Fov; // 0x34
		::System::Single ViewSize; // 0x38
		::Cinemachine::ViewSide Side; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOTTEMPLATERUNTIME__CTOR_OFFSET))(this);
		}
	};
}
