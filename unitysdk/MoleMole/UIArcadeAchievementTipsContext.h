#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIARCADEACHIEVEMENTTIPSCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x197DF2F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeAchievementTipsContext_TypeDefinitionIndex = 50910;

	class UIArcadeAchievementTipsContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::UnityEngine::Transform* parent; // 0x28
		::System::Int32 achievementId; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTTIPSCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
