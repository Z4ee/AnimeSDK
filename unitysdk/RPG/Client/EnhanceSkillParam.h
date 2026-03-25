#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_ENHANCESKILLPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x95FDDB0)

namespace RPG::Client
{
	inline static constexpr unsigned int EnhanceSkillParam_TypeDefinitionIndex = 58915;

	class EnhanceSkillParam : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Entity; // 0x10
		::RPG::Client::UISkillIndex SkillIndex; // 0x18
		::System::Boolean RefreshImmediate; // 0x1C
		::System::Boolean IsShow; // 0x1D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENHANCESKILLPARAM__CTOR_OFFSET))(this);
		}
	};
}
