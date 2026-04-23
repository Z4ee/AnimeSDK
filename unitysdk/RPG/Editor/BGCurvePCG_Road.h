#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class BGCurveExtention;
namespace RPG::Client { class LinearModuleRendererMonoPlugin; }
namespace RPG::Editor { class BGCurvePCG_CurveScatter; }
namespace RPG::Editor { class BGCurvePCG_ExtrusionMesh; }
namespace RPG::Editor { class BGCurvePCG_LinearModuleGenerator; }
namespace RPG::Editor { class BGCurvePCG_MultSubMesh; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define RPG_EDITOR_BGCURVEPCG_ROAD_BAKE_OFFSET UNITYSDK_OFFSET(0xB504EB0)
#define RPG_EDITOR_BGCURVEPCG_ROAD_CLEAROBJECT_OFFSET UNITYSDK_OFFSET(0xB504E70)
#define RPG_EDITOR_BGCURVEPCG_ROAD_GENERATE_OFFSET UNITYSDK_OFFSET(0xB504B60)
#define RPG_EDITOR_BGCURVEPCG_ROAD_INIT_OFFSET UNITYSDK_OFFSET(0xB504240)
#define RPG_EDITOR_BGCURVEPCG_ROAD_METHOD_5_3FC863B885E15ED5_OFFSET UNITYSDK_OFFSET(0xB504360)
#define RPG_EDITOR_BGCURVEPCG_ROAD_METHOD_5_81A66FB988DFA6AA_OFFSET UNITYSDK_OFFSET(0xB504880)
#define RPG_EDITOR_BGCURVEPCG_ROAD_METHOD_5_A90FA0B17EBA78B1_OFFSET UNITYSDK_OFFSET(0xB505660)
#define RPG_EDITOR_BGCURVEPCG_ROAD_METHOD_5_C83C9243AB4294EB_OFFSET UNITYSDK_OFFSET(0xB505ED0)
#define RPG_EDITOR_BGCURVEPCG_ROAD_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB506190)
#define RPG_EDITOR_BGCURVEPCG_ROAD_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB504B20)
#define RPG_EDITOR_BGCURVEPCG_ROAD_METHOD_5_D10C11ED0EFFCFF4_OFFSET UNITYSDK_OFFSET(0xB505C90)
#define RPG_EDITOR_BGCURVEPCG_ROAD_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0xB505340)
#define RPG_EDITOR_BGCURVEPCG_ROAD_ONTRACKGENERATORCHANGED_OFFSET UNITYSDK_OFFSET(0xB5055F0)
#define RPG_EDITOR_BGCURVEPCG_ROAD__CTOR_OFFSET UNITYSDK_OFFSET(0xB5061D0)

namespace RPG::Editor
{
	inline static constexpr unsigned int BGCurvePCG_Road_TypeDefinitionIndex = 48014;

	class BGCurvePCG_Road : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 TrackIndex; // 0x18
		::System::Int32 PartIndex; // 0x1C
		::System::String* ObjectName; // 0x20
		::System::String* BaseAssetFolder; // 0x28
		::System::String* PrefabAssetFolder; // 0x30
		::System::String* TrackMaterialPath; // 0x38
		::System::String* TrackSectionMaterialPath; // 0x40
		::System::String* AcceleratorMaterialPath; // 0x48
		::System::String* ReducerMaterialPath; // 0x50
		::BGCurveExtention* Field_5_9; // 0x58
		::UnityEngine::Material* Field_5_10; // 0x60
		::UnityEngine::Material* Field_5_11; // 0x68
		::UnityEngine::Material* Field_5_12; // 0x70
		::UnityEngine::Material* Field_5_13; // 0x78
		::UnityEngine::GameObject* Field_5_14; // 0x80
		::System::String* Field_5_15; // 0x88
		::RPG::Editor::BGCurvePCG_ExtrusionMesh* TrackGenerator; // 0x90
		::RPG::Editor::BGCurvePCG_MultSubMesh* AcceleratorGenarator; // 0x98
		::RPG::Editor::BGCurvePCG_MultSubMesh* ReducerGenarator; // 0xA0
		::RPG::Editor::BGCurvePCG_LinearModuleGenerator* LinearModuleGenarator; // 0xA8
		::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_CurveScatter*>* CurveScatters; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_ROAD__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_ROAD_INIT_OFFSET))(this);
		}

		::System::Void Generate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_ROAD_GENERATE_OFFSET))(this);
		}

		::System::Void ClearObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_ROAD_CLEAROBJECT_OFFSET))(this);
		}

		::System::Void Bake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_ROAD_BAKE_OFFSET))(this);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_ROAD_ONDRAWGIZMOS_OFFSET))(this);
		}

		::System::Void OnTrackGeneratorChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_ROAD_ONTRACKGENERATORCHANGED_OFFSET))(this);
		}

		::System::Void Method_5_A90FA0B17EBA78B1(::RPG::Client::LinearModuleRendererMonoPlugin*& a1, ::RPG::Client::LinearModuleRendererMonoPlugin*& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LinearModuleRendererMonoPlugin*&, ::RPG::Client::LinearModuleRendererMonoPlugin*&, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_ROAD_METHOD_5_A90FA0B17EBA78B1_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::GameObject* Method_5_D10C11ED0EFFCFF4(::System::String* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_ROAD_METHOD_5_D10C11ED0EFFCFF4_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Transform*>* Method_5_C83C9243AB4294EB(::UnityEngine::GameObject* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Transform*>*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_ROAD_METHOD_5_C83C9243AB4294EB_OFFSET))(this, a1);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_ROAD_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_ROAD_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_5_3FC863B885E15ED5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_ROAD_METHOD_5_3FC863B885E15ED5_OFFSET))(this);
		}

		::System::Void Method_5_81A66FB988DFA6AA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_ROAD_METHOD_5_81A66FB988DFA6AA_OFFSET))(this);
		}
	};
}
