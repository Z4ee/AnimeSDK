#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole::Cameras { class AsistantCameraEffect; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RenderTexture; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELZEROSPECIALEFFECT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x10E152B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELZEROSPECIALEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x10E156C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELZEROSPECIALEFFECT__DOLOAD_OFFSET UNITYSDK_OFFSET(0x10E154D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELZEROSPECIALEFFECT__REGISTERPORTS_B__18_0_OFFSET UNITYSDK_OFFSET(0x10E15710)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELZEROSPECIALEFFECT__REGISTERPORTS_B__18_1_OFFSET UNITYSDK_OFFSET(0x10E15720)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELZEROSPECIALEFFECT__UPDATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x10E15450)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_CreateLevelZeroSpecialEffect_TypeDefinitionIndex = 49752;

	class LD_CreateLevelZeroSpecialEffect : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* output; // 0xA8
		::FlowCanvas::ValueOutput_1<::MoleMole::Cameras::AsistantCameraEffect*>* outputEffIns; // 0xB0
		::MoleMole::Cameras::AsistantCameraEffect* _effInstance; // 0xB8
		::FlowCanvas::ValueInput_1<::System::String*>* extractXYZ; // 0xC0
		::FlowCanvas::ValueInput_1<::UnityEngine::RenderTexture*>* inTexture; // 0xC8
		::System::String* ValKey; // 0xD0
		::FlowCanvas::ValueInput_1<::System::String*>* effectPath; // 0xD8
		::System::String* RTKey; // 0xE0
		::System::String* effectInsKey; // 0xE8
		::FlowCanvas::FlowOutput* onFinish; // 0xF0
		::UnityEngine::GameObject* _effGo; // 0xF8
		::System::Boolean AttachMainCamera; // 0x100
		::System::Boolean _isInProgress; // 0x101
		::System::Boolean isClearAfterDuration; // 0x102
		::UnityEngine::Vector2 rangeValue; // 0x104
		::System::Single effectDuration; // 0x10C
		::System::Single delayTime; // 0x110
		::System::Single _dt; // 0x114
		::UnityEngine::Vector3 offset; // 0x118

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELZEROSPECIALEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELZEROSPECIALEFFECT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Collections::IEnumerator* _UpdateInternal()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELZEROSPECIALEFFECT__UPDATEINTERNAL_OFFSET))(this);
		}

		::System::Void _DoLoad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELZEROSPECIALEFFECT__DOLOAD_OFFSET))(this);
		}

		::MoleMole::Cameras::AsistantCameraEffect* _RegisterPorts_b__18_0()
		{
			return ((::MoleMole::Cameras::AsistantCameraEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELZEROSPECIALEFFECT__REGISTERPORTS_B__18_0_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__18_1(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELZEROSPECIALEFFECT__REGISTERPORTS_B__18_1_OFFSET))(this, flow);
		}
	};
}
