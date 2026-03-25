#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EPedestrianAssetType.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

class Class_0_16E4307DCC419505_795;
namespace RPG::Client { class ArtNPCPedestrianAssetConfig_IdentityData; }
namespace RPG::Client { class ArtNPCPedestrianEntityConfig; }
namespace RPG::Client { class ArtNPCPedestrianEntityConfig_EntityInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x90D7C00)
#define RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_GET_MAXSPAWNCOUNT_OFFSET UNITYSDK_OFFSET(0x90D7730)
#define RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_METHOD_3_02AC375691BAA612_OFFSET UNITYSDK_OFFSET(0x90D73B0)
#define RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_METHOD_3_2330DA4597DE0EDD_OFFSET UNITYSDK_OFFSET(0x90D7360)
#define RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_METHOD_3_30BE3523CF9B739E_OFFSET UNITYSDK_OFFSET(0x90D7460)
#define RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_METHOD_3_7153229C6E70EBA1_OFFSET UNITYSDK_OFFSET(0x90D7580)
#define RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_METHOD_3_72A8068D2AF9B485_OFFSET UNITYSDK_OFFSET(0x90D7740)
#define RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_METHOD_3_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x90D7520)
#define RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x90D7C60)

namespace RPG::Client
{
	inline static constexpr unsigned int ArtNPCPedestrianAssetConfig_TypeDefinitionIndex = 56586;

	class ArtNPCPedestrianAssetConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		// static const ::System::String* _ENTITY_CONFIG_PATH; // 0x0
		::Il2CppArray<::RPG::Client::ArtNPCPedestrianAssetConfig_IdentityData*>* IdentityDatas; // 0x18
		::System::UInt32 MaxSpawnMemberCount; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::ArtNPCPedestrianAssetConfig_IdentityData*>* _IdentityMap; // 0x28
		::RPG::Client::ArtNPCPedestrianEntityConfig* _EntityConfig; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG__CTOR_OFFSET))(this);
		}

		::RPG::Client::EPedestrianAssetType Method_3_2330DA4597DE0EDD()
		{
			return ((::RPG::Client::EPedestrianAssetType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_METHOD_3_2330DA4597DE0EDD_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::String*>* Method_3_02AC375691BAA612()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_METHOD_3_02AC375691BAA612_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_795* Method_3_30BE3523CF9B739E(::System::String* a1)
		{
			return ((::Class_0_16E4307DCC419505_795*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_METHOD_3_30BE3523CF9B739E_OFFSET))(this, a1);
		}

		::System::String* Method_3_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_METHOD_3_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::RPG::Client::ArtNPCPedestrianEntityConfig_EntityInfo* Method_3_7153229C6E70EBA1(::System::String* a1)
		{
			return ((::RPG::Client::ArtNPCPedestrianEntityConfig_EntityInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_METHOD_3_7153229C6E70EBA1_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxSpawnCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_GET_MAXSPAWNCOUNT_OFFSET))(this);
		}

		::System::Void Method_3_72A8068D2AF9B485()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_METHOD_3_72A8068D2AF9B485_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_DISPOSE_OFFSET))(this);
		}
	};
}
