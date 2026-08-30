#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SingleAdventureCameraLookAtConfigTemplateEnum.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BaseAdventureCameraLookAt; }

#define RPG_CLIENT_SINGLEADVENTURECAMERALOOKATCONFIGTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x196CBA20)

namespace RPG::Client
{
	inline static constexpr unsigned int SingleAdventureCameraLookAtConfigTemplate_TypeDefinitionIndex = 69491;

	class SingleAdventureCameraLookAtConfigTemplate : public ::System::Object
	{
	public:
		::RPG::GameCore::SingleAdventureCameraLookAtConfigTemplateEnum Enum; // 0x10
		::RPG::GameCore::BaseAdventureCameraLookAt* Config; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEADVENTURECAMERALOOKATCONFIGTEMPLATE__CTOR_OFFSET))(this);
		}
	};
}
