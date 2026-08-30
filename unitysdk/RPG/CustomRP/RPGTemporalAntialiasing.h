#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomVolumeComponent.h"

namespace UnityEngine::Rendering { class FloatParameter; }

#define RPG_CUSTOMRP_RPGTEMPORALANTIALIASING_ISACTIVEIMPL_OFFSET UNITYSDK_OFFSET(0x1C6DC9E0)
#define RPG_CUSTOMRP_RPGTEMPORALANTIALIASING_ONOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1C6DCAC0)
#define RPG_CUSTOMRP_RPGTEMPORALANTIALIASING__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6DCBE0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGTemporalAntialiasing_TypeDefinitionIndex = 37160;

	class RPGTemporalAntialiasing : public ::RPG::CustomRP::CustomVolumeComponent
	{
	public:
		static ::System::Boolean* StaticGet_IsTAAEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPGTemporalAntialiasing_TypeDefinitionIndex)->GetStaticField(0xF110);
		}
		::UnityEngine::Rendering::FloatParameter* jitterSpread; // 0x38
		::UnityEngine::Rendering::FloatParameter* sharpness; // 0x40
		::UnityEngine::Rendering::FloatParameter* stationaryBlending; // 0x48
		::UnityEngine::Rendering::FloatParameter* motionBlending; // 0x50
		::UnityEngine::Rendering::FloatParameter* clampScale; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGTEMPORALANTIALIASING__CTOR_OFFSET))(this);
		}

		::System::Boolean IsActiveImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGTEMPORALANTIALIASING_ISACTIVEIMPL_OFFSET))(this);
		}

		::System::Void OnOverride(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGTEMPORALANTIALIASING_ONOVERRIDE_OFFSET))(this, a1);
		}
	};
}
