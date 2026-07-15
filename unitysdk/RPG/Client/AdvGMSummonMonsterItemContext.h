#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_ADVGMSUMMONMONSTERITEMCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18AAAD90)

namespace RPG::Client
{
	inline static constexpr unsigned int AdvGMSummonMonsterItemContext_TypeDefinitionIndex = 69426;

	class AdvGMSummonMonsterItemContext : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::GameCore::GameEntity* BindingEntity; // 0x18
		::UnityEngine::UI::Text* ItemName; // 0x20
		::UnityEngine::UI::Button* RemoveBtn; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVGMSUMMONMONSTERITEMCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
