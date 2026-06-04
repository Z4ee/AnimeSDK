#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/System/Object.h"

class Class_1_D1797279B49332E9;
namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_ENHANCESKILLPARAM_GETSHOWENHANCEEFFECT_OFFSET UNITYSDK_OFFSET(0xB90A5D0)
#define RPG_CLIENT_ENHANCESKILLPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xB90A740)

namespace RPG::Client
{
	inline static constexpr unsigned int EnhanceSkillParam_TypeDefinitionIndex = 67227;

	class EnhanceSkillParam : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Entity; // 0x10
		::System::Boolean RefreshImmediate; // 0x18
		::System::Boolean IsShow; // 0x19
		::RPG::Client::UISkillIndex SkillIndex; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENHANCESKILLPARAM__CTOR_OFFSET))(this);
		}

		::System::Boolean GetShowEnhanceEffect(::RPG::GameCore::GameEntity* a1, ::Class_1_D1797279B49332E9* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_D1797279B49332E9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENHANCESKILLPARAM_GETSHOWENHANCEEFFECT_OFFSET))(this, a1, a2);
		}
	};
}
