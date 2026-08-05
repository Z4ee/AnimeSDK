#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas::Nodes { class SwitchEnum___c__DisplayClass7_0; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FLOWCANVAS_NODES_SWITCHENUM___C__DISPLAYCLASS7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB7F420)
#define FLOWCANVAS_NODES_SWITCHENUM___C__DISPLAYCLASS7_1__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1EB7F430)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SwitchEnum___c__DisplayClass7_1_TypeDefinitionIndex = 29764;

	class SwitchEnum___c__DisplayClass7_1 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::SwitchEnum___c__DisplayClass7_0* CS___8__locals1; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::FlowCanvas::FlowOutput*>* cases; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHENUM___C__DISPLAYCLASS7_1__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHENUM___C__DISPLAYCLASS7_1__REGISTERPORTS_B__0_OFFSET))(this, f);
		}
	};
}
