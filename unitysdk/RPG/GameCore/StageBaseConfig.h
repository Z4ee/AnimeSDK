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
namespace RPG::GameCore { class SubStageData; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_STAGEBASECONFIG_GET_ACTIVEBLOCKNODECONFIGLIST_OFFSET UNITYSDK_OFFSET(0x19CA63D0)
#define RPG_GAMECORE_STAGEBASECONFIG_GET_ENABLENORMDISTANCELODTEMPLATE_OFFSET UNITYSDK_OFFSET(0x19CA6400)
#define RPG_GAMECORE_STAGEBASECONFIG_GET_PVSENABLEREGIONFILTER_OFFSET UNITYSDK_OFFSET(0x19CA6440)
#define RPG_GAMECORE_STAGEBASECONFIG_METHOD_2_0827827755B133E1_OFFSET UNITYSDK_OFFSET(0x19CA50F0)
#define RPG_GAMECORE_STAGEBASECONFIG_METHOD_2_083097FD55C01C7C_OFFSET UNITYSDK_OFFSET(0x19CA41A0)
#define RPG_GAMECORE_STAGEBASECONFIG_METHOD_2_6515B8E85F9252EF_OFFSET UNITYSDK_OFFSET(0x19CA63A0)
#define RPG_GAMECORE_STAGEBASECONFIG_METHOD_2_656AD50600B8086B_OFFSET UNITYSDK_OFFSET(0x19CA6260)
#define RPG_GAMECORE_STAGEBASECONFIG_METHOD_2_773DAEFE53523DEF_OFFSET UNITYSDK_OFFSET(0x19CA52A0)
#define RPG_GAMECORE_STAGEBASECONFIG_METHOD_2_F68FDA814249780B_OFFSET UNITYSDK_OFFSET(0x19CA4060)
#define RPG_GAMECORE_STAGEBASECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19CA4190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageBaseConfig_TypeDefinitionIndex = 18153;

	class StageBaseConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::UInt32 Index; // 0x18
		::System::String* ParentStageName; // 0x20
		::System::String* RegionPath; // 0x28
		::System::String* IRILodConfigPath; // 0x30
		::Il2CppArray<::RPG::GameCore::BlockNodeConfig*>* BlockNodeConfigList; // 0x38
		::Il2CppArray<::RPG::GameCore::StageIslandConfig*>* IslandConfigList; // 0x40
		::Il2CppArray<::System::String*>* AliasConfigList; // 0x48
		::System::String* VolumeConfigPath; // 0x50
		::System::Single OfflineCullingCellSize; // 0x58
		::System::String* PVSMetaDataPath; // 0x60
		::System::Int32 UsePVS; // 0x68
		::System::Boolean UseSplittingItem; // 0x6C
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* ExternalConfigPaths; // 0x70
		::RPG::GameCore::HoyoTagContainer* StageFeatureTags; // 0x78
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GraphicQuality, ::RPG::GameCore::StageGrassOverrideConfig*>* GrassOverrideConfigs; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* OverrideStageLodConfig; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* OverrideStageNormDistanceLodConfig; // 0x90
		::RPG::GameCore::StageVersionData* StageVersionData; // 0x98
		::RPG::GameCore::SubStageData* SubStageData; // 0xA0
		::System::Collections::Generic::List_1<::RPG::GameCore::BlockNodeConfig*>* _ActiveBlockNodeConfig; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEBASECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F68FDA814249780B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageBaseConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageBaseConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEBASECONFIG_METHOD_2_F68FDA814249780B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_083097FD55C01C7C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageBaseConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageBaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEBASECONFIG_METHOD_2_083097FD55C01C7C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_0827827755B133E1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageBaseConfig*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageBaseConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEBASECONFIG_METHOD_2_0827827755B133E1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_773DAEFE53523DEF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageBaseConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageBaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEBASECONFIG_METHOD_2_773DAEFE53523DEF_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::BlockNodeConfig*>* Method_2_656AD50600B8086B()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::BlockNodeConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEBASECONFIG_METHOD_2_656AD50600B8086B_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::BlockNodeConfig*>* Method_2_6515B8E85F9252EF()
		{
			return ((::Il2CppArray<::RPG::GameCore::BlockNodeConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEBASECONFIG_METHOD_2_6515B8E85F9252EF_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::BlockNodeConfig*>* get_ActiveBlockNodeConfigList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::BlockNodeConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEBASECONFIG_GET_ACTIVEBLOCKNODECONFIGLIST_OFFSET))(this);
		}

		::System::Boolean get_EnableNormDistanceLodTemplate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEBASECONFIG_GET_ENABLENORMDISTANCELODTEMPLATE_OFFSET))(this);
		}

		::System::Boolean get_PVSEnableRegionFilter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEBASECONFIG_GET_PVSENABLEREGIONFILTER_OFFSET))(this);
		}
	};
}
