#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeBase.h"

namespace MoleMole::GalGame { class GalBubbleStorySequenceNode_StoryNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_GETDURATIONINSECEXCEPTCOMMONDELAY_OFFSET UNITYSDK_OFFSET(0x142873D0)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x14287350)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalBubbleStorySequenceNode_TypeDefinitionIndex = 65748;

	class GalBubbleStorySequenceNode : public ::MoleMole::GalGame::GalPlayableNodeBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::GalGame::GalBubbleStorySequenceNode_StoryNode*>* stories; // 0x20
		::System::Int32 CommonDelay; // 0x28
		::System::Int32 MinimumEndTime; // 0x2C
		::System::Int32 StartTime; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE__CTOR_OFFSET))(this);
		}

		::System::Single GetDurationInSecExceptCommonDelay(::MoleMole::GalGame::GalBubbleStorySequenceNode_StoryNode* node)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::GalGame::GalBubbleStorySequenceNode_StoryNode*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_GETDURATIONINSECEXCEPTCOMMONDELAY_OFFSET))(this, node);
		}
	};
}
