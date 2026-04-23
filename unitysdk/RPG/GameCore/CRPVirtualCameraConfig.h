#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class VCameraBlend; }
namespace RPG::GameCore { class VCameraNoiseChange; }
namespace RPG::GameCore { class VCameraNormalConfig; }

#define RPG_GAMECORE_CRPVIRTUALCAMERACONFIG_METHOD_2_ECF42FB557893D3F_OFFSET UNITYSDK_OFFSET(0x187646D0)
#define RPG_GAMECORE_CRPVIRTUALCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18764840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CRPVirtualCameraConfig_TypeDefinitionIndex = 15545;

	class CRPVirtualCameraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::VCameraNormalConfig* NormalConfig; // 0x10
		::RPG::GameCore::VCameraBlend* BlendConfig; // 0x18
		::RPG::GameCore::VCameraNoiseChange* NoiseConfig; // 0x20
		::System::Single StartTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CRPVIRTUALCAMERACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_ECF42FB557893D3F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CRPVirtualCameraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CRPVirtualCameraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CRPVIRTUALCAMERACONFIG_METHOD_2_ECF42FB557893D3F_OFFSET))(a1, a2);
		}
	};
}
