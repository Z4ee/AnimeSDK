#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Editor/BGCurvePCG_MeshGeneratorBase_UVMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class BGCurveExtention;
class Class_1_F0BC55524B5D6A07_Section;
namespace RPG::Editor { class BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_GET_TARGETOBJECT_OFFSET UNITYSDK_OFFSET(0x106BBF20)
#define RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_METHOD_1_004679B1608D45B2_OFFSET UNITYSDK_OFFSET(0x106B7470)
#define RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_METHOD_1_0844BF824CA685A7_OFFSET UNITYSDK_OFFSET(0x106B6A80)
#define RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_METHOD_1_5FB236C32D199384_OFFSET UNITYSDK_OFFSET(0x106B72D0)
#define RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_METHOD_1_AFC21B0E8344D794_OFFSET UNITYSDK_OFFSET(0x106B3F10)
#define RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_METHOD_1_B314D3A101A1F0FD_OFFSET UNITYSDK_OFFSET(0x106B7530)
#define RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_METHOD_1_C20D118032AA1891_OFFSET UNITYSDK_OFFSET(0x106B3990)
#define RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x106BBED0)
#define RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_METHOD_1_EBD5494EA7EC26D6_OFFSET UNITYSDK_OFFSET(0x106B6ED0)
#define RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_METHOD_1_ED5C165D5B2A731C_OFFSET UNITYSDK_OFFSET(0x106B4E40)
#define RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_SET_TARGETOBJECT_OFFSET UNITYSDK_OFFSET(0x106BBF30)
#define RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x106B4A80)

namespace RPG::Editor
{
	inline static constexpr unsigned int BGCurvePCG_MeshGeneratorBase_TypeDefinitionIndex = 49657;

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

		::System::Void set_TargetObject(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_SET_TARGETOBJECT_OFFSET))(this, a1);
		}

		::System::Void Method_1_5FB236C32D199384(::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94*>* a1, ::System::Single a2, ::RPG::Editor::BGCurvePCG_MeshGeneratorBase_UVMode a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94*>*, ::System::Single, ::RPG::Editor::BGCurvePCG_MeshGeneratorBase_UVMode))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_METHOD_1_5FB236C32D199384_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94*>* Method_1_ED5C165D5B2A731C(::BGCurveExtention* a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94*>*(*)(::PVOID, ::BGCurveExtention*, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_METHOD_1_ED5C165D5B2A731C_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94*>* Method_1_C20D118032AA1891(::BGCurveExtention* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::System::Single a4)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94*>*(*)(::PVOID, ::BGCurveExtention*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_METHOD_1_C20D118032AA1891_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94*>* Method_1_AFC21B0E8344D794(::BGCurveExtention* a1, ::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94*>* a2, ::UnityEngine::Vector2 a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94*>*(*)(::PVOID, ::BGCurveExtention*, ::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94*>*, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_METHOD_1_AFC21B0E8344D794_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94* Method_1_EBD5494EA7EC26D6(::BGCurveExtention* a1, ::System::Single a2)
		{
			return ((::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94*(*)(::PVOID, ::BGCurveExtention*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_METHOD_1_EBD5494EA7EC26D6_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_0844BF824CA685A7(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_METHOD_1_0844BF824CA685A7_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Mesh* Method_1_B314D3A101A1F0FD(::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94*>* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94*>*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_METHOD_1_B314D3A101A1F0FD_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Mesh* Method_1_004679B1608D45B2(::Class_1_F0BC55524B5D6A07_Section* a1, ::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94*>* a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::Class_1_F0BC55524B5D6A07_Section*, ::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_METHOD_1_004679B1608D45B2_OFFSET))(this, a1, a2, a3);
		}
	};
}
