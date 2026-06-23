#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/Config/TextureSheetInterruptType.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_TEXTURESHEET_PLAY_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x17115030)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_TEXTURESHEET_PLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x171151D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_TEXTURESHEET_PLAY__REGISTERPORTS_B__7_0_OFFSET UNITYSDK_OFFSET(0x17115210)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_TextureSheet_Play_TypeDefinitionIndex = 47834;

	class LD_TextureSheet_Play : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* _targetEntity; // 0xA8
		::FlowCanvas::ValueInput_1<::System::String*>* _meshPath; // 0xB0
		::FlowCanvas::FlowOutput* _output; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Boolean>* _isKeepLastFrame; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Boolean>* _isForceUpdate; // 0xC8
		::FlowCanvas::ValueInput_1<::System::String*>* _textureSheetKey; // 0xD0
		::FlowCanvas::ValueInput_1<::MoleMole::Config::TextureSheetInterruptType>* _interruptType; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_TEXTURESHEET_PLAY__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_TEXTURESHEET_PLAY_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__7_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_TEXTURESHEET_PLAY__REGISTERPORTS_B__7_0_OFFSET))(this, flow);
		}
	};
}
