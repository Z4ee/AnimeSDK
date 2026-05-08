#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define FOUNDATION_UNREAL_GAMEPLAYTAGNODE_COLLECTLEAFNODE_OFFSET UNITYSDK_OFFSET(0x1C0A3BE0)
#define FOUNDATION_UNREAL_GAMEPLAYTAGNODE_GET_ISLEAF_OFFSET UNITYSDK_OFFSET(0x1C0A3BC0)
#define FOUNDATION_UNREAL_GAMEPLAYTAGNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0A3FD0)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int GameplayTagNode_TypeDefinitionIndex = 9047;

	class GameplayTagNode : public ::System::Object
	{
	public:
		::System::Boolean _isLeaf; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::Unreal::GameplayTagNode*>* Children; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsLeaf()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGNODE_GET_ISLEAF_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* CollectLeafNode(::System::Text::StringBuilder* pathToRoot, ::System::Collections::Generic::List_1<::System::String*>* collection)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGNODE_COLLECTLEAFNODE_OFFSET))(this, pathToRoot, collection);
		}
	};
}
