#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AutoGenCellType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BlockHeightBlendConfig; }
namespace RPG::GameCore { class CellConfigList; }
namespace RPG::GameCore { class DriftComponentData; }
namespace RPG::GameCore { class EnvironmentDataInfo; }
namespace RPG::GameCore { class MiddleDistantViewPrefabInfo; }
namespace RPG::GameCore { class PolymerObjData; }
namespace RPG::GameCore { class SharedSerializationDataIdxList; }
namespace RPG::GameCore { class StagePrefabInfo; }
namespace RPG::GameCore { class StageSceneItemSerializationData; }
namespace RPG::GameCore { class StageSceneItemSharedSerializationData; }
namespace RPG::GameCore { class StreamingItemHLODNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_GAMECORE_BLOCKCONFIG_METHOD_2_E18A5679AF820732_OFFSET UNITYSDK_OFFSET(0x16FE86C0)
#define RPG_GAMECORE_BLOCKCONFIG_METHOD_2_F505FC2092F2F0F5_OFFSET UNITYSDK_OFFSET(0x16FE7BA0)
#define RPG_GAMECORE_BLOCKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16FE8430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BlockConfig_TypeDefinitionIndex = 17522;

	class BlockConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::String* PrefabPath; // 0x18
		::System::String* HLODPath; // 0x20
		::System::String* GrassAssetPath; // 0x28
		::RPG::MVector3 GrassNodeOffset; // 0x30
		::System::String* DensityGrassAssetPath; // 0x40
		::RPG::MVector3 DensityGrassNodeOffset; // 0x48
		::System::String* BlockGrassDataPath; // 0x58
		::Il2CppArray<::RPG::GameCore::StagePrefabInfo*>* StagePrefabInfoList; // 0x60
		::Il2CppArray<::RPG::GameCore::EnvironmentDataInfo*>* EnvironmentDataInfoList; // 0x68
		::RPG::GameCore::BlockHeightBlendConfig* HeightBlendData; // 0x70
		::System::Single TerrainAlbedo; // 0x78
		::System::Single TerrainCoverage; // 0x7C
		::System::Single TerrainControlMode; // 0x80
		::Il2CppArray<::RPG::GameCore::PolymerObjData*>* PolymerList; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::DriftComponentData*>* DriftComponents; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::MiddleDistantViewPrefabInfo*>* MDVComponents; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::StageSceneItemSerializationData*>* SceneItemSerializationData; // 0xA0
		::Il2CppArray<::RPG::GameCore::StageSceneItemSharedSerializationData*>* SceneItemSharedSerializationData; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::SharedSerializationDataIdxList*>* StagePrefabIdxToSharedSerializationDataIdx; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* StagePrefabToEnvironmentData; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* ItemHLODToEnvironmentData; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Cells; // 0xC8
		::Il2CppArray<::RPG::GameCore::StreamingItemHLODNode*>* HLODNodeList; // 0xD0
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* PrefabObjsList; // 0xD8
		::System::Collections::Generic::List_1<::RPG::GameCore::StagePrefabInfo*>* PrefabInfoList; // 0xE0
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* PolymerPrefabsList; // 0xE8
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* PolymerChildrenPrefabList; // 0xF0
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* EnvDataObjsList; // 0xF8
		::System::String* JsonPath; // 0x100
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AutoGenCellType, ::RPG::GameCore::CellConfigList*>* RuntimeCells; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F505FC2092F2F0F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BlockConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BlockConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKCONFIG_METHOD_2_F505FC2092F2F0F5_OFFSET))(a1, a2);
		}

		::Il2CppArray<::RPG::GameCore::StagePrefabInfo*>* Method_2_E18A5679AF820732(::System::Int32 a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::StagePrefabInfo*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKCONFIG_METHOD_2_E18A5679AF820732_OFFSET))(this, a1);
		}
	};
}
