#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ArtNPCPedestrianAssetConfig_ArtVariantInfo; }
namespace System { class String; }

#define RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_FEATUREDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B32C5E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ArtNPCPedestrianAssetConfig_FeatureData_TypeDefinitionIndex = 69194;

	class ArtNPCPedestrianAssetConfig_FeatureData : public ::System::Object
	{
	public:
		::System::String* FeatureID; // 0x10
		::System::String* NPCName; // 0x18
		::Il2CppArray<::RPG::Client::ArtNPCPedestrianAssetConfig_ArtVariantInfo*>* ArtVariants; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_FEATUREDATA__CTOR_OFFSET))(this);
		}
	};
}
