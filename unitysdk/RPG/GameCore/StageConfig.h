#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GraphicQuality.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BlockNodeConfig; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class StageGrassOverrideConfig; }
namespace RPG::GameCore { class StageIslandConfig; }
namespace RPG::GameCore { class StageVersionData; }
namespace RPG::GameCore { class StageVolumeConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_STAGECONFIG_GET_ACTIVEBLOCKNODECONFIGLIST_OFFSET UNITYSDK_OFFSET(0x17765150)
#define RPG_GAMECORE_STAGECONFIG_METHOD_2_0B3142A33AF5ED4C_OFFSET UNITYSDK_OFFSET(0x17764FD0)
#define RPG_GAMECORE_STAGECONFIG_METHOD_2_3A7480C8F521D402_OFFSET UNITYSDK_OFFSET(0x177650C0)
#define RPG_GAMECORE_STAGECONFIG_METHOD_2_61D061BC96739D0A_OFFSET UNITYSDK_OFFSET(0x17764720)
#define RPG_GAMECORE_STAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17764ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageConfig_TypeDefinitionIndex = 17548;

	class StageConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::String* RegionPath; // 0x18
		::Il2CppArray<::RPG::GameCore::BlockNodeConfig*>* BlockNodeConfigList; // 0x20
		::Il2CppArray<::RPG::GameCore::StageIslandConfig*>* IslandConfigList; // 0x28
		::Il2CppArray<::System::String*>* AliasConfigList; // 0x30
		::Il2CppArray<::RPG::GameCore::StageVolumeConfig*>* StageVolumeConfigList; // 0x38
		::System::String* VolumeConfigPath; // 0x40
		::System::Single OfflineCullingCellSize; // 0x48
		::System::String* PVSMetaDataPath; // 0x50
		::System::Int32 UsePVS; // 0x58
		::System::Boolean UseSplittingItem; // 0x5C
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* ExternalConfigPaths; // 0x60
		::RPG::GameCore::HoyoTagContainer* StageFeatureTags; // 0x68
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GraphicQuality, ::RPG::GameCore::StageGrassOverrideConfig*>* GrassOverrideConfigs; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* OverrideStageLodConfig; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* OverrideStageNormDistanceLodConfig; // 0x80
		::RPG::GameCore::StageVersionData* StageVersionData; // 0x88
		::System::Boolean PVSEnableRegionFilter; // 0x90
		::System::Boolean EnableNormDistanceLodTemplate; // 0x91
		::System::Boolean EnableAudioGroundVoxel; // 0x92
		::System::Collections::Generic::List_1<::RPG::GameCore::BlockNodeConfig*>* _ActiveBlockNodeConfig; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_61D061BC96739D0A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGECONFIG_METHOD_2_61D061BC96739D0A_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::BlockNodeConfig*>* Method_2_0B3142A33AF5ED4C()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::BlockNodeConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGECONFIG_METHOD_2_0B3142A33AF5ED4C_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::BlockNodeConfig*>* Method_2_3A7480C8F521D402()
		{
			return ((::Il2CppArray<::RPG::GameCore::BlockNodeConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGECONFIG_METHOD_2_3A7480C8F521D402_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::BlockNodeConfig*>* get_ActiveBlockNodeConfigList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::BlockNodeConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGECONFIG_GET_ACTIVEBLOCKNODECONFIGLIST_OFFSET))(this);
		}
	};
}
