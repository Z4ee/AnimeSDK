#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_TOPNodeData; }
namespace HoudiniEngineUnity { class TOPNodeTags; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOUDINIENGINEUNITY_HEU_TOPNETWORKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x197CCB80)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_TOPNetworkData_TypeDefinitionIndex = 38382;

	class HEU_TOPNetworkData : public ::System::Object
	{
	public:
		::System::Int32 _nodeID; // 0x10
		::System::String* _nodeName; // 0x18
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNodeData*>* _topNodes; // 0x20
		::Il2CppArray<::System::String*>* _topNodeNames; // 0x28
		::System::Int32 _selectedTOPIndex; // 0x30
		::System::String* _parentName; // 0x38
		::HoudiniEngineUnity::TOPNodeTags* _tags; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TOPNETWORKDATA__CTOR_OFFSET))(this);
		}
	};
}
