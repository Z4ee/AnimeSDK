#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Editor/BGCurvePCG_MeshGeneratorBase_UVMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class BGCurveExtention;
class Class_1_BC892FF2CA890F74_Section;
namespace RPG::Editor { class BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_GET_TARGETOBJECT_OFFSET UNITYSDK_OFFSET(0xA7BFB70)
#define RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_METHOD_1_0084CD2D33759A62_OFFSET UNITYSDK_OFFSET(0xA7BBF20)
#define RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_METHOD_1_0844BF824CA685A7_OFFSET UNITYSDK_OFFSET(0xA7BB520)
#define RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_METHOD_1_0C62ABB6A3BA51A4_OFFSET UNITYSDK_OFFSET(0xA7BB920)
#define RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_METHOD_1_10D5AEF68500B8CE_OFFSET UNITYSDK_OFFSET(0xA7BBE60)
#define RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_METHOD_1_299E2BC02156A6EF_OFFSET UNITYSDK_OFFSET(0xA7B8E40)
#define RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_METHOD_1_3C2CDA0970149A4D_OFFSET UNITYSDK_OFFSET(0xA7B9BF0)
#define RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_METHOD_1_5B6B19AC3D4AEC71_OFFSET UNITYSDK_OFFSET(0xA7B8A70)
#define RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_METHOD_1_A2D0319E2F0BE8DB_OFFSET UNITYSDK_OFFSET(0xA7BBC50)
#define RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA7BFB20)
#define RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_SET_TARGETOBJECT_OFFSET UNITYSDK_OFFSET(0xA7BFB80)
#define RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xA7B97E0)

namespace RPG::Editor
{
	inline static constexpr unsigned int BGCurvePCG_MeshGeneratorBase_TypeDefinitionIndex = 42053;

	class BGCurvePCG_MeshGeneratorBase : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* _TargetObject; // 0x10
		::System::Boolean _IfDrawGizmo; // 0x18
		::System::Boolean _IfAutoUpdate; // 0x19
		::BGCurveExtention* _CurveExtention; // 0x20
		::UnityEngine::GameObject* _TargetObject_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_TargetObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_GET_TARGETOBJECT_OFFSET))(this);
		}

		::System::Void set_TargetObject(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_SET_TARGETOBJECT_OFFSET))(this, value);
		}

		::System::Void Method_1_A2D0319E2F0BE8DB(::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94*>* a1, ::System::Single a2, ::RPG::Editor::BGCurvePCG_MeshGeneratorBase_UVMode a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94*>*, ::System::Single, ::RPG::Editor::BGCurvePCG_MeshGeneratorBase_UVMode))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_METHOD_1_A2D0319E2F0BE8DB_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94*>* Method_1_3C2CDA0970149A4D(::BGCurveExtention* a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94*>*(*)(::PVOID, ::BGCurveExtention*, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_METHOD_1_3C2CDA0970149A4D_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94*>* Method_1_5B6B19AC3D4AEC71(::BGCurveExtention* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::System::Single a4)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94*>*(*)(::PVOID, ::BGCurveExtention*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_METHOD_1_5B6B19AC3D4AEC71_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94*>* Method_1_299E2BC02156A6EF(::BGCurveExtention* a1, ::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94*>* a2, ::UnityEngine::Vector2 a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94*>*(*)(::PVOID, ::BGCurveExtention*, ::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94*>*, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_METHOD_1_299E2BC02156A6EF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94* Method_1_0C62ABB6A3BA51A4(::BGCurveExtention* a1, ::System::Single a2)
		{
			return ((::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94*(*)(::PVOID, ::BGCurveExtention*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_METHOD_1_0C62ABB6A3BA51A4_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_0844BF824CA685A7(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_METHOD_1_0844BF824CA685A7_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Mesh* Method_1_0084CD2D33759A62(::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94*>* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94*>*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_METHOD_1_0084CD2D33759A62_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Mesh* Method_1_10D5AEF68500B8CE(::Class_1_BC892FF2CA890F74_Section* a1, ::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94*>* a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::Class_1_BC892FF2CA890F74_Section*, ::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_METHOD_1_10D5AEF68500B8CE_OFFSET))(this, a1, a2, a3);
		}
	};
}
