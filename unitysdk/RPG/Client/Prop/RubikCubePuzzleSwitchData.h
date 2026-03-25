#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/RubikCubeGroup.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCHDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA15C4E0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RubikCubePuzzleSwitchData_TypeDefinitionIndex = 64288;

	class RubikCubePuzzleSwitchData : public ::System::Object
	{
	public:
		::RPG::Client::Prop::RubikCubeGroup AttachGroup; // 0x10
		::UnityEngine::GameObject* Obj; // 0x18
		::UnityEngine::GameObject* AttachCube; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCHDATA__CTOR_OFFSET))(this);
		}
	};
}
