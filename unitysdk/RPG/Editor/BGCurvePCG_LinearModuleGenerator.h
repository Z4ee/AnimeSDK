#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Editor/BGCurvePCG_MeshGeneratorBase.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class BGCurveExtention;
class Class_1_F0BC55524B5D6A07_Class_1_E7B1DF5735A03963;
namespace RPG::Client { class LinearModuleRendererMonoPlugin; }
namespace RPG::Editor { class BGCurvePCG_LinearModuleGenerator_ItemData; }
namespace RPG::Editor { class BGCurvePCG_LinearModuleGenerator_ModuleData; }
namespace RPG::Editor { class BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_METHOD_2_13F0FEDB1C58AAEC_OFFSET UNITYSDK_OFFSET(0x16842BF0)
#define RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_METHOD_2_19E6130E11DE9B10_OFFSET UNITYSDK_OFFSET(0x1683E740)
#define RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_METHOD_2_3E6AC14EE28F55D4_OFFSET UNITYSDK_OFFSET(0x1683E820)
#define RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_METHOD_2_738344B708B7B678_OFFSET UNITYSDK_OFFSET(0x16841050)
#define RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_METHOD_2_75A9B927F52C4894_OFFSET UNITYSDK_OFFSET(0x16841A00)
#define RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_METHOD_2_796376D4C7B57B85_OFFSET UNITYSDK_OFFSET(0x16842690)
#define RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_METHOD_2_8EE45C9ADEDB0506_OFFSET UNITYSDK_OFFSET(0x168424C0)
#define RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_METHOD_2_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0x16840880)
#define RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_METHOD_2_B3E571562CE5C70B_OFFSET UNITYSDK_OFFSET(0x1683EE50)
#define RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x16842450)
#define RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16841010)
#define RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_METHOD_2_DC4DC6EABAAA4D92_OFFSET UNITYSDK_OFFSET(0x1683E970)
#define RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_METHOD_2_EF2E74CEEC4FEFA5_OFFSET UNITYSDK_OFFSET(0x1683E660)
#define RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_METHOD_2_F496458A8038CA66_OFFSET UNITYSDK_OFFSET(0x16842C90)
#define RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x16842D10)

namespace RPG::Editor
{
	inline static constexpr unsigned int BGCurvePCG_LinearModuleGenerator_TypeDefinitionIndex = 52312;

	class BGCurvePCG_LinearModuleGenerator : public ::RPG::Editor::BGCurvePCG_MeshGeneratorBase
	{
	public:
		::System::String* GrpupName; // 0x30
		::UnityEngine::Vector2 ControlPointDistRange; // 0x38
		::System::Single Tolerance; // 0x40
		::System::Boolean IfGenerateDebugObject; // 0x44
		::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_LinearModuleGenerator_ModuleData*>* ModuleDatas; // 0x48
		::RPG::Client::LinearModuleRendererMonoPlugin* _RendererPlugin; // 0x50
		::System::Int32 _GroupID; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_EF2E74CEEC4FEFA5(::BGCurveExtention* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BGCurveExtention*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_METHOD_2_EF2E74CEEC4FEFA5_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_19E6130E11DE9B10(::BGCurveExtention* a1, ::UnityEngine::Transform* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::BGCurveExtention*, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_METHOD_2_19E6130E11DE9B10_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_3E6AC14EE28F55D4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_METHOD_2_3E6AC14EE28F55D4_OFFSET))(this);
		}

		::System::Void Method_2_B2C52ACF9D9B435B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_METHOD_2_B2C52ACF9D9B435B_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_2_DC4DC6EABAAA4D92(::RPG::Editor::BGCurvePCG_LinearModuleGenerator_ModuleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Editor::BGCurvePCG_LinearModuleGenerator_ModuleData*))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_METHOD_2_DC4DC6EABAAA4D92_OFFSET))(this, a1);
		}

		::System::Void Method_2_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_2_B3E571562CE5C70B(::RPG::Editor::BGCurvePCG_LinearModuleGenerator_ModuleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Editor::BGCurvePCG_LinearModuleGenerator_ModuleData*))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_METHOD_2_B3E571562CE5C70B_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_1_F0BC55524B5D6A07_Class_1_E7B1DF5735A03963*>* Method_2_738344B708B7B678(::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94*>* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_F0BC55524B5D6A07_Class_1_E7B1DF5735A03963*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_METHOD_2_738344B708B7B678_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_LinearModuleGenerator_ItemData*>* Method_2_75A9B927F52C4894(::System::Collections::Generic::List_1<::Class_1_F0BC55524B5D6A07_Class_1_E7B1DF5735A03963*>* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_LinearModuleGenerator_ItemData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_F0BC55524B5D6A07_Class_1_E7B1DF5735A03963*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_METHOD_2_75A9B927F52C4894_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector4 Method_2_796376D4C7B57B85(::RPG::Editor::BGCurvePCG_LinearModuleGenerator_ItemData* a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::RPG::Editor::BGCurvePCG_LinearModuleGenerator_ItemData*))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_METHOD_2_796376D4C7B57B85_OFFSET))(this, a1);
		}

		::System::Single Method_2_F496458A8038CA66(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_METHOD_2_F496458A8038CA66_OFFSET))(this, a1);
		}

		::System::UInt32 Method_2_13F0FEDB1C58AAEC(::System::Single a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_METHOD_2_13F0FEDB1C58AAEC_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_8EE45C9ADEDB0506(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_METHOD_2_8EE45C9ADEDB0506_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
