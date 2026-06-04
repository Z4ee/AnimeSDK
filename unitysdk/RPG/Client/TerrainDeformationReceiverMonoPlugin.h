#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/RPG/Client/TerrainDeformationReceiverMonoPlugin_DeformationLayerSettings.h"

namespace RPG::Client { class TerrainDeformationReceiverBehavior; }

#define RPG_CLIENT_TERRAINDEFORMATIONRECEIVERMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xCA157C0)

namespace RPG::Client
{
	inline static constexpr unsigned int TerrainDeformationReceiverMonoPlugin_TypeDefinitionIndex = 66391;

	class TerrainDeformationReceiverMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::TerrainDeformationReceiverBehavior*>
	{
	public:
		::System::Boolean ReceiveDeformation; // 0x30
		::RPG::Client::TerrainDeformationReceiverMonoPlugin_DeformationLayerSettings DeformationLayerSettings0; // 0x34
		::RPG::Client::TerrainDeformationReceiverMonoPlugin_DeformationLayerSettings DeformationLayerSettings1; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINDEFORMATIONRECEIVERMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
