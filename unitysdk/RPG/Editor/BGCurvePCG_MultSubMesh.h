#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Editor/BGCurvePCG_MeshGeneratorBase.h"
#include "unitysdk/RPG/Editor/BGCurvePCG_MeshGeneratorBase_UVMode.h"
#include "unitysdk/RPG/Editor/BGCurvePCG_MultSubMesh_GeometrySetting.h"
#include "unitysdk/UnityEngine/Vector2.h"

class BGCurveExtention;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_METHOD_2_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0xCC6A750)
#define RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_METHOD_2_630EDA686801A28F_OFFSET UNITYSDK_OFFSET(0xCC69630)
#define RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_METHOD_2_9216B801ACD0B564_OFFSET UNITYSDK_OFFSET(0xCC6A810)
#define RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_METHOD_2_929ED164DF433778_OFFSET UNITYSDK_OFFSET(0xCC6A860)
#define RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_METHOD_2_93E6B8A6D29521ED_OFFSET UNITYSDK_OFFSET(0xCC697D0)
#define RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_METHOD_2_B917C58B4E14AC1B_OFFSET UNITYSDK_OFFSET(0xCC69CC0)
#define RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCC6A7D0)
#define RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_METHOD_2_E6D3C4C666E119D9_OFFSET UNITYSDK_OFFSET(0xCC69840)
#define RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_METHOD_2_F0F8DE036FE283F6_OFFSET UNITYSDK_OFFSET(0xCC69C50)
#define RPG_EDITOR_BGCURVEPCG_MULTSUBMESH__CTOR_OFFSET UNITYSDK_OFFSET(0xCC6A970)

namespace RPG::Editor
{
	inline static constexpr unsigned int BGCurvePCG_MultSubMesh_TypeDefinitionIndex = 48647;

	class BGCurvePCG_MultSubMesh : public ::RPG::Editor::BGCurvePCG_MeshGeneratorBase
	{
	public:
		::System::String* GrpupName; // 0x30
		::UnityEngine::Material* Material; // 0x38
		::System::String* MeshSaveFolder; // 0x40
		::System::String* MeshAssetName; // 0x48
		::RPG::Editor::BGCurvePCG_MultSubMesh_GeometrySetting Setting; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::Mesh*>* _MeshList; // 0x80
		::RPG::Editor::BGCurvePCG_MeshGeneratorBase_UVMode _UVType; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MULTSUBMESH__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_630EDA686801A28F(::BGCurveExtention* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BGCurveExtention*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_METHOD_2_630EDA686801A28F_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_93E6B8A6D29521ED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_METHOD_2_93E6B8A6D29521ED_OFFSET))(this);
		}

		::System::Void Method_2_F0F8DE036FE283F6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_METHOD_2_F0F8DE036FE283F6_OFFSET))(this);
		}

		::System::Void Method_2_2B9D478141E0F891()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_METHOD_2_2B9D478141E0F891_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_2_9216B801ACD0B564()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_METHOD_2_9216B801ACD0B564_OFFSET))(this);
		}

		::System::Void Method_2_E6D3C4C666E119D9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_METHOD_2_E6D3C4C666E119D9_OFFSET))(this);
		}

		::UnityEngine::Mesh* Method_2_929ED164DF433778(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_METHOD_2_929ED164DF433778_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_B917C58B4E14AC1B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_METHOD_2_B917C58B4E14AC1B_OFFSET))(this);
		}
	};
}
