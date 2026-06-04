#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_TOPNodeData_PDGState.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_TOPWorkResult; }
namespace HoudiniEngineUnity { class HEU_WorkItemTally; }
namespace HoudiniEngineUnity { class TOPNodeTags; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define HOUDINIENGINEUNITY_HEU_TOPNODEDATA_ANYWORKITEMSFAILED_OFFSET UNITYSDK_OFFSET(0x17F5CB20)
#define HOUDINIENGINEUNITY_HEU_TOPNODEDATA_ANYWORKITEMSPENDING_OFFSET UNITYSDK_OFFSET(0x17F5CB50)
#define HOUDINIENGINEUNITY_HEU_TOPNODEDATA_AREALLWORKITEMSCOMPLETE_OFFSET UNITYSDK_OFFSET(0x17F5CAB0)
#define HOUDINIENGINEUNITY_HEU_TOPNODEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x17F5CA70)
#define HOUDINIENGINEUNITY_HEU_TOPNODEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17F5CBB0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_TOPNodeData_TypeDefinitionIndex = 37575;

	class HEU_TOPNodeData : public ::System::Object
	{
	public:
		::System::Int32 _nodeID; // 0x10
		::System::String* _nodeName; // 0x18
		::System::String* _parentName; // 0x20
		::UnityEngine::GameObject* _workResultParentGO; // 0x28
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPWorkResult*>* _workResults; // 0x30
		::HoudiniEngineUnity::TOPNodeTags* _tags; // 0x38
		::System::Boolean _showResults; // 0x40
		::HoudiniEngineUnity::HEU_TOPNodeData_PDGState _pdgState; // 0x44
		::HoudiniEngineUnity::HEU_WorkItemTally* _workItemTally; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TOPNODEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TOPNODEDATA_RESET_OFFSET))(this);
		}

		::System::Boolean AreAllWorkItemsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TOPNODEDATA_AREALLWORKITEMSCOMPLETE_OFFSET))(this);
		}

		::System::Boolean AnyWorkItemsFailed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TOPNODEDATA_ANYWORKITEMSFAILED_OFFSET))(this);
		}

		::System::Boolean AnyWorkItemsPending()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TOPNODEDATA_ANYWORKITEMSPENDING_OFFSET))(this);
		}
	};
}
