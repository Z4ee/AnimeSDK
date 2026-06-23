#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDSound_TargetType.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSOUND_BEGIN_OFFSET UNITYSDK_OFFSET(0x161E30E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSOUND_GETORCREATEAUDIOEMITTER_OFFSET UNITYSDK_OFFSET(0x161E3340)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSOUND_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x161E2F80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSOUND__CTOR_OFFSET UNITYSDK_OFFSET(0x161E4510)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSOUND__REGISTERPORTS_B__10_0_OFFSET UNITYSDK_OFFSET(0x161E4550)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSound_TypeDefinitionIndex = 62810;

	class LDSound : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowInput* input; // 0xA8
		::FlowCanvas::ValueInput_1<::System::String*>* targetAnchor; // 0xB0
		::System::String* soundAction; // 0xB8
		::FlowCanvas::FlowOutput* output; // 0xC0
		::FlowCanvas::FlowOutput* finishOutput; // 0xC8
		::FlowCanvas::ValueInput_1<::System::String*>* targetKey; // 0xD0
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* targetEntity; // 0xD8
		::System::String* sound; // 0xE0
		::MoleMole::FlowCanvas::Nodes::LDSound_TargetType targetType; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSOUND__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSOUND_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Begin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSOUND_BEGIN_OFFSET))(this, f);
		}

		::UnityEngine::GameObject* GetOrCreateAudioEmitter()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSOUND_GETORCREATEAUDIOEMITTER_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__10_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSOUND__REGISTERPORTS_B__10_0_OFFSET))(this, f);
		}
	};
}
