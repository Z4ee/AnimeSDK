#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DeformSourceMode.h"
#include "unitysdk/RPG/Client/SceneLinearDeformData.h"
#include "unitysdk/RPG/Client/SceneQuadDeformData.h"
#include "unitysdk/RPG/Client/TAMonoBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define RPG_CLIENT_SCENE_INSTANCEARRAYELEMENTDATAMONOBASE_GETDEFORMDATA_OFFSET UNITYSDK_OFFSET(0x1AF60F50)
#define RPG_CLIENT_SCENE_INSTANCEARRAYELEMENTDATAMONOBASE_GETLINEARDEFORMDATA_OFFSET UNITYSDK_OFFSET(0x1AF60FE0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYELEMENTDATAMONOBASE_METHOD_6_A3FAE12D7B6ACD62_1_OFFSET UNITYSDK_OFFSET(0x1AF648D0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYELEMENTDATAMONOBASE_METHOD_6_A3FAE12D7B6ACD62_2_OFFSET UNITYSDK_OFFSET(0x1AF64980)
#define RPG_CLIENT_SCENE_INSTANCEARRAYELEMENTDATAMONOBASE_METHOD_6_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x1AF64820)
#define RPG_CLIENT_SCENE_INSTANCEARRAYELEMENTDATAMONOBASE_METHOD_6_ADC07F7C5F028A97_OFFSET UNITYSDK_OFFSET(0x1AF64790)
#define RPG_CLIENT_SCENE_INSTANCEARRAYELEMENTDATAMONOBASE_SETDEFORMDATA_OFFSET UNITYSDK_OFFSET(0x1AF64A30)
#define RPG_CLIENT_SCENE_INSTANCEARRAYELEMENTDATAMONOBASE_SETLINEARDEFORMDATA_OFFSET UNITYSDK_OFFSET(0x1AF64AD0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYELEMENTDATAMONOBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF64BC0)

namespace RPG::Client
{
	inline static constexpr unsigned int Scene_InstanceArrayElementDataMonoBase_TypeDefinitionIndex = 70813;

	class Scene_InstanceArrayElementDataMonoBase : public ::RPG::Client::TAMonoBase
	{
	public:
		::System::Int32 MeshId; // 0x18
		::System::Int32 MaterialId; // 0x1C
		::System::Int32 SubMeshIndex; // 0x20
		::System::String* StableId; // 0x28
		::System::Boolean UseAtlas; // 0x30
		::System::Int32 AtlasID; // 0x34
		::UnityEngine::Vector3 ModuleSize; // 0x38
		::System::Single LeftTopOffsetZ; // 0x44
		::System::Single RightTopOffsetZ; // 0x48
		::System::Single RightTopOffsetX; // 0x4C
		::System::Single RightTopOffsetY; // 0x50
		::System::Single VertexOffsetXZ1; // 0x54
		::System::Single VertexOffsetXZ2; // 0x58
		::System::Single VertexOffsetYZ1; // 0x5C
		::System::Single VertexOffsetYZ2; // 0x60
		::System::Single VertexOffsetXY1; // 0x64
		::System::Single VertexOffsetYX1; // 0x68
		::System::Single VertexOffsetZY2; // 0x6C
		::System::Single UVOffset; // 0x70
		::System::Boolean IfForceUpNormal; // 0x74
		::System::Single MainUVScale; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYELEMENTDATAMONOBASE__CTOR_OFFSET))(this);
		}

		::RPG::Client::DeformSourceMode Method_6_ADC07F7C5F028A97()
		{
			return ((::RPG::Client::DeformSourceMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYELEMENTDATAMONOBASE_METHOD_6_ADC07F7C5F028A97_OFFSET))(this);
		}

		::System::Boolean Method_6_A3FAE12D7B6ACD62()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYELEMENTDATAMONOBASE_METHOD_6_A3FAE12D7B6ACD62_OFFSET))(this);
		}

		::System::Boolean Method_6_A3FAE12D7B6ACD62_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYELEMENTDATAMONOBASE_METHOD_6_A3FAE12D7B6ACD62_1_OFFSET))(this);
		}

		::System::Boolean Method_6_A3FAE12D7B6ACD62_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYELEMENTDATAMONOBASE_METHOD_6_A3FAE12D7B6ACD62_2_OFFSET))(this);
		}

		::RPG::Client::SceneQuadDeformData GetDeformData()
		{
			return ((::RPG::Client::SceneQuadDeformData(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYELEMENTDATAMONOBASE_GETDEFORMDATA_OFFSET))(this);
		}

		::System::Void SetDeformData(::RPG::Client::SceneQuadDeformData a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SceneQuadDeformData))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYELEMENTDATAMONOBASE_SETDEFORMDATA_OFFSET))(this, a1);
		}

		::RPG::Client::SceneLinearDeformData GetLinearDeformData()
		{
			return ((::RPG::Client::SceneLinearDeformData(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYELEMENTDATAMONOBASE_GETLINEARDEFORMDATA_OFFSET))(this);
		}

		::System::Void SetLinearDeformData(::RPG::Client::SceneLinearDeformData a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SceneLinearDeformData))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYELEMENTDATAMONOBASE_SETLINEARDEFORMDATA_OFFSET))(this, a1);
		}
	};
}
