#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

class Class_1_8E6394891B1A4CC4;
namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE_DOCHESSBOARDPERFORM_OFFSET UNITYSDK_OFFSET(0x15110CE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE_MUTEINPUT_OFFSET UNITYSDK_OFFSET(0x15111380)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE_ONCUTSCENEDESTROY_OFFSET UNITYSDK_OFFSET(0x15110FC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE_ONCUTSCENEFINISH_OFFSET UNITYSDK_OFFSET(0x15111040)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE_PROCESSUIFADEIN_OFFSET UNITYSDK_OFFSET(0x15111000)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x15110840)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE_SETUPUI_OFFSET UNITYSDK_OFFSET(0x151110E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE_START_OFFSET UNITYSDK_OFFSET(0x151109C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x15111A40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x15111A00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE__DOCHESSBOARDPERFORM_B__12_0_OFFSET UNITYSDK_OFFSET(0x15111AB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE__REGISTERPORTS_B__10_0_OFFSET UNITYSDK_OFFSET(0x15111A80)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDChessInPerformance_TypeDefinitionIndex = 46290;

	class LDChessInPerformance : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		static ::System::String** StaticGet_setupTag()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LDChessInPerformance_TypeDefinitionIndex)->GetStaticField(0x40F10);
		}
		::FlowCanvas::FlowInput* input; // 0xA8
		::FlowCanvas::FlowOutput* successOutput; // 0xB0
		::Class_1_8E6394891B1A4CC4* cachedShotTask; // 0xB8
		::FlowCanvas::ValueInput_1<::System::String*>* cutSceneIdInput; // 0xC0
		::FlowCanvas::FlowOutput* output; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Boolean>* isGroupDataInput; // 0xD0
		::FlowCanvas::FlowOutput* noChessBoardOutput; // 0xD8
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::System::String*>*>* cutScenePointsInput; // 0xE0
		::System::Boolean muteInputState; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE__CCTOR_OFFSET))();
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE_START_OFFSET))(this, f);
		}

		::System::Boolean DoChessBoardPerform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE_DOCHESSBOARDPERFORM_OFFSET))(this);
		}

		::System::Void OnCutSceneDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE_ONCUTSCENEDESTROY_OFFSET))(this);
		}

		::System::Void ProcessUIFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE_PROCESSUIFADEIN_OFFSET))(this);
		}

		::System::Void OnCutSceneFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE_ONCUTSCENEFINISH_OFFSET))(this);
		}

		::System::Void SetUpUI(::System::Boolean showStatus, ::System::Boolean ignoreAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE_SETUPUI_OFFSET))(this, showStatus, ignoreAnimation);
		}

		::System::Void MuteInput(::System::Boolean status)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE_MUTEINPUT_OFFSET))(this, status);
		}

		::System::Void _RegisterPorts_b__10_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE__REGISTERPORTS_B__10_0_OFFSET))(this, f);
		}

		::System::Void _DoChessBoardPerform_b__12_0(::Class_1_8E6394891B1A4CC4* task)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8E6394891B1A4CC4*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE__DOCHESSBOARDPERFORM_B__12_0_OFFSET))(this, task);
		}
	};
}
