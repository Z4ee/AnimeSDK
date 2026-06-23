#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

class Class_1_B7E341C5F1A6F199;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERARMORCHANGE_ADDLISTENHPABILITY_OFFSET UNITYSDK_OFFSET(0x1911EDA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERARMORCHANGE_BINDEVENT_OFFSET UNITYSDK_OFFSET(0x1911EF00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERARMORCHANGE_ENTITYONREADY_OFFSET UNITYSDK_OFFSET(0x1911ECF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERARMORCHANGE_ONEVENT_OFFSET UNITYSDK_OFFSET(0x1911F780)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERARMORCHANGE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1911F310)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERARMORCHANGE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1911F370)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERARMORCHANGE_ONPROPVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x1911F3C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERARMORCHANGE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1911E930)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERARMORCHANGE_START_OFFSET UNITYSDK_OFFSET(0x1911EAD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERARMORCHANGE_UNBINDEVENT_OFFSET UNITYSDK_OFFSET(0x1911F100)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERARMORCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1911FAE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERARMORCHANGE__REGISTERPORTS_B__8_0_OFFSET UNITYSDK_OFFSET(0x1911FB20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERARMORCHANGE___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1911FB70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERARMORCHANGE___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1911FB80)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDListenMonsterArmorChange_TypeDefinitionIndex = 54242;

	class LDListenMonsterArmorChange : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Single>* highToValuePercnetInput; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Single>* lowToValuePercentInput; // 0xB0
		::FlowCanvas::FlowOutput* onLowToValueOutPut; // 0xB8
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* entityInput; // 0xC0
		::FlowCanvas::FlowOutput* outPut; // 0xC8
		::FlowCanvas::FlowOutput* onHighToValueOutPut; // 0xD0
		::System::Boolean bindEvent; // 0xD8
		::System::Boolean isStart; // 0xD9

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERARMORCHANGE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERARMORCHANGE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERARMORCHANGE_START_OFFSET))(this);
		}

		::System::Void EntityOnReady(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERARMORCHANGE_ENTITYONREADY_OFFSET))(this, entity);
		}

		::System::Void BindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERARMORCHANGE_BINDEVENT_OFFSET))(this);
		}

		::System::Void AddListenHpAbility(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERARMORCHANGE_ADDLISTENHPABILITY_OFFSET))(this, entity);
		}

		::System::Void UnBindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERARMORCHANGE_UNBINDEVENT_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERARMORCHANGE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERARMORCHANGE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void OnPropValueChange(::MoleMole::Battle::Entity* monster, ::System::Double oldValue, ::System::Double newValue, ::System::Double max)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERARMORCHANGE_ONPROPVALUECHANGE_OFFSET))(this, monster, oldValue, newValue, max);
		}

		::System::Void OnEvent(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERARMORCHANGE_ONEVENT_OFFSET))(this, evt);
		}

		::System::Void _RegisterPorts_b__8_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERARMORCHANGE__REGISTERPORTS_B__8_0_OFFSET))(this, f);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERARMORCHANGE___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERARMORCHANGE___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
