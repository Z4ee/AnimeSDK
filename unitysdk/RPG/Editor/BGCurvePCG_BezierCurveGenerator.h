#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Editor/BGCurvePCG_BezierCurveGenerator_CurveGenerateSetting.h"
#include "unitysdk/RPG/Editor/BGCurvePCG_MeshGeneratorBase.h"

class BGCurveExtention;
namespace RPG::Client { class BezierCurve; }
namespace RPG::Editor { class BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_EDITOR_BGCURVEPCG_BEZIERCURVEGENERATOR_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xA7B7ED0)
#define RPG_EDITOR_BGCURVEPCG_BEZIERCURVEGENERATOR_METHOD_2_1FF9A11EFEF8FFB3_OFFSET UNITYSDK_OFFSET(0xA7B8280)
#define RPG_EDITOR_BGCURVEPCG_BEZIERCURVEGENERATOR_METHOD_2_3C56C1AF247AC1EC_OFFSET UNITYSDK_OFFSET(0xA7B8A20)
#define RPG_EDITOR_BGCURVEPCG_BEZIERCURVEGENERATOR_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xA7B96A0)
#define RPG_EDITOR_BGCURVEPCG_BEZIERCURVEGENERATOR_METHOD_2_8894E534FED3129C_OFFSET UNITYSDK_OFFSET(0xA7B8220)
#define RPG_EDITOR_BGCURVEPCG_BEZIERCURVEGENERATOR_METHOD_2_96F7A194C92D21E8_OFFSET UNITYSDK_OFFSET(0xA7B8000)
#define RPG_EDITOR_BGCURVEPCG_BEZIERCURVEGENERATOR_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA7B8190)
#define RPG_EDITOR_BGCURVEPCG_BEZIERCURVEGENERATOR_METHOD_2_E631B63295647DB5_OFFSET UNITYSDK_OFFSET(0xA7B8140)
#define RPG_EDITOR_BGCURVEPCG_BEZIERCURVEGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA7B9770)

namespace RPG::Editor
{
	inline static constexpr unsigned int BGCurvePCG_BezierCurveGenerator_TypeDefinitionIndex = 42043;

	class BGCurvePCG_BezierCurveGenerator : public ::RPG::Editor::BGCurvePCG_MeshGeneratorBase
	{
	public:
		::System::String* GrpupName; // 0x30
		::RPG::Editor::BGCurvePCG_BezierCurveGenerator_CurveGenerateSetting Setting; // 0x38
		::RPG::Client::BezierCurve* _BezierCurve; // 0x58
		::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94*>* _Anchors; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_BEZIERCURVEGENERATOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_BEZIERCURVEGENERATOR_METHOD_2_1290EA767C459179_OFFSET))(this);
		}

		::System::Void Method_2_96F7A194C92D21E8(::BGCurveExtention* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BGCurveExtention*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_BEZIERCURVEGENERATOR_METHOD_2_96F7A194C92D21E8_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_E631B63295647DB5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_BEZIERCURVEGENERATOR_METHOD_2_E631B63295647DB5_OFFSET))(this);
		}

		::System::Void Method_2_8894E534FED3129C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_BEZIERCURVEGENERATOR_METHOD_2_8894E534FED3129C_OFFSET))(this);
		}

		::System::Void Method_2_3C56C1AF247AC1EC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_BEZIERCURVEGENERATOR_METHOD_2_3C56C1AF247AC1EC_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_BEZIERCURVEGENERATOR_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_2_1FF9A11EFEF8FFB3(::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94*>* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94*>*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_BEZIERCURVEGENERATOR_METHOD_2_1FF9A11EFEF8FFB3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_51CFFE2AF748ECD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_BEZIERCURVEGENERATOR_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
		}
	};
}
