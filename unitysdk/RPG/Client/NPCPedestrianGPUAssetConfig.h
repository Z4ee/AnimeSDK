#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EPedestrianAssetType.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

class Class_0_16E4307DCC419505_795;
namespace RPG::Client { class NPCPedestrianGPUAssetConfig_Asset; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9DF0F70)
#define RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG_GET_MAXSPAWNCOUNT_OFFSET UNITYSDK_OFFSET(0x9DF0DE0)
#define RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG_METHOD_3_02AC375691BAA612_OFFSET UNITYSDK_OFFSET(0x9DF0C70)
#define RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG_METHOD_3_2330DA4597DE0EDD_OFFSET UNITYSDK_OFFSET(0x9DF0C30)
#define RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG_METHOD_3_30BE3523CF9B739E_OFFSET UNITYSDK_OFFSET(0x9DF0D20)
#define RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG_METHOD_3_DA37DFE3A5BDA9F4_OFFSET UNITYSDK_OFFSET(0x9DF0DF0)
#define RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9DF0FB0)

namespace RPG::Client
{
	inline static constexpr unsigned int NPCPedestrianGPUAssetConfig_TypeDefinitionIndex = 56595;

	class NPCPedestrianGPUAssetConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::RPG::Client::EPedestrianAssetType AssetType; // 0x18
		::Il2CppArray<::RPG::Client::NPCPedestrianGPUAssetConfig_Asset*>* Assets; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::NPCPedestrianGPUAssetConfig_Asset*>* _AssetMap; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG__CTOR_OFFSET))(this);
		}

		::RPG::Client::EPedestrianAssetType Method_3_2330DA4597DE0EDD()
		{
			return ((::RPG::Client::EPedestrianAssetType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG_METHOD_3_2330DA4597DE0EDD_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::String*>* Method_3_02AC375691BAA612()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG_METHOD_3_02AC375691BAA612_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_795* Method_3_30BE3523CF9B739E(::System::String* a1)
		{
			return ((::Class_0_16E4307DCC419505_795*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG_METHOD_3_30BE3523CF9B739E_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxSpawnCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG_GET_MAXSPAWNCOUNT_OFFSET))(this);
		}

		::System::Void Method_3_DA37DFE3A5BDA9F4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG_METHOD_3_DA37DFE3A5BDA9F4_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG_DISPOSE_OFFSET))(this);
		}
	};
}
