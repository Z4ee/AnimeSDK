#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Editor/BGCurvePCG_CurveScatter_ScatterSetting.h"
#include "unitysdk/RPG/Editor/BGCurvePCG_MeshGeneratorBase.h"

class BGCurveExtention;
namespace RPG::Editor { class BGCurvePCG_CurveScatter_Class_1_C1DCB25A16EBA076; }
namespace RPG::Editor { class BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_EDITOR_BGCURVEPCG_CURVESCATTER_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0xE4957D0)
#define RPG_EDITOR_BGCURVEPCG_CURVESCATTER_METHOD_2_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0xE496320)
#define RPG_EDITOR_BGCURVEPCG_CURVESCATTER_METHOD_2_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0xE495780)
#define RPG_EDITOR_BGCURVEPCG_CURVESCATTER_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xE4958B0)
#define RPG_EDITOR_BGCURVEPCG_CURVESCATTER_METHOD_2_594E29428C750BB4_OFFSET UNITYSDK_OFFSET(0xE495C60)
#define RPG_EDITOR_BGCURVEPCG_CURVESCATTER_METHOD_2_AAD689B25B8AE167_OFFSET UNITYSDK_OFFSET(0xE495640)
#define RPG_EDITOR_BGCURVEPCG_CURVESCATTER_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE4962E0)
#define RPG_EDITOR_BGCURVEPCG_CURVESCATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xE4963A0)

namespace RPG::Editor
{
	inline static constexpr unsigned int BGCurvePCG_CurveScatter_TypeDefinitionIndex = 52020;

	class BGCurvePCG_CurveScatter : public ::RPG::Editor::BGCurvePCG_MeshGeneratorBase
	{
	public:
		::System::String* GrpupName; // 0x30
		::UnityEngine::GameObject* ModuleObject; // 0x38
		::RPG::Editor::BGCurvePCG_CurveScatter_ScatterSetting Setting; // 0x40
		::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_CurveScatter_Class_1_C1DCB25A16EBA076*>* _ScatterPoints; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_CURVESCATTER__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_AAD689B25B8AE167(::BGCurveExtention* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BGCurveExtention*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_CURVESCATTER_METHOD_2_AAD689B25B8AE167_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_19B91D58E02869BC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_CURVESCATTER_METHOD_2_19B91D58E02869BC_OFFSET))(this);
		}

		::System::Void Method_2_41A074549EF25F63()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_CURVESCATTER_METHOD_2_41A074549EF25F63_OFFSET))(this);
		}

		::System::Void Method_2_0865E94460F11643()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_CURVESCATTER_METHOD_2_0865E94460F11643_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_CURVESCATTER_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_2_102A1038C38883F3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_CURVESCATTER_METHOD_2_102A1038C38883F3_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_CurveScatter_Class_1_C1DCB25A16EBA076*>* Method_2_594E29428C750BB4(::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94*>* a1, ::RPG::Editor::BGCurvePCG_CurveScatter_ScatterSetting a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_CurveScatter_Class_1_C1DCB25A16EBA076*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94*>*, ::RPG::Editor::BGCurvePCG_CurveScatter_ScatterSetting))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_CURVESCATTER_METHOD_2_594E29428C750BB4_OFFSET))(this, a1, a2);
		}
	};
}
