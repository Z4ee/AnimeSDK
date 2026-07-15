#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/LocalLightLod.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_LOCALLIGHTLOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1780F410)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPGraphicsSettingsData_LocalLightLOD_TypeDefinitionIndex = 36115;

	class CRPGraphicsSettingsData_LocalLightLOD : public ::System::Object
	{
	public:
		::RPG::CustomRP::LocalLightLod lightLod; // 0x10
		::System::Single rangeMin; // 0x14
		::System::Single rangeMax; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_LOCALLIGHTLOD__CTOR_OFFSET))(this);
		}
	};
}
