#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_ACTIONSKILLNOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0xC3AC880)

namespace RPG::Client
{
	inline static constexpr unsigned int ActionSkillNotify_TypeDefinitionIndex = 72353;

	class ActionSkillNotify : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Entity; // 0x10
		::System::Int32 SkillIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIONSKILLNOTIFY__CTOR_OFFSET))(this);
		}
	};
}
