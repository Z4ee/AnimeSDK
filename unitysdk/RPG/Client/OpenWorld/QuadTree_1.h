#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

class Class_0_16E4307DCC419505_1187;
class Class_1_3F28033F34305C46;
namespace RPG::Client::OpenWorld { template <typename T> class QuadTreeNode_1; }

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int QuadTree_1_TypeDefinitionIndex = 73783;

	template <typename T>
	class QuadTree_1 : public ::System::Object
	{
	public:
		static ::System::Byte* StaticGet_s_RootNodeDepth()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(QuadTree_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::RPG::Client::OpenWorld::QuadTreeNode_1<T>* _RootNode; // 0x0
		::UnityEngine::Rect _TreeBounds; // 0x0
		::System::Single _MiniNodeWidth; // 0x0
		::System::Byte _MaxTreeDepth; // 0x0
		::System::Byte _TreeDepth; // 0x0
		::System::UInt32 _Counter; // 0x0
		::System::Single _VisionRangeMin; // 0x0
		::System::Single _VisionRangeMax; // 0x0
	};
}
