#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"
#include "unitysdk/MoleMole/FairyTextUpdateType.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDFAIRYTEXTMIDDLETIP_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x12BB1BF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDFAIRYTEXTMIDDLETIP__CTOR_OFFSET UNITYSDK_OFFSET(0x12BB1D50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDFAIRYTEXTMIDDLETIP__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x12BB1D90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDFAIRYTEXTMIDDLETIP__REGISTERPORTS_B__5_1_OFFSET UNITYSDK_OFFSET(0x12BB1E80)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDFairyTextMiddleTip_TypeDefinitionIndex = 59532;

	class LDFairyTextMiddleTip : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::ValueOutput_1<::System::String*>* FinalText; // 0xA8
		::FlowCanvas::ValueOutput_1<::MoleMole::FairyTextUpdateType>* UpdateType; // 0xB0
		::FlowCanvas::ValueInput_1<::System::String*>* MiddleTipText; // 0xB8
		::FlowCanvas::ValueInput_1<::System::String*>* NoMiddleTipText; // 0xC0
		::System::Boolean middleTip; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFAIRYTEXTMIDDLETIP__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFAIRYTEXTMIDDLETIP_REGISTERPORTS_OFFSET))(this);
		}

		::System::String* _RegisterPorts_b__5_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFAIRYTEXTMIDDLETIP__REGISTERPORTS_B__5_0_OFFSET))(this);
		}

		::MoleMole::FairyTextUpdateType _RegisterPorts_b__5_1()
		{
			return ((::MoleMole::FairyTextUpdateType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFAIRYTEXTMIDDLETIP__REGISTERPORTS_B__5_1_OFFSET))(this);
		}
	};
}
