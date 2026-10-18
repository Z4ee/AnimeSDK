#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeComponent.h"

#define RPG_CUSTOMRP_CUSTOMVOLUMECOMPONENT_ISACTIVEIMPL_OFFSET UNITYSDK_OFFSET(0x1F26DCE0)
#define RPG_CUSTOMRP_CUSTOMVOLUMECOMPONENT_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1F26DC50)
#define RPG_CUSTOMRP_CUSTOMVOLUMECOMPONENT_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1F26DCD0)
#define RPG_CUSTOMRP_CUSTOMVOLUMECOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F26DCF0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CustomVolumeComponent_TypeDefinitionIndex = 35441;

	class CustomVolumeComponent : public ::UnityEngine::Rendering::VolumeComponent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMVOLUMECOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMVOLUMECOMPONENT_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMVOLUMECOMPONENT_ISTILECOMPATIBLE_OFFSET))(this);
		}

		::System::Boolean IsActiveImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMVOLUMECOMPONENT_ISACTIVEIMPL_OFFSET))(this);
		}
	};
}
