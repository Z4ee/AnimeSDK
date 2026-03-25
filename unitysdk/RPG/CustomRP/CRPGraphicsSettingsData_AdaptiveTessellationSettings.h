#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/AdaptiveTessellationDrawControl.h"

#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_ADAPTIVETESSELLATIONSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x16A70610)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPGraphicsSettingsData_AdaptiveTessellationSettings_TypeDefinitionIndex = 29291;

	class CRPGraphicsSettingsData_AdaptiveTessellationSettings : public ::System::Object
	{
	public:
		::System::Boolean Enable; // 0x10
		::System::Boolean ForceDisable; // 0x11
		::System::Boolean ForceUsingTexture; // 0x12
		::System::Boolean EnableCulling; // 0x13
		::System::Boolean ForceComplexDicingPattern; // 0x14
		::System::Boolean ForceWireframe; // 0x15
		::System::Boolean EnableWaterSSR; // 0x16
		::UnityEngine::Rendering::AdaptiveTessellationDrawControl DrawControl; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_ADAPTIVETESSELLATIONSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
