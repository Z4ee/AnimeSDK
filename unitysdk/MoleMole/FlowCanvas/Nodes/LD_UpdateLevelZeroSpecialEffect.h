#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Cameras { class AsistantCameraEffect; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_UPDATELEVELZEROSPECIALEFFECT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x16D47090)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_UPDATELEVELZEROSPECIALEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x16D47260)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_UPDATELEVELZEROSPECIALEFFECT__REGISTERPORTS_B__11_0_OFFSET UNITYSDK_OFFSET(0x16D472A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_UPDATELEVELZEROSPECIALEFFECT__REGISTERPORTS_B__11_1_OFFSET UNITYSDK_OFFSET(0x16D472B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_UPDATELEVELZEROSPECIALEFFECT__UPDATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x16D471E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_UpdateLevelZeroSpecialEffect_TypeDefinitionIndex = 65666;

	class LD_UpdateLevelZeroSpecialEffect : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::MoleMole::Cameras::AsistantCameraEffect*>* _inEffInstance; // 0xA8
		::System::String* ValKey; // 0xB0
		::UnityEngine::GameObject* _outputEffectGO; // 0xB8
		::FlowCanvas::FlowOutput* output; // 0xC0
		::System::String* RTKey; // 0xC8
		::System::String* effectInsKey; // 0xD0
		::FlowCanvas::FlowOutput* onFinish; // 0xD8
		::System::Boolean _isInUpdateProgress; // 0xE0
		::UnityEngine::Vector2 rangeValue; // 0xE4
		::System::Single effectDuration; // 0xEC
		::System::Single _dt; // 0xF0
		::System::Single delayTime; // 0xF4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_UPDATELEVELZEROSPECIALEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_UPDATELEVELZEROSPECIALEFFECT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Collections::IEnumerator* _UpdateInternal()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_UPDATELEVELZEROSPECIALEFFECT__UPDATEINTERNAL_OFFSET))(this);
		}

		::UnityEngine::GameObject* _RegisterPorts_b__11_0()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_UPDATELEVELZEROSPECIALEFFECT__REGISTERPORTS_B__11_0_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__11_1(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_UPDATELEVELZEROSPECIALEFFECT__REGISTERPORTS_B__11_1_OFFSET))(this, flow);
		}
	};
}
