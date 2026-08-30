#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_DLSSSETTINGS_GET_DISCARD_OFFSET UNITYSDK_OFFSET(0x1C67CDD0)
#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_DLSSSETTINGS_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1C675320)
#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_DLSSSETTINGS_SET_DISCARD_OFFSET UNITYSDK_OFFSET(0x1C67CDE0)
#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_DLSSSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C67CDF0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPGraphicsSettingsData_DLSSSettings_TypeDefinitionIndex = 36989;

	class CRPGraphicsSettingsData_DLSSSettings : public ::System::Object
	{
	public:
		::System::Boolean ClipColor; // 0x10
		::System::Boolean ClipColorByTAA; // 0x11
		::System::Single Sharpness; // 0x14
		::RPG::CustomRP::Quality Quality; // 0x18
		::System::Boolean UseMipMapBias; // 0x1C
		::System::Single MipMapBiasOffset; // 0x20
		::System::Single RenderScale; // 0x24
		::System::Boolean _Discard_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_DLSSSETTINGS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_Enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_DLSSSETTINGS_GET_ENABLED_OFFSET))(this);
		}

		::System::Boolean get_Discard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_DLSSSETTINGS_GET_DISCARD_OFFSET))(this);
		}

		::System::Void set_Discard(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_DLSSSETTINGS_SET_DISCARD_OFFSET))(this, a1);
		}
	};
}
