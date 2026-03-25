#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_NPCWARNINGTIPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9DF1950)

namespace RPG::Client
{
	inline static constexpr unsigned int NPCWarningTipConfig_TypeDefinitionIndex = 56462;

	class NPCWarningTipConfig : public ::System::Object
	{
	public:
		::System::String* AssetPath; // 0x10
		::UnityEngine::GameObject* Target; // 0x18
		::RPG::GameCore::GameEntity* TargetEntity; // 0x20
		::UnityEngine::Vector3 Offset; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCWARNINGTIPCONFIG__CTOR_OFFSET))(this);
		}
	};
}
