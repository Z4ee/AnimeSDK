#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_BC892FF2CA890F74_Section;

#define RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_GEOMETRYSETTING__CCTOR_OFFSET UNITYSDK_OFFSET(0xB4FDB60)

namespace RPG::Editor
{
	inline static constexpr unsigned int BGCurvePCG_ExtrusionMesh_GeometrySetting_TypeDefinitionIndex = 48022;

	struct alignas(8) BGCurvePCG_ExtrusionMesh_GeometrySetting
	{
		static ::RPG::Editor::BGCurvePCG_ExtrusionMesh_GeometrySetting* StaticGet_init()
		{
			return (::RPG::Editor::BGCurvePCG_ExtrusionMesh_GeometrySetting*)Il2CppClass::FromTypeDefinitionIndex(BGCurvePCG_ExtrusionMesh_GeometrySetting_TypeDefinitionIndex)->GetStaticField(0x3D6E0);
		}
		::UnityEngine::Vector2 Range; // 0x10
		::System::Single MeshSplit; // 0x18
		::System::Single UVSplitDist; // 0x1C
		::System::Boolean IfAdaptiveDivide; // 0x20
		::System::Single VertexDistance; // 0x24
		::UnityEngine::Vector2 VertexDistanceRange; // 0x28
		::System::Single Tolerance; // 0x30
		::System::Boolean IfUseSectionPoint; // 0x34
		::System::Single LeftOffset; // 0x38
		::System::Single RightOffset; // 0x3C
		::Class_1_BC892FF2CA890F74_Section* Section; // 0x40
		::System::Boolean IfGenerateSection; // 0x48

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_GEOMETRYSETTING__CCTOR_OFFSET))();
		}
	};
}
