#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDMonsterDieCountNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERDIE_ONMONSTERDIE_OFFSET UNITYSDK_OFFSET(0x1427D1F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERDIE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1427CF60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERDIE__CTOR_OFFSET UNITYSDK_OFFSET(0x1427D980)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERDIE__REGISTERPORTS_B__1_0_OFFSET UNITYSDK_OFFSET(0x1427D9C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERDIE__REGISTERPORTS_B__1_1_OFFSET UNITYSDK_OFFSET(0x1427DB20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERDIE__REGISTERPORTS_B__1_2_OFFSET UNITYSDK_OFFSET(0x1427DC20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERDIE___BASE_ONMONSTERDIE_OFFSET UNITYSDK_OFFSET(0x1427DC30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERDIE___BASE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1427DC40)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDListenMonsterDie_TypeDefinitionIndex = 46775;

	class LDListenMonsterDie : public ::MoleMole::FlowCanvas::Nodes::LDMonsterDieCountNode
	{
	public:
		::System::UInt32 currentDieEntity; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERDIE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERDIE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnMonsterDie(::System::UInt32 fighterID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERDIE_ONMONSTERDIE_OFFSET))(this, fighterID);
		}

		::System::Void _RegisterPorts_b__1_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERDIE__REGISTERPORTS_B__1_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__1_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERDIE__REGISTERPORTS_B__1_1_OFFSET))(this, f);
		}

		::System::UInt32 _RegisterPorts_b__1_2()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERDIE__REGISTERPORTS_B__1_2_OFFSET))(this);
		}

		::System::Void __base_OnMonsterDie(::System::UInt32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERDIE___BASE_ONMONSTERDIE_OFFSET))(this, P0);
		}

		::System::Void __base_RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERDIE___BASE_REGISTERPORTS_OFFSET))(this);
		}
	};
}
