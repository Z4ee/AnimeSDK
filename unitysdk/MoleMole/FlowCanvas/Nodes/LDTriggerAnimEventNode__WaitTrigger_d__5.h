#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::FlowCanvas::Nodes { class EntitySaveDataMap; }
namespace MoleMole::FlowCanvas::Nodes { class LDTriggerAnimEventNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTRIGGERANIMEVENTNODE__WAITTRIGGER_D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x17E745C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTRIGGERANIMEVENTNODE__WAITTRIGGER_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17E74730)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTRIGGERANIMEVENTNODE__WAITTRIGGER_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17E74790)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTRIGGERANIMEVENTNODE__WAITTRIGGER_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x17E74740)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTRIGGERANIMEVENTNODE__WAITTRIGGER_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17E745B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTRIGGERANIMEVENTNODE__WAITTRIGGER_D__5__CTOR_OFFSET UNITYSDK_OFFSET(0x17E745A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTriggerAnimEventNode__WaitTrigger_d__5_TypeDefinitionIndex = 44670;

	class LDTriggerAnimEventNode__WaitTrigger_d__5 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* BoolParam; // 0x10
		::MoleMole::FlowCanvas::Nodes::EntitySaveDataMap* enitytMap; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* IntParam; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* FloatParam; // 0x28
		::System::Object* __2__current; // 0x30
		::MoleMole::Battle::Entity* entity; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* TriggerParam; // 0x40
		::MoleMole::FlowCanvas::Nodes::LDTriggerAnimEventNode* __4__this; // 0x48
		::System::Single delay; // 0x50
		::System::Int32 __1__state; // 0x54

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTRIGGERANIMEVENTNODE__WAITTRIGGER_D__5__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTRIGGERANIMEVENTNODE__WAITTRIGGER_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTRIGGERANIMEVENTNODE__WAITTRIGGER_D__5_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTRIGGERANIMEVENTNODE__WAITTRIGGER_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTRIGGERANIMEVENTNODE__WAITTRIGGER_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTRIGGERANIMEVENTNODE__WAITTRIGGER_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
