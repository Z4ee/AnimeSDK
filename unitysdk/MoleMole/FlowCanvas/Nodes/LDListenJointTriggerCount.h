#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/Config/MonsterFunctionType.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole { class LevelNodeEventTrigger; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT_ATTACHEVENT_OFFSET UNITYSDK_OFFSET(0x1A0223F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT_CHECKMONSTERFUNCTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A022FB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A021D20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT_ISALLAVATARIN_OFFSET UNITYSDK_OFFSET(0x1A023220)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT_ISENTITYEXITALLTRIGGER_OFFSET UNITYSDK_OFFSET(0x1A0239E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1A0225A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1A0225F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT_ONTRIGGERENTITYENTER_OFFSET UNITYSDK_OFFSET(0x1A022A10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT_ONTRIGGERENTITYEXIT_OFFSET UNITYSDK_OFFSET(0x1A023800)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT_ONTRIGGERENTITYSTAY_OFFSET UNITYSDK_OFFSET(0x1A0235F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A021890)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A023B60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT__DORESET_OFFSET UNITYSDK_OFFSET(0x1A022640)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT__REGISTERPORTS_B__26_0_OFFSET UNITYSDK_OFFSET(0x1A023CB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT__REGISTERPORTS_B__26_1_OFFSET UNITYSDK_OFFSET(0x1A023CC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT__REGISTERPORTS_B__26_2_OFFSET UNITYSDK_OFFSET(0x1A023CD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT__REGISTERPORTS_B__26_3_OFFSET UNITYSDK_OFFSET(0x1A023CE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT__REGISTERPORTS_B__26_4_OFFSET UNITYSDK_OFFSET(0x1A023CF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT__REGISTERPORTS_B__26_5_OFFSET UNITYSDK_OFFSET(0x1A023D00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT__REGISTERPORTS_B__26_6_OFFSET UNITYSDK_OFFSET(0x1A0240A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1A0240B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1A0240C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDListenJointTriggerCount_TypeDefinitionIndex = 46894;

	class LDListenJointTriggerCount : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* triggerExitSet; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Boolean>* enableMonsterValueInput; // 0xB0
		::FlowCanvas::FlowOutput* triggerEnter; // 0xB8
		::System::Collections::Generic::HashSet_1<::System::UInt32>* triggerEnterSet; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Boolean>* functionTypeEnableValueInput; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Int32>* listenCountValueInput; // 0xD0
		::FlowCanvas::FlowOutput* triggerExit; // 0xD8
		::FlowCanvas::ValueInput_1<::System::Boolean>* colliderEnableValueInput; // 0xE0
		::FlowCanvas::FlowOutput* raised; // 0xE8
		::MoleMole::Battle::Entity* triggerExitEntity; // 0xF0
		::FlowCanvas::FlowOutput* triggerStay; // 0xF8
		::FlowCanvas::FlowOutput* finish; // 0x100
		::FlowCanvas::ValueInput_1<::System::Boolean>* enableAvatarValueInput; // 0x108
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::System::String*>*>* enableGameplayTagsValueInput; // 0x110
		::System::Collections::Generic::List_1<::MoleMole::LevelNodeEventTrigger*>* levelTriggerList; // 0x118
		::MoleMole::Battle::Entity* triggerStayEntity; // 0x120
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::MoleMole::Config::MonsterFunctionType>*>* monsterFunctionTypeValueInput; // 0x128
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::System::String*>*>* spawnPointValueInput; // 0x130
		::MoleMole::Battle::Entity* triggerEnterEntity; // 0x138
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* triggerStayRecordDic; // 0x140
		::System::Int32 triggerEnterCount; // 0x148
		::System::Boolean attachEvent; // 0x14C
		::System::Boolean AutoReset; // 0x14D
		::System::Boolean finished; // 0x14E
		::System::Boolean createTriggerResult; // 0x14F
		::System::Boolean triggerCreate; // 0x150

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Collections::Generic::List_1<::System::String*>* pointList, ::System::Boolean avatarEnable, ::System::Boolean monsterEnable, ::System::Collections::Generic::List_1<::System::String*>* enableGameplayTags)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT_INVOKE_OFFSET))(this, pointList, avatarEnable, monsterEnable, enableGameplayTags);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void _DoReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT__DORESET_OFFSET))(this);
		}

		::System::Void AttachEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT_ATTACHEVENT_OFFSET))(this);
		}

		::System::Void OnTriggerEntityEnter(::MoleMole::Battle::Entity* ent)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT_ONTRIGGERENTITYENTER_OFFSET))(this, ent);
		}

		::System::Void OnTriggerEntityStay(::MoleMole::Battle::Entity* ent)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT_ONTRIGGERENTITYSTAY_OFFSET))(this, ent);
		}

		::System::Void OnTriggerEntityExit(::MoleMole::Battle::Entity* ent)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT_ONTRIGGERENTITYEXIT_OFFSET))(this, ent);
		}

		::System::Boolean IsEntityExitAllTrigger(::MoleMole::Battle::Entity* ent)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT_ISENTITYEXITALLTRIGGER_OFFSET))(this, ent);
		}

		::System::Boolean IsAllAvatarIn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT_ISALLAVATARIN_OFFSET))(this);
		}

		::System::Boolean CheckMonsterFunctionType(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT_CHECKMONSTERFUNCTIONTYPE_OFFSET))(this, entity);
		}

		::System::Int32 _RegisterPorts_b__26_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT__REGISTERPORTS_B__26_0_OFFSET))(this);
		}

		::System::Boolean _RegisterPorts_b__26_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT__REGISTERPORTS_B__26_1_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__26_2()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT__REGISTERPORTS_B__26_2_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__26_3()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT__REGISTERPORTS_B__26_3_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__26_4()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT__REGISTERPORTS_B__26_4_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__26_5(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT__REGISTERPORTS_B__26_5_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__26_6(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT__REGISTERPORTS_B__26_6_OFFSET))(this, f);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENJOINTTRIGGERCOUNT___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
