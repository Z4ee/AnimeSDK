#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDCreateInteractItemNode; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1427AB50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE___C__DISPLAYCLASS11_0__REGISTERPORTS_B__2_OFFSET UNITYSDK_OFFSET(0x1427AB60)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCreateInteractItemNode___c__DisplayClass11_0_TypeDefinitionIndex = 63335;

	class LDCreateInteractItemNode___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::LDCreateInteractItemNode* __4__this; // 0x10
		::System::String* valueName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Object* _RegisterPorts_b__2()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE___C__DISPLAYCLASS11_0__REGISTERPORTS_B__2_OFFSET))(this);
		}
	};
}
