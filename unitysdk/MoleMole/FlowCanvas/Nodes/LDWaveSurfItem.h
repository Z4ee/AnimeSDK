#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class Class_0_16E4307DCC419505_297;
class Class_2_208CC9941471731A_477;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole { class MonoSpawnPoint; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESURFITEM_CREATEITEMCO_OFFSET UNITYSDK_OFFSET(0x13A8B3E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESURFITEM_GETCREATERESULTS_OFFSET UNITYSDK_OFFSET(0x13A8B460)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESURFITEM_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x13A8B020)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESURFITEM_SPAWNITEM_1_OFFSET UNITYSDK_OFFSET(0x13A8B770)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESURFITEM_SPAWNITEM_OFFSET UNITYSDK_OFFSET(0x13A8B510)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESURFITEM_STARTCREATE_OFFSET UNITYSDK_OFFSET(0x13A8B260)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVESURFITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x13A8BAE0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWaveSurfItem_TypeDefinitionIndex = 75878;

	class LDWaveSurfItem : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* createIdList; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Int32>* surfItemIdInput; // 0xB0
		::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_477*, ::System::Int32>>* itemList; // 0xB8
		::FlowCanvas::ValueInput_1<::System::String*>* spawnPointPrefixInput; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Int32>* overridePickTypeInput; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Boolean>* defaultActiveInput; // 0xD0
		::FlowCanvas::ValueInput_1<::System::Int32>* itemIdInput; // 0xD8
		::FlowCanvas::ValueOutput_1<::System::Collections::Generic::List_1<::System::UInt32>*>* itemIdListOutput; // 0xE0
		::FlowCanvas::FlowOutput* finishOutput; // 0xE8
		::FlowCanvas::FlowOutput* output; // 0xF0
		::UnityEngine::Coroutine* createCo; // 0xF8
		::FlowCanvas::ValueInput_1<::System::Single>* defaultIntervalInput; // 0x100
		::System::Boolean runInCo; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESURFITEM__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESURFITEM_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void StartCreate(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESURFITEM_STARTCREATE_OFFSET))(this, f);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetCreateResults()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESURFITEM_GETCREATERESULTS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* CreateItemCo()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESURFITEM_CREATEITEMCO_OFFSET))(this);
		}

		::System::Void SpawnItem(::System::String* anchorPos, ::System::Int32 itemId, ::MoleMole::GameplayTag tag, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_297*>* traitList)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::MoleMole::GameplayTag, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_297*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESURFITEM_SPAWNITEM_OFFSET))(this, anchorPos, itemId, tag, traitList);
		}

		::System::Void SpawnItem_1(::MoleMole::MonoSpawnPoint* spawnPoint, ::System::Int32 itemId, ::MoleMole::GameplayTag tag, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_297*>* traitList)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoSpawnPoint*, ::System::Int32, ::MoleMole::GameplayTag, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_297*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVESURFITEM_SPAWNITEM_1_OFFSET))(this, spawnPoint, itemId, tag, traitList);
		}
	};
}
