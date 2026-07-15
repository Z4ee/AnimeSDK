#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomVolumeComponent.h"

namespace UnityEngine::Rendering { class BoolParameter; }

#define RPG_CUSTOMRP_RPGFXAA_ISACTIVEIMPL_OFFSET UNITYSDK_OFFSET(0x16C05980)
#define RPG_CUSTOMRP_RPGFXAA__CTOR_OFFSET UNITYSDK_OFFSET(0x16C05A60)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGFXAA_TypeDefinitionIndex = 36264;

	class RPGFXAA : public ::RPG::CustomRP::CustomVolumeComponent
	{
	public:
		::UnityEngine::Rendering::BoolParameter* FastMode; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFXAA__CTOR_OFFSET))(this);
		}

		::System::Boolean IsActiveImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFXAA_ISACTIVEIMPL_OFFSET))(this);
		}
	};
}
