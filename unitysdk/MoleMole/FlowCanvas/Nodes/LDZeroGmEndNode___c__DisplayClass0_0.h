#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"
#include "unitysdk/System/Object.h"

class Class_2_04E07F842ECC3B8E;

#define MOLEMOLE_FLOWCANVAS_NODES_LDZEROGMENDNODE___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A02CC50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDZEROGMENDNODE___C__DISPLAYCLASS0_0__INVOKE_B__0_OFFSET UNITYSDK_OFFSET(0x1A02CC60)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDZeroGmEndNode___c__DisplayClass0_0_TypeDefinitionIndex = 74699;

	class LDZeroGmEndNode___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::Boolean success; // 0x10
		::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType performType; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDZEROGMENDNODE___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Void _Invoke_b__0(::Class_2_04E07F842ECC3B8E* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_04E07F842ECC3B8E*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDZEROGMENDNODE___C__DISPLAYCLASS0_0__INVOKE_B__0_OFFSET))(this, evt);
		}
	};
}
