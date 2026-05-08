#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace MoleMole::Config { class ConfigShootingGroundAimAssist; }
namespace MoleMole::Config { class ConfigShootingGroundBulletType; }
namespace MoleMole::Config { class ConfigShootingGroundCamera; }
namespace MoleMole::Config { class ConfigShootingGroundControl; }
namespace MoleMole::Config { class ConfigShootingGroundRecoil; }
namespace MoleMole::Config { class ConfigShootingGroundSpread; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_CONFIG_CONFIGSHOOTINGGROUND__CTOR_OFFSET UNITYSDK_OFFSET(0x12313460)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigShootingGround_TypeDefinitionIndex = 40288;

	class ConfigShootingGround : public ::System::Object
	{
	public:
		::System::Single MaxShootDistance; // 0x10
		::UnityEngine::LayerMask BlockLayers; // 0x14
		::UnityEngine::LayerMask TargetLayers; // 0x18
		::Il2CppArray<::MoleMole::Config::ConfigShootingGroundBulletType*>* BulletTypes; // 0x20
		::MoleMole::Config::ConfigShootingGroundControl* MouseControlConfig; // 0x28
		::MoleMole::Config::ConfigShootingGroundControl* TouchControlConfig; // 0x30
		::MoleMole::Config::ConfigShootingGroundControl* GamepadControlConfig; // 0x38
		::MoleMole::Config::ConfigShootingGroundCamera* CameraConfig; // 0x40
		::MoleMole::Config::ConfigShootingGroundAimAssist* AimAssistConfig; // 0x48
		::MoleMole::Config::ConfigShootingGroundRecoil* RecoilConfig; // 0x50
		::MoleMole::Config::ConfigShootingGroundSpread* SpreadConfig; // 0x58
		::UnityEngine::Gradient* OutlineColorGradient; // 0x60
		::System::Single OutlineColorIntensity; // 0x68
		::System::Single OutlineAnimLifetime; // 0x6C
		::System::Single OutlineThickness; // 0x70
		::System::String* OutlineTag; // 0x78
		::Il2CppArray<::UnityEngine::Material*>* ScoreMaterialByRank; // 0x80
		::System::Collections::Generic::List_1<::System::String*>* EnterFreeShootSoundActionKeys; // 0x88
		::System::Collections::Generic::List_1<::System::String*>* ExitFreeShootSoundActionKeys; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ScreenEffectType>* FreeShootScreenEffect; // 0x98
		::System::Collections::Generic::List_1<::System::String*>* FreeShootEffectList; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHOOTINGGROUND__CTOR_OFFSET))(this);
		}
	};
}
