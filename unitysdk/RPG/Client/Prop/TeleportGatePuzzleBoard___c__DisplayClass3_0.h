#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CB49A9A8DDA83A48;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::Prop { class TeleportGatePuzzleBoard; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA16A6B0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD___C__DISPLAYCLASS3_0___INITTELEPORTGATEPUZZLEBOARD_B__0_OFFSET UNITYSDK_OFFSET(0xA16E490)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD___C__DISPLAYCLASS3_0___INITTELEPORTGATEPUZZLEBOARD_B__1_OFFSET UNITYSDK_OFFSET(0xA16E950)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD___C__DISPLAYCLASS3_0___INITTELEPORTGATEPUZZLEBOARD_B__2_OFFSET UNITYSDK_OFFSET(0xA16ED50)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int TeleportGatePuzzleBoard___c__DisplayClass3_0_TypeDefinitionIndex = 64353;

	class TeleportGatePuzzleBoard___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::TeleportGatePuzzleBoard* __4__this; // 0x10
		::Class_1_CB49A9A8DDA83A48* gateLinkInfo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void __InitTeleportGatePuzzleBoard_b__0(::UnityEngine::GameObject* go, ::RPG::Client::OpenWorld::StreamingItemData* itemData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD___C__DISPLAYCLASS3_0___INITTELEPORTGATEPUZZLEBOARD_B__0_OFFSET))(this, go, itemData);
		}

		::System::Void __InitTeleportGatePuzzleBoard_b__1(::UnityEngine::GameObject* last, ::UnityEngine::GameObject* now, ::RPG::Client::OpenWorld::StreamingItemData* itemData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD___C__DISPLAYCLASS3_0___INITTELEPORTGATEPUZZLEBOARD_B__1_OFFSET))(this, last, now, itemData);
		}

		::System::Void __InitTeleportGatePuzzleBoard_b__2(::UnityEngine::GameObject* go, ::RPG::Client::OpenWorld::StreamingItemData* itemData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD___C__DISPLAYCLASS3_0___INITTELEPORTGATEPUZZLEBOARD_B__2_OFFSET))(this, go, itemData);
		}
	};
}
