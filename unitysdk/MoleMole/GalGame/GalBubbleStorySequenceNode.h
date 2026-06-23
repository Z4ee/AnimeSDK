#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeBase.h"

class Class_0_16E4307DCC419505_484;
namespace MoleMole::GalGame { class GalBubbleStorySequenceNode_StoryNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_GETDURATIONINSECEXCEPTCOMMONDELAY_OFFSET UNITYSDK_OFFSET(0x116175F0)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_MOLEMOLE_LEVEL_IBUBBLESEQUENCESOURCE_GETDURATIONINSECEXCEPTCOMMONDELAY_OFFSET UNITYSDK_OFFSET(0x11617CF0)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_MOLEMOLE_LEVEL_IBUBBLESEQUENCESOURCE_GETSTORYAT_OFFSET UNITYSDK_OFFSET(0x11617C60)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_MOLEMOLE_LEVEL_IBUBBLESEQUENCESOURCE_GET_COMMONDELAYINSEC_OFFSET UNITYSDK_OFFSET(0x11617BC0)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_MOLEMOLE_LEVEL_IBUBBLESEQUENCESOURCE_GET_STARTTIMEINSEC_OFFSET UNITYSDK_OFFSET(0x11617B70)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_MOLEMOLE_LEVEL_IBUBBLESEQUENCESOURCE_GET_STORYCOUNT_OFFSET UNITYSDK_OFFSET(0x11617C10)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x11617570)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalBubbleStorySequenceNode_TypeDefinitionIndex = 52413;

	class GalBubbleStorySequenceNode : public ::MoleMole::GalGame::GalPlayableNodeBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::GalGame::GalBubbleStorySequenceNode_StoryNode*>* stories; // 0x20
		::System::Int32 StartTime; // 0x28
		::System::Int32 CommonDelay; // 0x2C
		::System::Int32 MinimumEndTime; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE__CTOR_OFFSET))(this);
		}

		::System::Single GetDurationInSecExceptCommonDelay(::MoleMole::GalGame::GalBubbleStorySequenceNode_StoryNode* node)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::GalGame::GalBubbleStorySequenceNode_StoryNode*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_GETDURATIONINSECEXCEPTCOMMONDELAY_OFFSET))(this, node);
		}

		::System::Single MoleMole_Level_IBubbleSequenceSource_get_StartTimeInSec()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_MOLEMOLE_LEVEL_IBUBBLESEQUENCESOURCE_GET_STARTTIMEINSEC_OFFSET))(this);
		}

		::System::Single MoleMole_Level_IBubbleSequenceSource_get_CommonDelayInSec()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_MOLEMOLE_LEVEL_IBUBBLESEQUENCESOURCE_GET_COMMONDELAYINSEC_OFFSET))(this);
		}

		::System::Int32 MoleMole_Level_IBubbleSequenceSource_get_StoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_MOLEMOLE_LEVEL_IBUBBLESEQUENCESOURCE_GET_STORYCOUNT_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_484* MoleMole_Level_IBubbleSequenceSource_GetStoryAt(::System::Int32 index)
		{
			return ((::Class_0_16E4307DCC419505_484*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_MOLEMOLE_LEVEL_IBUBBLESEQUENCESOURCE_GETSTORYAT_OFFSET))(this, index);
		}

		::System::Single MoleMole_Level_IBubbleSequenceSource_GetDurationInSecExceptCommonDelay(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_MOLEMOLE_LEVEL_IBUBBLESEQUENCESOURCE_GETDURATIONINSECEXCEPTCOMMONDELAY_OFFSET))(this, index);
		}
	};
}
