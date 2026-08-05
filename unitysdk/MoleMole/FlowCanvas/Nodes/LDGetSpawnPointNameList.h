#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSPAWNPOINTNAMELIST_BEGIN_OFFSET UNITYSDK_OFFSET(0x118B6310)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSPAWNPOINTNAMELIST_INVOKE_OFFSET UNITYSDK_OFFSET(0x118B5F50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSPAWNPOINTNAMELIST_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x118B6180)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSPAWNPOINTNAMELIST__CTOR_OFFSET UNITYSDK_OFFSET(0x118B64A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSPAWNPOINTNAMELIST__REGISTERPORTS_B__7_0_OFFSET UNITYSDK_OFFSET(0x118B64E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSPAWNPOINTNAMELIST__REGISTERPORTS_B__7_1_OFFSET UNITYSDK_OFFSET(0x118B64F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetSpawnPointNameList_TypeDefinitionIndex = 76403;

	class LDGetSpawnPointNameList : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::String*>* anchorGroupNameInput; // 0xA8
		::FlowCanvas::FlowOutput* _flowOutput; // 0xB0
		::FlowCanvas::FlowInput* _flowInput; // 0xB8
		::FlowCanvas::ValueOutput_1<::System::Boolean>* _vaildOutput; // 0xC0
		::FlowCanvas::ValueOutput_1<::System::Collections::Generic::List_1<::System::String*>*>* _valueOutput; // 0xC8
		::System::Collections::Generic::List_1<::System::String*>* curValue; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSPAWNPOINTNAMELIST__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* Invoke(::System::String* anchorGroup)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSPAWNPOINTNAMELIST_INVOKE_OFFSET))(this, anchorGroup);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSPAWNPOINTNAMELIST_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Begin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSPAWNPOINTNAMELIST_BEGIN_OFFSET))(this, f);
		}

		::System::Collections::Generic::List_1<::System::String*>* _RegisterPorts_b__7_0()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSPAWNPOINTNAMELIST__REGISTERPORTS_B__7_0_OFFSET))(this);
		}

		::System::Boolean _RegisterPorts_b__7_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSPAWNPOINTNAMELIST__REGISTERPORTS_B__7_1_OFFSET))(this);
		}
	};
}
