#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimMonoCamera; }
namespace RPG::GameCore { class FiveDimCameraDOFConfig; }
namespace RPG::GameCore { class FiveDimVCameraBlendConfig; }

#define RPG_CLIENT_FIVEDIMMANAGER_CAMERACONTEXT_CLEAR_OFFSET UNITYSDK_OFFSET(0x18423B10)
#define RPG_CLIENT_FIVEDIMMANAGER_CAMERACONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18423B60)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimManager_CameraContext_TypeDefinitionIndex = 57820;

	class FiveDimManager_CameraContext : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimVCameraBlendConfig* OutBlend; // 0x10
		::RPG::Client::FiveDimGameInstance* Instance; // 0x18
		::RPG::GameCore::FiveDimCameraDOFConfig* DOFConfig; // 0x20
		::RPG::GameCore::FiveDimVCameraBlendConfig* InBlend; // 0x28
		::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* Camera; // 0x30

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
