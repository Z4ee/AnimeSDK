#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ArtNPCPedestrianAssetConfig_FeatureData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_IDENTITYDATA_METHOD_1_3EBFCBB7FE30ED6B_OFFSET UNITYSDK_OFFSET(0x9D39BF0)
#define RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_IDENTITYDATA_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x9D39BB0)
#define RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_IDENTITYDATA_METHOD_1_DA37DFE3A5BDA9F4_OFFSET UNITYSDK_OFFSET(0x9D39570)
#define RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_IDENTITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9D39CB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ArtNPCPedestrianAssetConfig_IdentityData_TypeDefinitionIndex = 63831;

	class ArtNPCPedestrianAssetConfig_IdentityData : public ::System::Object
	{
	public:
		::System::String* IdentityID; // 0x10
		::Il2CppArray<::RPG::Client::ArtNPCPedestrianAssetConfig_FeatureData*>* FeatureDatas; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::ArtNPCPedestrianAssetConfig_FeatureData*>* _FeatureMap; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_IDENTITYDATA__CTOR_OFFSET))(this);
		}

		::System::String* Method_1_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_IDENTITYDATA_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::System::Void Method_1_DA37DFE3A5BDA9F4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_IDENTITYDATA_METHOD_1_DA37DFE3A5BDA9F4_OFFSET))(this);
		}

		::RPG::Client::ArtNPCPedestrianAssetConfig_FeatureData* Method_1_3EBFCBB7FE30ED6B(::System::String* a1)
		{
			return ((::RPG::Client::ArtNPCPedestrianAssetConfig_FeatureData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_IDENTITYDATA_METHOD_1_3EBFCBB7FE30ED6B_OFFSET))(this, a1);
		}
	};
}
