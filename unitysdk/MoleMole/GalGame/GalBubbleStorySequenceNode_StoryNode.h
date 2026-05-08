#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_STORYNODE_GET_GETNPCSTIMULUSID_OFFSET UNITYSDK_OFFSET(0x11752C50)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_STORYNODE_GET_GETTEXT_OFFSET UNITYSDK_OFFSET(0x11752C60)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_STORYNODE_GET_GETVOICEOREVENT_OFFSET UNITYSDK_OFFSET(0x11752C70)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_STORYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x11752DA0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalBubbleStorySequenceNode_StoryNode_TypeDefinitionIndex = 65749;

	class GalBubbleStorySequenceNode_StoryNode : public ::System::Object
	{
	public:
		::System::String* EventA; // 0x10
		::System::Int32 NPCStimulusID; // 0x18
		::System::String* Speaker; // 0x20
		::System::String* Text; // 0x28
		::System::String* Voice; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_STORYNODE__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_GetNPCStimulusID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_STORYNODE_GET_GETNPCSTIMULUSID_OFFSET))(this);
		}

		::System::String* get_GetText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_STORYNODE_GET_GETTEXT_OFFSET))(this);
		}

		::System::String* get_GetVoiceOrEvent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_STORYNODE_GET_GETVOICEOREVENT_OFFSET))(this);
		}
	};
}
