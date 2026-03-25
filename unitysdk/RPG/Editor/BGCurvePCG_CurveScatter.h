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

#define RPG_EDITOR_BGCURVEPCG_CURVESCATTER_METHOD_2_019FAF8DF887E9D8_OFFSET UNITYSDK_OFFSET(0xA7B9980)
#define RPG_EDITOR_BGCURVEPCG_CURVESCATTER_METHOD_2_2B66C008535F8B01_OFFSET UNITYSDK_OFFSET(0xA7BA380)
#define RPG_EDITOR_BGCURVEPCG_CURVESCATTER_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0xA7B9A80)
#define RPG_EDITOR_BGCURVEPCG_CURVESCATTER_METHOD_2_8D886D6E58A21026_OFFSET UNITYSDK_OFFSET(0xA7B9D90)
#define RPG_EDITOR_BGCURVEPCG_CURVESCATTER_METHOD_2_A5B6063FFC26FC8F_OFFSET UNITYSDK_OFFSET(0xA7B99D0)
#define RPG_EDITOR_BGCURVEPCG_CURVESCATTER_METHOD_2_AAD689B25B8AE167_OFFSET UNITYSDK_OFFSET(0xA7B9840)
#define RPG_EDITOR_BGCURVEPCG_CURVESCATTER_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA7BA340)
#define RPG_EDITOR_BGCURVEPCG_CURVESCATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xA7BA400)

namespace RPG::Editor
{
	inline static constexpr unsigned int BGCurvePCG_CurveScatter_TypeDefinitionIndex = 42045;

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

		::System::Void Method_2_019FAF8DF887E9D8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_CURVESCATTER_METHOD_2_019FAF8DF887E9D8_OFFSET))(this);
		}

		::System::Void Method_2_508D4DD02D3DB74E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_CURVESCATTER_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
		}

		::System::Void Method_2_A5B6063FFC26FC8F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_CURVESCATTER_METHOD_2_A5B6063FFC26FC8F_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_CURVESCATTER_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_2_2B66C008535F8B01()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_CURVESCATTER_METHOD_2_2B66C008535F8B01_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_CurveScatter_Class_1_C1DCB25A16EBA076*>* Method_2_8D886D6E58A21026(::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94*>* a1, ::RPG::Editor::BGCurvePCG_CurveScatter_ScatterSetting a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_CurveScatter_Class_1_C1DCB25A16EBA076*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94*>*, ::RPG::Editor::BGCurvePCG_CurveScatter_ScatterSetting))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_CURVESCATTER_METHOD_2_8D886D6E58A21026_OFFSET))(this, a1, a2);
		}
	};
}
