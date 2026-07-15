#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_UI3DCAMERAFREELOOKSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x14C72E80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UI3DCameraFreeLookSetting_TypeDefinitionIndex = 54967;

	class UI3DCameraFreeLookSetting : public ::System::Object
	{
	public:
		::UnityEngine::Transform* Target; // 0x10
		::UnityEngine::Vector3 RailTail; // 0x18
		::System::Single MaxRotationX; // 0x24
		::UnityEngine::Vector3 RailHead; // 0x28
		::System::Single Pitch; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSETTING__CTOR_OFFSET))(this);
		}
	};
}
