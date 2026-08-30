#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

class Class_0_16E4307DCC419505_1187;
class Class_1_3F28033F34305C46;
namespace RPG::Client::OpenWorld { template <typename T> class QuadTreeNode_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int QuadTreeNode_1_TypeDefinitionIndex = 73785;

	template <typename T>
	class QuadTreeNode_1 : public ::System::Object
	{
	public:
		::System::Byte _CurrentDepth; // 0x0
		::System::Byte _MaxDepth; // 0x0
		::UnityEngine::Rect _RectBounds; // 0x0
		::Il2CppArray<::RPG::Client::OpenWorld::QuadTreeNode_1<T>*>* _Children; // 0x0
		::System::Collections::Generic::List_1<T>* _ContentList; // 0x0
		::System::Boolean _bSpaceContainItem; // 0x0
	};
}
