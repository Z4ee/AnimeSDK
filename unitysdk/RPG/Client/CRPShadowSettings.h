#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/PerObjectShadowResolution.h"
#include "unitysdk/RPG/CustomRP/ShadowFilterMode.h"
#include "unitysdk/RPG/CustomRP/ShadowMapResolution.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_CRPSHADOWSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x18CBD850)

namespace RPG::Client
{
	inline static constexpr unsigned int CRPShadowSettings_TypeDefinitionIndex = 64918;

	class CRPShadowSettings : public ::System::Object
	{
	public:
		::System::Single ShadowDistance; // 0x10
		::UnityEngine::Vector3 CascadeDistance; // 0x14
		::RPG::CustomRP::ShadowMapResolution MainLightResolution; // 0x20
		::RPG::CustomRP::ShadowFilterMode FilterMode; // 0x24
		::RPG::CustomRP::ShadowMapResolution LocalShadowOnlyResolution; // 0x28
		::RPG::CustomRP::ShadowMapResolution AdditionalShadowResolution; // 0x2C
		::System::Single ScreenSpaceShadowScale; // 0x30
		::System::Boolean EnableCSMBlend; // 0x34
		::System::Single CSMBlendRange; // 0x38
		::System::Int32 POSMCount; // 0x3C
		::RPG::CustomRP::PerObjectShadowResolution POSMResolution; // 0x40
		::System::Boolean EnablePCSSInUI; // 0x44
		::System::Int32 RealtimeShadowlightCount; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CRPSHADOWSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
