#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class Class_2_208CC9941471731A_477;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole::FlowCanvas::Nodes { class CreateItemData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEM_CREATEITEMCO_OFFSET UNITYSDK_OFFSET(0x107D4BB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEM_GETCREATERESULTS_OFFSET UNITYSDK_OFFSET(0x107D4C30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEM_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x107D4810)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEM_SPAWNITEM_OFFSET UNITYSDK_OFFSET(0x107D4CE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEM_STARTCREATE_OFFSET UNITYSDK_OFFSET(0x107D4A30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x107D5250)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWaveItem_TypeDefinitionIndex = 45514;

	class LDWaveItem : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_477*, ::System::Int32>>* itemList; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Int32>* itemIdInput; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Single>* defaultIntervalInput; // 0xB8
		::FlowCanvas::FlowOutput* output; // 0xC0
		::FlowCanvas::ValueOutput_1<::System::Collections::Generic::List_1<::System::UInt32>*>* itemIdListOutput; // 0xC8
		::FlowCanvas::FlowOutput* finishOutput; // 0xD0
		::UnityEngine::Coroutine* createCo; // 0xD8
		::FlowCanvas::ValueInput_1<::System::Int32>* overridePickTypeInput; // 0xE0
		::System::Collections::Generic::List_1<::System::UInt32>* createIdList; // 0xE8
		::FlowCanvas::ValueInput_1<::System::Boolean>* defaultActiveInput; // 0xF0
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::CreateItemData*>*>* createList; // 0xF8
		::System::Boolean runInCo; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEM__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEM_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void StartCreate(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEM_STARTCREATE_OFFSET))(this, f);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetCreateResults()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEM_GETCREATERESULTS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* CreateItemCo()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEM_CREATEITEMCO_OFFSET))(this);
		}

		::System::Void SpawnItem(::System::String* anchorPos, ::System::Int32 itemId, ::MoleMole::GameplayTag tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEM_SPAWNITEM_OFFSET))(this, anchorPos, itemId, tag);
		}
	};
}
