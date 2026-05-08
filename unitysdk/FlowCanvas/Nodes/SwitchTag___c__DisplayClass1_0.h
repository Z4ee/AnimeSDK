#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Nodes { class SwitchTag; }
namespace UnityEngine { class GameObject; }

#define FLOWCANVAS_NODES_SWITCHTAG___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0ED290)
#define FLOWCANVAS_NODES_SWITCHTAG___C__DISPLAYCLASS1_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1B0ED2A0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SwitchTag___c__DisplayClass1_0_TypeDefinitionIndex = 26651;

	class SwitchTag___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::FlowCanvas::FlowOutput*>* cases; // 0x10
		::FlowCanvas::ValueInput_1<::UnityEngine::GameObject*>* selector; // 0x18
		::FlowCanvas::Nodes::SwitchTag* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHTAG___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHTAG___C__DISPLAYCLASS1_0__REGISTERPORTS_B__0_OFFSET))(this, f);
		}
	};
}
