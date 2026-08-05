#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole { class LevelNodeEventTrigger; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATETRIGGERNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x118B2290)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATETRIGGERNODE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x118B29B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATETRIGGERNODE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x118B2A00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATETRIGGERNODE_ONTRIGGERENTITYENTER_OFFSET UNITYSDK_OFFSET(0x118B2D90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATETRIGGERNODE_ONTRIGGERENTITYEXIT_OFFSET UNITYSDK_OFFSET(0x118B3210)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATETRIGGERNODE_ONTRIGGERENTITYSTAY_OFFSET UNITYSDK_OFFSET(0x118B2FD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATETRIGGERNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x118B1ED0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATETRIGGERNODE__ATTACHEVENT_OFFSET UNITYSDK_OFFSET(0x118B2740)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATETRIGGERNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x118B3450)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATETRIGGERNODE__REGISTERPORTS_B__17_0_OFFSET UNITYSDK_OFFSET(0x118B3490)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATETRIGGERNODE__REGISTERPORTS_B__17_1_OFFSET UNITYSDK_OFFSET(0x118B34A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATETRIGGERNODE__REGISTERPORTS_B__17_2_OFFSET UNITYSDK_OFFSET(0x118B34B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATETRIGGERNODE__REGISTERPORTS_B__17_3_OFFSET UNITYSDK_OFFSET(0x118B34C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATETRIGGERNODE__REGISTERPORTS_B__17_4_OFFSET UNITYSDK_OFFSET(0x118B34D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATETRIGGERNODE__REGISTERPORTS_B__17_5_OFFSET UNITYSDK_OFFSET(0x118B34E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATETRIGGERNODE__RESETATTACHEVENT_OFFSET UNITYSDK_OFFSET(0x118B2D40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATETRIGGERNODE___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x118B3840)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATETRIGGERNODE___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x118B3850)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCreateTriggerNode_TypeDefinitionIndex = 42787;

	class LDCreateTriggerNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* triggerEnter; // 0xA8
		::MoleMole::LevelNodeEventTrigger* levelTrigger; // 0xB0
		::MoleMole::Battle::Entity* triggerStayEntity; // 0xB8
		::FlowCanvas::FlowOutput* triggerStay; // 0xC0
		::MoleMole::Battle::Entity* triggerExitEntity; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Boolean>* colliderEnableValueInput; // 0xD0
		::UnityEngine::GameObject* _triggerObject; // 0xD8
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::System::String*>*>* enableGameplayTagsValueInput; // 0xE0
		::FlowCanvas::ValueInput_1<::System::String*>* spawnPointValueInput; // 0xE8
		::FlowCanvas::ValueInput_1<::System::Boolean>* additivePriorityFirst; // 0xF0
		::MoleMole::Battle::Entity* triggerEnterEntity; // 0xF8
		::FlowCanvas::ValueInput_1<::System::Boolean>* enableMonsterValueInput; // 0x100
		::FlowCanvas::FlowOutput* triggerExit; // 0x108
		::FlowCanvas::FlowOutput* raised; // 0x110
		::FlowCanvas::ValueInput_1<::System::Boolean>* enableAvatarValueInput; // 0x118
		::System::Boolean createTriggerResult; // 0x120
		::System::Boolean attachEvent; // 0x121

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATETRIGGERNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATETRIGGERNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::String* point, ::System::Boolean avatarEnable, ::System::Boolean monsterEnable, ::System::Collections::Generic::List_1<::System::String*>* enableGameplayTags)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATETRIGGERNODE_INVOKE_OFFSET))(this, point, avatarEnable, monsterEnable, enableGameplayTags);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATETRIGGERNODE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATETRIGGERNODE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void _ResetAttachEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATETRIGGERNODE__RESETATTACHEVENT_OFFSET))(this);
		}

		::System::Void _AttachEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATETRIGGERNODE__ATTACHEVENT_OFFSET))(this);
		}

		::System::Void OnTriggerEntityEnter(::MoleMole::Battle::Entity* ent)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATETRIGGERNODE_ONTRIGGERENTITYENTER_OFFSET))(this, ent);
		}

		::System::Void OnTriggerEntityStay(::MoleMole::Battle::Entity* ent)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATETRIGGERNODE_ONTRIGGERENTITYSTAY_OFFSET))(this, ent);
		}

		::System::Void OnTriggerEntityExit(::MoleMole::Battle::Entity* ent)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATETRIGGERNODE_ONTRIGGERENTITYEXIT_OFFSET))(this, ent);
		}

		::System::Boolean _RegisterPorts_b__17_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATETRIGGERNODE__REGISTERPORTS_B__17_0_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__17_1()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATETRIGGERNODE__REGISTERPORTS_B__17_1_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__17_2()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATETRIGGERNODE__REGISTERPORTS_B__17_2_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__17_3()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATETRIGGERNODE__REGISTERPORTS_B__17_3_OFFSET))(this);
		}

		::UnityEngine::GameObject* _RegisterPorts_b__17_4()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATETRIGGERNODE__REGISTERPORTS_B__17_4_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__17_5(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATETRIGGERNODE__REGISTERPORTS_B__17_5_OFFSET))(this, f);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATETRIGGERNODE___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATETRIGGERNODE___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
