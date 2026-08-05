#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDInteractNode; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTNODE___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8331B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTNODE___C__DISPLAYCLASS8_0__REGISTERPORTS_B__1_OFFSET UNITYSDK_OFFSET(0x1B8331C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDInteractNode___c__DisplayClass8_0_TypeDefinitionIndex = 84482;

	class LDInteractNode___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::String* valueName; // 0x10
		::MoleMole::FlowCanvas::Nodes::LDInteractNode* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTNODE___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Object* _RegisterPorts_b__1()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINTERACTNODE___C__DISPLAYCLASS8_0__REGISTERPORTS_B__1_OFFSET))(this);
		}
	};
}
