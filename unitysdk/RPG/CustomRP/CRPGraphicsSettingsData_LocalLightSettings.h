#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class CRPGraphicsSettingsData_ClusterLightingSettings; }
namespace RPG::CustomRP { class CRPGraphicsSettingsData_LocalLightLOD; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_LOCALLIGHTSETTINGS_GETLIGHTLEVEL_OFFSET UNITYSDK_OFFSET(0x18EB6E30)
#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_LOCALLIGHTSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x18EB6CB0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPGraphicsSettingsData_LocalLightSettings_TypeDefinitionIndex = 35335;

	class CRPGraphicsSettingsData_LocalLightSettings : public ::System::Object
	{
	public:
		::System::Boolean EnableLODDither; // 0x10
		::System::Boolean EnableLightCombine; // 0x11
		::System::Single LightRangeCut; // 0x14
		::System::Int32 MaxLightCountForEngine; // 0x18
		::System::Int32 MaxLightCountForScript; // 0x1C
		::System::Single TransFadeDuration; // 0x20
		::System::Collections::Generic::List_1<::RPG::CustomRP::CRPGraphicsSettingsData_LocalLightLOD*>* lod; // 0x28
		::RPG::CustomRP::CustomLightQualityFilter lightLevel; // 0x30
		::RPG::CustomRP::CustomLightQualityFilter lightLevelV2; // 0x34
		::System::Boolean UseAO; // 0x38
		::System::Boolean EnableClusterLighting; // 0x39
		::RPG::CustomRP::CRPGraphicsSettingsData_ClusterLightingSettings* clusterSettings; // 0x40
		::System::Boolean EnableDepthBounds; // 0x48
		::System::Single LocalLightEffectDist; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_LOCALLIGHTSETTINGS__CTOR_OFFSET))(this);
		}

		::RPG::CustomRP::CustomLightQualityFilter GetLightLevel(::System::Int32 a1)
		{
			return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_LOCALLIGHTSETTINGS_GETLIGHTLEVEL_OFFSET))(this, a1);
		}
	};
}
