#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeBase.h"

namespace System { class String; }

#define MOLEMOLE_GALGAME_GALBUBBLESTORYNODE_GET_GETNPCSTIMULUSID_OFFSET UNITYSDK_OFFSET(0x1383E150)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYNODE_GET_GETSPEAKER_OFFSET UNITYSDK_OFFSET(0x1383E160)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYNODE_GET_GETTEXT_OFFSET UNITYSDK_OFFSET(0x1383E130)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYNODE_GET_GETVOICEOREVENT_OFFSET UNITYSDK_OFFSET(0x1383E140)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1383E170)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalBubbleStoryNode_TypeDefinitionIndex = 51085;

	class GalBubbleStoryNode : public ::MoleMole::GalGame::GalPlayableNodeBase
	{
	public:
		::System::String* Text; // 0x20
		::System::String* Speaker; // 0x28
		::System::String* Voice; // 0x30
		::System::Int32 EndTime; // 0x38
		::System::Int32 StartTime; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYNODE__CTOR_OFFSET))(this);
		}

		::System::String* get_GetText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYNODE_GET_GETTEXT_OFFSET))(this);
		}

		::System::String* get_GetVoiceOrEvent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYNODE_GET_GETVOICEOREVENT_OFFSET))(this);
		}

		::System::UInt32 get_GetNPCStimulusID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYNODE_GET_GETNPCSTIMULUSID_OFFSET))(this);
		}

		::System::String* get_GetSpeaker()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYNODE_GET_GETSPEAKER_OFFSET))(this);
		}
	};
}
