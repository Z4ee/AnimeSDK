#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/VCameraConfigType.h"
#include "unitysdk/RPG/GameCore/VCameraState.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class VCameraBlend; }
namespace RPG::GameCore { class VCameraCloseupShot; }
namespace RPG::GameCore { class VCameraDOFFocusEntity; }
namespace RPG::GameCore { class VCameraFreelook3rdConfig; }
namespace RPG::GameCore { class VCameraNoiseChange; }
namespace RPG::GameCore { class VCameraNormalConfig; }
namespace RPG::GameCore { class VCameraOverrideShakeV2; }
namespace RPG::GameCore { class VCameraShakeV2; }
namespace RPG::GameCore { class VCameraShotAnimMovementConfig; }
namespace RPG::GameCore { class VCameraShowTargetEntity; }
namespace RPG::GameCore { class VCameraStateAdditiveNormalConfig; }
namespace System { class String; }

#define RPG_GAMECORE_VCAMERACONFIG_METHOD_2_F5582A0539F76621_OFFSET UNITYSDK_OFFSET(0x1B887870)
#define RPG_GAMECORE_VCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B887CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VCameraConfig_TypeDefinitionIndex = 15777;

	class VCameraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::VCameraConfigType ConfigType; // 0x10
		::RPG::GameCore::VCameraState CameraState; // 0x14
		::RPG::GameCore::VCameraNormalConfig* NormalConfig; // 0x18
		::RPG::GameCore::VCameraNormalConfig* AdditiveNormalConfig; // 0x20
		::RPG::GameCore::VCameraFreelook3rdConfig* Freelook3rdConfig; // 0x28
		::RPG::GameCore::VCameraShotAnimMovementConfig* ShotAnimMovementConfig; // 0x30
		::System::String* ShakeTemplateName; // 0x38
		::RPG::GameCore::VCameraOverrideShakeV2* OverrideShakeConfigV2; // 0x40
		::RPG::GameCore::VCameraShakeV2* ShakeConfigV2; // 0x48
		::RPG::GameCore::VCameraCloseupShot* CloseupShotConfig; // 0x50
		::RPG::GameCore::VCameraBlend* BlendConfig; // 0x58
		::RPG::GameCore::VCameraShowTargetEntity* ShowEntityConfig; // 0x60
		::RPG::GameCore::VCameraStateAdditiveNormalConfig* StateAdditiveNormalConfig; // 0x68
		::RPG::GameCore::VCameraDOFFocusEntity* DOFFocusConfig; // 0x70
		::RPG::GameCore::VCameraNoiseChange* NoiseConfig; // 0x78
		::System::Int32 Priority; // 0x80
		::System::Boolean LockRelatedTarget; // 0x84
		::System::Boolean DontOverrideLastShowEntityConfig; // 0x85

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F5582A0539F76621(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VCameraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VCameraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERACONFIG_METHOD_2_F5582A0539F76621_OFFSET))(a1, a2);
		}
	};
}
