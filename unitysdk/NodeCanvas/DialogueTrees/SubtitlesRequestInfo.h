#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::DialogueTrees { class IDialogueActor; }
namespace NodeCanvas::DialogueTrees { class IStatement; }
namespace System { class Action; }

#define NODECANVAS_DIALOGUETREES_SUBTITLESREQUESTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B32D000)

namespace NodeCanvas::DialogueTrees
{
	inline static constexpr unsigned int SubtitlesRequestInfo_TypeDefinitionIndex = 28192;

	class SubtitlesRequestInfo : public ::System::Object
	{
	public:
		::System::Action* Continue; // 0x10
		::NodeCanvas::DialogueTrees::IStatement* statement; // 0x18
		::NodeCanvas::DialogueTrees::IDialogueActor* actor; // 0x20

		::System::Void _ctor(::NodeCanvas::DialogueTrees::IDialogueActor* actor, ::NodeCanvas::DialogueTrees::IStatement* statement, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::DialogueTrees::IDialogueActor*, ::NodeCanvas::DialogueTrees::IStatement*, ::System::Action*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_SUBTITLESREQUESTINFO__CTOR_OFFSET))(this, actor, statement, callback);
		}
	};
}
