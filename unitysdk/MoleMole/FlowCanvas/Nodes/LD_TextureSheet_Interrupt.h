#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_TEXTURESHEET_INTERRUPT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x151275B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_TEXTURESHEET_INTERRUPT__CTOR_OFFSET UNITYSDK_OFFSET(0x151276E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_TEXTURESHEET_INTERRUPT__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x15127720)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_TextureSheet_Interrupt_TypeDefinitionIndex = 84477;

	class LD_TextureSheet_Interrupt : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::String*>* _textureSheetKey; // 0xA8
		::FlowCanvas::FlowOutput* _output; // 0xB0
		::FlowCanvas::ValueInput_1<::System::String*>* _meshPath; // 0xB8
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* _targetEntity; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_TEXTURESHEET_INTERRUPT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_TEXTURESHEET_INTERRUPT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__4_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_TEXTURESHEET_INTERRUPT__REGISTERPORTS_B__4_0_OFFSET))(this, flow);
		}
	};
}
