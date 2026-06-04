#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Editor/BGCurvePCG_ExtrusionMesh_GeometrySetting.h"
#include "unitysdk/RPG/Editor/BGCurvePCG_MeshGeneratorBase.h"
#include "unitysdk/RPG/Editor/BGCurvePCG_MeshGeneratorBase_UVMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

class BGCurveExtention;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_METHOD_2_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0xCC64180)
#define RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_METHOD_2_37D3D9A3F3244B90_OFFSET UNITYSDK_OFFSET(0xCC63130)
#define RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_METHOD_2_763B70E1B527E566_OFFSET UNITYSDK_OFFSET(0xCC631A0)
#define RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_METHOD_2_7ABB2B2EF17A967F_OFFSET UNITYSDK_OFFSET(0xCC642F0)
#define RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_METHOD_2_B917C58B4E14AC1B_OFFSET UNITYSDK_OFFSET(0xCC636B0)
#define RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCC642B0)
#define RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_METHOD_2_E6D3C4C666E119D9_OFFSET UNITYSDK_OFFSET(0xCC64260)
#define RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_METHOD_2_EF2E74CEEC4FEFA5_OFFSET UNITYSDK_OFFSET(0xCC63050)
#define RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_METHOD_2_F0F8DE036FE283F6_OFFSET UNITYSDK_OFFSET(0xCC63640)
#define RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH__CTOR_OFFSET UNITYSDK_OFFSET(0xCC64C20)

namespace RPG::Editor
{
	inline static constexpr unsigned int BGCurvePCG_ExtrusionMesh_TypeDefinitionIndex = 48639;

	class BGCurvePCG_ExtrusionMesh : public ::RPG::Editor::BGCurvePCG_MeshGeneratorBase
	{
	public:
		::System::String* GrpupName; // 0x30
		::UnityEngine::Material* Material; // 0x38
		::UnityEngine::Material* SecctionMaterial; // 0x40
		::System::String* MeshSaveFolder; // 0x48
		::System::String* MeshAssetName; // 0x50
		::RPG::Editor::BGCurvePCG_ExtrusionMesh_GeometrySetting Setting; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::Mesh*>* _MeshList; // 0x98
		::RPG::Editor::BGCurvePCG_MeshGeneratorBase_UVMode _UVType; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_EF2E74CEEC4FEFA5(::BGCurveExtention* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BGCurveExtention*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_METHOD_2_EF2E74CEEC4FEFA5_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_37D3D9A3F3244B90()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_METHOD_2_37D3D9A3F3244B90_OFFSET))(this);
		}

		::System::Void Method_2_F0F8DE036FE283F6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_METHOD_2_F0F8DE036FE283F6_OFFSET))(this);
		}

		::System::Void Method_2_2B9D478141E0F891()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_METHOD_2_2B9D478141E0F891_OFFSET))(this);
		}

		::System::Void Method_2_E6D3C4C666E119D9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_METHOD_2_E6D3C4C666E119D9_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_2_763B70E1B527E566()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_METHOD_2_763B70E1B527E566_OFFSET))(this);
		}

		::UnityEngine::Mesh* Method_2_7ABB2B2EF17A967F(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_METHOD_2_7ABB2B2EF17A967F_OFFSET))(this, a1);
		}

		::System::Void Method_2_B917C58B4E14AC1B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_METHOD_2_B917C58B4E14AC1B_OFFSET))(this);
		}
	};
}
