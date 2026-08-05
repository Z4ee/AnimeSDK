#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9DFB39885391F41D.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LD_InLevelChat; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1383D4C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT___C__DISPLAYCLASS18_0__REGISTERPORTS_B__4_OFFSET UNITYSDK_OFFSET(0x1383D4D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_InLevelChat___c__DisplayClass18_0_TypeDefinitionIndex = 62635;

	class LD_InLevelChat___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::Struct_2_9DFB39885391F41D taggerHandle; // 0x10
		::MoleMole::FlowCanvas::Nodes::LD_InLevelChat* __4__this; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELCHAT___C__DISPLAYCLASS18_0__REGISTERPORTS_B__4_OFFSET))(this);
		}
	};
}
