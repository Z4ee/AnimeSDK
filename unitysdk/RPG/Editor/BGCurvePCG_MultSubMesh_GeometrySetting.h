#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Editor/BGCurvePCG_MultSubMesh_SingleMeshConfig.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_GEOMETRYSETTING__CCTOR_OFFSET UNITYSDK_OFFSET(0xCC6AA10)

namespace RPG::Editor
{
	inline static constexpr unsigned int BGCurvePCG_MultSubMesh_GeometrySetting_TypeDefinitionIndex = 48649;

	struct alignas(8) BGCurvePCG_MultSubMesh_GeometrySetting
	{
		static ::RPG::Editor::BGCurvePCG_MultSubMesh_GeometrySetting* StaticGet_init()
		{
			return (::RPG::Editor::BGCurvePCG_MultSubMesh_GeometrySetting*)Il2CppClass::FromTypeDefinitionIndex(BGCurvePCG_MultSubMesh_GeometrySetting_TypeDefinitionIndex)->GetStaticField(0x62DF0);
		}
		::System::Boolean IfAdaptiveDivide; // 0x10
		::System::Single VertexDistance; // 0x14
		::UnityEngine::Vector2 VertexDistanceRange; // 0x18
		::System::Single Tolerance; // 0x20
		::System::Single NormalOffset; // 0x24
		::System::Single SubMeshWidth; // 0x28
		::System::Int32 TrailCount; // 0x2C
		::System::Single BaseMeshWidth; // 0x30
		::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_MultSubMesh_SingleMeshConfig>* SingleMeshConfigs; // 0x38

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_GEOMETRYSETTING__CCTOR_OFFSET))();
		}
	};
}
