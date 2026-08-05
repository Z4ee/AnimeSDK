#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDApplyDataToGameVariable_DataType.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDAPPLYDATATOGAMEVARIABLE_APPLAYDATA_OFFSET UNITYSDK_OFFSET(0x19BDA3C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDAPPLYDATATOGAMEVARIABLE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x19BDA230)
#define MOLEMOLE_FLOWCANVAS_NODES_LDAPPLYDATATOGAMEVARIABLE_START_OFFSET UNITYSDK_OFFSET(0x19BDA320)
#define MOLEMOLE_FLOWCANVAS_NODES_LDAPPLYDATATOGAMEVARIABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19BDA710)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDApplyDataToGameVariable_TypeDefinitionIndex = 76030;

	class LDApplyDataToGameVariable : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>* performParam; // 0xA8
		::FlowCanvas::FlowOutput* _output; // 0xB0
		::FlowCanvas::FlowInput* _input; // 0xB8
		::MoleMole::FlowCanvas::Nodes::LDApplyDataToGameVariable_DataType dataType; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDAPPLYDATATOGAMEVARIABLE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDAPPLYDATATOGAMEVARIABLE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDAPPLYDATATOGAMEVARIABLE_START_OFFSET))(this, f);
		}

		::System::Void ApplayData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDAPPLYDATATOGAMEVARIABLE_APPLAYDATA_OFFSET))(this);
		}
	};
}
