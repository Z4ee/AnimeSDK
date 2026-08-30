#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class VCameraBlend; }
namespace RPG::GameCore { class VCameraNoiseChange; }
namespace RPG::GameCore { class VCameraNormalConfig; }
namespace System { class Object; }

#define RPG_GAMECORE_CRPVIRTUALCAMERACONFIG_METHOD_2_E47EA384D337FF62_OFFSET UNITYSDK_OFFSET(0x1CDCFAE0)
#define RPG_GAMECORE_CRPVIRTUALCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDCFCB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CRPVirtualCameraConfig_TypeDefinitionIndex = 16255;

	class CRPVirtualCameraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* OverrideAimTargetType; // 0x10
		::RPG::GameCore::TargetEvaluator* OverrideAnchorTargetType; // 0x18
		::RPG::GameCore::VCameraNormalConfig* NormalConfig; // 0x20
		::RPG::GameCore::VCameraBlend* BlendConfig; // 0x28
		::RPG::GameCore::VCameraNoiseChange* NoiseConfig; // 0x30
		::System::Single StartTime; // 0x38
		::System::Object* OverrideAimTarget; // 0x40
		::System::Object* OverrideAnchorTarget; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CRPVIRTUALCAMERACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E47EA384D337FF62(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CRPVirtualCameraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CRPVirtualCameraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CRPVIRTUALCAMERACONFIG_METHOD_2_E47EA384D337FF62_OFFSET))(a1, a2);
		}
	};
}
