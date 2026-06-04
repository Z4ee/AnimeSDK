#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/SDFVisualizeMethod.h"

#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_GLOBALSDFSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x18EB6DD0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPGraphicsSettingsData_GlobalSDFSettings_TypeDefinitionIndex = 35346;

	class CRPGraphicsSettingsData_GlobalSDFSettings : public ::System::Object
	{
	public:
		::System::Boolean Enable; // 0x10
		::UnityEngine::SDFVisualizeMethod VisualizeMethod; // 0x14
		::System::Boolean DisableIncrementalUpdate; // 0x18
		::System::Boolean Debug; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_GLOBALSDFSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
