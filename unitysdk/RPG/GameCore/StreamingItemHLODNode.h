#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MeshBound; }
namespace RPG::GameCore { class StreamingItemHLODExpandCondition; }
namespace RPG::GameCore { class StreamingItemHLODResource; }
namespace System { class String; }

#define RPG_GAMECORE_STREAMINGITEMHLODNODE_METHOD_2_B8181376C3841D78_OFFSET UNITYSDK_OFFSET(0x18EA7E50)
#define RPG_GAMECORE_STREAMINGITEMHLODNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x18EA8280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StreamingItemHLODNode_TypeDefinitionIndex = 18130;

	class StreamingItemHLODNode : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::Int32 Index; // 0x18
		::RPG::MVector3 Pos; // 0x1C
		::RPG::MVector3 LocalEuler; // 0x28
		::RPG::MVector3 Scale; // 0x34
		::RPG::GameCore::MeshBound* Bound; // 0x40
		::System::Boolean IsIRIPrefab; // 0x48
		::System::Boolean IsBlockHLOD; // 0x49
		::RPG::GameCore::StreamingItemHLODExpandCondition* ExpandCondition; // 0x50
		::RPG::GameCore::StreamingItemHLODResource* Resource; // 0x58
		::Il2CppArray<::System::Int32>* ChildHLODNodeIndex; // 0x60
		::Il2CppArray<::System::Int32>* LeafItemIndex; // 0x68
		::System::String* CellType; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGITEMHLODNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B8181376C3841D78(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StreamingItemHLODNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StreamingItemHLODNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGITEMHLODNODE_METHOD_2_B8181376C3841D78_OFFSET))(a1, a2);
		}
	};
}
