#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_STAGE___C__DISPLAYCLASS92_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC901190)
#define RPG_CLIENT_STAGE___C__DISPLAYCLASS92_0__RUNTIMEADDSTREAMINGITEM_B__0_OFFSET UNITYSDK_OFFSET(0xC901FD0)
#define RPG_CLIENT_STAGE___C__DISPLAYCLASS92_0__RUNTIMEADDSTREAMINGITEM_B__1_OFFSET UNITYSDK_OFFSET(0xC902040)
#define RPG_CLIENT_STAGE___C__DISPLAYCLASS92_0__RUNTIMEADDSTREAMINGITEM_B__2_OFFSET UNITYSDK_OFFSET(0xC9020B0)

namespace RPG::Client
{
	inline static constexpr unsigned int Stage___c__DisplayClass92_0_TypeDefinitionIndex = 64974;

	class Stage___c__DisplayClass92_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* entity; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE___C__DISPLAYCLASS92_0__CTOR_OFFSET))(this);
		}

		::System::Void _RuntimeAddStreamingItem_b__0(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE___C__DISPLAYCLASS92_0__RUNTIMEADDSTREAMINGITEM_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void _RuntimeAddStreamingItem_b__1(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE___C__DISPLAYCLASS92_0__RUNTIMEADDSTREAMINGITEM_B__1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RuntimeAddStreamingItem_b__2(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGE___C__DISPLAYCLASS92_0__RUNTIMEADDSTREAMINGITEM_B__2_OFFSET))(this, a1);
		}
	};
}
