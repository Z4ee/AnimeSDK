#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IPedestrianMemberExternalConfig; }
namespace RPG::Client { class NPCPedestrianGPUAssetConfig_WalkBakedData; }
namespace System { class String; }

#define RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG_ASSET_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x1A322340)
#define RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG_ASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1A322380)

namespace RPG::Client
{
	inline static constexpr unsigned int NPCPedestrianGPUAssetConfig_Asset_TypeDefinitionIndex = 69203;

	class NPCPedestrianGPUAssetConfig_Asset : public ::System::Object
	{
	public:
		::System::String* Feature; // 0x10
		::System::String* AssetPath; // 0x18
		::RPG::Client::NPCPedestrianGPUAssetConfig_WalkBakedData* WalkBakedData; // 0x20
		::Il2CppArray<::RPG::Client::IPedestrianMemberExternalConfig*>* ExternalConfigs; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG_ASSET__CTOR_OFFSET))(this);
		}

		::System::String* Method_1_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG_ASSET_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
		}
	};
}
