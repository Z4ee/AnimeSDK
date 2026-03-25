#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_QA_DEBUGANIMATORINFOPANEL_SHOWENTITY_OFFSET UNITYSDK_OFFSET(0xAAFF420)
#define RPG_QA_DEBUGANIMATORINFOPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0xAAFF430)

namespace RPG::QA
{
	inline static constexpr unsigned int DebugAnimatorInfoPanel_TypeDefinitionIndex = 41861;

	class DebugAnimatorInfoPanel : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_QA_DEBUGANIMATORINFOPANEL__CTOR_OFFSET))(this);
		}

		static ::System::Void ShowEntity(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_QA_DEBUGANIMATORINFOPANEL_SHOWENTITY_OFFSET))(entity);
		}
	};
}
