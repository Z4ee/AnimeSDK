#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CRPSSGIQualitySettings; }

#define RPG_CLIENT_CRPLIGHTSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x9211C90)

namespace RPG::Client
{
	inline static constexpr unsigned int CRPLightSettings_TypeDefinitionIndex = 55428;

	class CRPLightSettings : public ::System::Object
	{
	public:
		::RPG::CustomRP::CustomLightQualityFilter LightLevel; // 0x10
		::RPG::CustomRP::CustomLightQualityFilter LightLevelV2; // 0x14
		::System::Int32 MaxLightCountForEngine; // 0x18
		::System::Int32 MaxLightCountForScript; // 0x1C
		::System::Boolean UseAO; // 0x20
		::RPG::CustomRP::Quality AOQuality; // 0x24
		::System::Boolean EnableHalfAmbientRT; // 0x28
		::RPG::Client::CRPSSGIQualitySettings* SSGI; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CRPLIGHTSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
