#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LoopTowerAnimBehavior_TowerDirectionType.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class LoopTowerAnimBehavior; }
namespace RPG::Client { class LoopTowerAnimBehavior_LoopTowerSlide; }
namespace RPG::GameCore { class VCameraShakeV2; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LOOPTOWERANIMMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x15BF35C0)
#define RPG_CLIENT_LOOPTOWERANIMMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x15BF3610)

namespace RPG::Client
{
	inline static constexpr unsigned int LoopTowerAnimMonoPlugin_TypeDefinitionIndex = 67728;

	class LoopTowerAnimMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::LoopTowerAnimBehavior*>
	{
	public:
		::System::Single Speed; // 0x30
		::System::Single TowerHeight; // 0x34
		::System::Single BaseOffset; // 0x38
		::RPG::Client::LoopTowerAnimBehavior_TowerDirectionType TowerDirectionType; // 0x3C
		::System::Collections::Generic::List_1<::RPG::Client::LoopTowerAnimBehavior_LoopTowerSlide*>* SliderTemplate; // 0x40
		::System::Boolean PreviewMode; // 0x48
		::System::Single SwayIntensity; // 0x4C
		::System::Single SwaySpeed; // 0x50
		::System::Single SinRollIntrnsity; // 0x54
		::System::Single SinRollSpeed; // 0x58
		::System::Single ShakeRange; // 0x5C
		::RPG::GameCore::VCameraShakeV2* CameraShakeV2; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPTOWERANIMMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
