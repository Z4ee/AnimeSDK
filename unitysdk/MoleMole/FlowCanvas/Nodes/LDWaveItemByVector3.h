#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_208CC9941471731A_131;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEMBYVECTOR3_CREATEITEMCO_OFFSET UNITYSDK_OFFSET(0x1541C100)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEMBYVECTOR3_GETCREATERESULTS_OFFSET UNITYSDK_OFFSET(0x1541C180)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEMBYVECTOR3_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1541BD70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEMBYVECTOR3_SPAWNITEM_OFFSET UNITYSDK_OFFSET(0x1541C230)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEMBYVECTOR3_STARTCREATE_OFFSET UNITYSDK_OFFSET(0x1541BF80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEMBYVECTOR3__CTOR_OFFSET UNITYSDK_OFFSET(0x1541C4D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWaveItemByVector3_TypeDefinitionIndex = 72918;

	class LDWaveItemByVector3 : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_131*, ::System::Int32>>* itemList; // 0xA8
		::FlowCanvas::FlowOutput* finishOutput; // 0xB0
		::FlowCanvas::FlowOutput* output; // 0xB8
		::UnityEngine::Coroutine* createCo; // 0xC0
		::FlowCanvas::ValueOutput_1<::System::Collections::Generic::List_1<::System::UInt32>*>* itemIdListOutput; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Int32>* overridePickTypeInput; // 0xD0
		::FlowCanvas::ValueInput_1<::UnityEngine::Vector3>* createPosition; // 0xD8
		::FlowCanvas::ValueInput_1<::System::Int32>* createCount; // 0xE0
		::System::Collections::Generic::List_1<::System::UInt32>* createIdList; // 0xE8
		::FlowCanvas::ValueInput_1<::System::Int32>* itemIdInput; // 0xF0
		::FlowCanvas::ValueInput_1<::System::Single>* defaultIntervalInput; // 0xF8
		::FlowCanvas::ValueInput_1<::MoleMole::GameplayTag>* gameplayTagInput; // 0x100
		::System::Boolean runInCo; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEMBYVECTOR3__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEMBYVECTOR3_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void StartCreate(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEMBYVECTOR3_STARTCREATE_OFFSET))(this, f);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetCreateResults()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEMBYVECTOR3_GETCREATERESULTS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* CreateItemCo()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEMBYVECTOR3_CREATEITEMCO_OFFSET))(this);
		}

		::System::Void SpawnItem(::UnityEngine::Vector3 anchorPos, ::System::Int32 itemId, ::MoleMole::GameplayTag tag, ::System::Int32 overridePickType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::MoleMole::GameplayTag, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEITEMBYVECTOR3_SPAWNITEM_OFFSET))(this, anchorPos, itemId, tag, overridePickType);
		}
	};
}
