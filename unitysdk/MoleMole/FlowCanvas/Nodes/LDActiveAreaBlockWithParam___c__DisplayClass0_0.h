#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::FlowCanvas::Nodes { class LDActiveAreaBlockWithParam; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDACTIVEAREABLOCKWITHPARAM___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18413BF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDACTIVEAREABLOCKWITHPARAM___C__DISPLAYCLASS0_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x18413C00)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDActiveAreaBlockWithParam___c__DisplayClass0_0_TypeDefinitionIndex = 76483;

	class LDActiveAreaBlockWithParam___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Int32>* p3; // 0x10
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::System::String*>*>* p2; // 0x18
		::MoleMole::FlowCanvas::Nodes::LDActiveAreaBlockWithParam* __4__this; // 0x20
		::FlowCanvas::FlowOutput* o; // 0x28
		::FlowCanvas::ValueInput_1<::System::Int32>* p1; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDACTIVEAREABLOCKWITHPARAM___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDACTIVEAREABLOCKWITHPARAM___C__DISPLAYCLASS0_0__REGISTERPORTS_B__0_OFFSET))(this, f);
		}
	};
}
