#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/EProbeRenderMode.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class ReflectionSetting_SSGISettingData; }
namespace RPG::CustomRP { class ReflectionSetting_SSRSettingData; }

#define RPG_CUSTOMRP_REFLECTIONSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6E6550)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ReflectionSetting_TypeDefinitionIndex = 37166;

	class ReflectionSetting : public ::System::Object
	{
	public:
		::System::Boolean EnableSSR; // 0x10
		::System::Boolean EnableSSGI; // 0x11
		::System::Boolean EnableWaterSSR; // 0x12
		::RPG::CustomRP::EProbeRenderMode ProbeRenderMode; // 0x14
		::System::Single GlobalProbeDistance; // 0x18
		::System::Boolean ProbePreBRDF; // 0x1C
		::System::Boolean UnrealProbe; // 0x1D
		::RPG::CustomRP::ReflectionSetting_SSRSettingData* SSRSetting; // 0x20
		::RPG::CustomRP::ReflectionSetting_SSGISettingData* SSGISetting; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_REFLECTIONSETTING__CTOR_OFFSET))(this);
		}
	};
}
