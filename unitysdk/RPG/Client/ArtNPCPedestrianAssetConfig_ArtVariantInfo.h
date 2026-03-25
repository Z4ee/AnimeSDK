#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ArtNPCPedestrianAssetConfig_MeshLodInfo.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_ARTVARIANTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x90D7F20)

namespace RPG::Client
{
	inline static constexpr unsigned int ArtNPCPedestrianAssetConfig_ArtVariantInfo_TypeDefinitionIndex = 56589;

	class ArtNPCPedestrianAssetConfig_ArtVariantInfo : public ::System::Object
	{
	public:
		::System::String* ArtPrefabPath; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ArtNPCPedestrianAssetConfig_MeshLodInfo>* MeshLodPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_ARTVARIANTINFO__CTOR_OFFSET))(this);
		}
	};
}
