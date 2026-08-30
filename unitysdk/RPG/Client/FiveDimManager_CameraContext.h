#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimMonoCamera; }
namespace RPG::GameCore { class FiveDimCameraDOFConfig; }
namespace RPG::GameCore { class FiveDimVCameraBlendConfig; }

#define RPG_CLIENT_FIVEDIMMANAGER_CAMERACONTEXT_CLEAR_OFFSET UNITYSDK_OFFSET(0x190C5580)
#define RPG_CLIENT_FIVEDIMMANAGER_CAMERACONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x190C55D0)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimManager_CameraContext_TypeDefinitionIndex = 60640;

	class FiveDimManager_CameraContext : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimVCameraBlendConfig* InBlend; // 0x10
		::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* Camera; // 0x18
		::RPG::GameCore::FiveDimCameraDOFConfig* DOFConfig; // 0x20
		::RPG::Client::FiveDimGameInstance* Instance; // 0x28
		::RPG::GameCore::FiveDimVCameraBlendConfig* OutBlend; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_CAMERACONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_CAMERACONTEXT_CLEAR_OFFSET))(this);
		}
	};
}
