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

#define RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_METHOD_2_0E5F9F723F3FD31F_OFFSET UNITYSDK_OFFSET(0xB503FF0)
#define RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_METHOD_2_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0xB503EE0)
#define RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_METHOD_2_630EDA686801A28F_OFFSET UNITYSDK_OFFSET(0xB502DE0)
#define RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_METHOD_2_6F03F79E54DE121E_OFFSET UNITYSDK_OFFSET(0xB502FF0)
#define RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_METHOD_2_B917C58B4E14AC1B_OFFSET UNITYSDK_OFFSET(0xB503460)
#define RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_METHOD_2_BF9BB9E2BBF3B6F4_OFFSET UNITYSDK_OFFSET(0xB502F80)
#define RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_METHOD_2_C20A8E714F76AB3E_OFFSET UNITYSDK_OFFSET(0xB503FA0)
#define RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB503F60)
#define RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_METHOD_2_F0F8DE036FE283F6_OFFSET UNITYSDK_OFFSET(0xB5033F0)
#define RPG_EDITOR_BGCURVEPCG_MULTSUBMESH__CTOR_OFFSET UNITYSDK_OFFSET(0xB504100)

namespace RPG::Editor
{
	inline static constexpr unsigned int BGCurvePCG_MultSubMesh_TypeDefinitionIndex = 48029;

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

		::System::Void Method_2_BF9BB9E2BBF3B6F4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_METHOD_2_BF9BB9E2BBF3B6F4_OFFSET))(this);
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

		::System::Void Method_2_C20A8E714F76AB3E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_METHOD_2_C20A8E714F76AB3E_OFFSET))(this);
		}

		::System::Void Method_2_6F03F79E54DE121E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_METHOD_2_6F03F79E54DE121E_OFFSET))(this);
		}

		::UnityEngine::Mesh* Method_2_0E5F9F723F3FD31F(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_METHOD_2_0E5F9F723F3FD31F_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_B917C58B4E14AC1B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_METHOD_2_B917C58B4E14AC1B_OFFSET))(this);
		}
	};
}
