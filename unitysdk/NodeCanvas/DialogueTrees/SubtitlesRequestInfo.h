#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::DialogueTrees { class IDialogueActor; }
namespace NodeCanvas::DialogueTrees { class IStatement; }
namespace System { class Action; }

#define NODECANVAS_DIALOGUETREES_SUBTITLESREQUESTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E5D40)

namespace NodeCanvas::DialogueTrees
{
	inline static constexpr unsigned int SubtitlesRequestInfo_TypeDefinitionIndex = 30658;

	class SubtitlesRequestInfo : public ::System::Object
	{
	public:
		::NodeCanvas::DialogueTrees::IDialogueActor* actor; // 0x10
		::System::Action* Continue; // 0x18
		::NodeCanvas::DialogueTrees::IStatement* statement; // 0x20

		::System::Void _ctor(::NodeCanvas::DialogueTrees::IDialogueActor* actor, ::NodeCanvas::DialogueTrees::IStatement* statement, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::DialogueTrees::IDialogueActor*, ::NodeCanvas::DialogueTrees::IStatement*, ::System::Action*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_SUBTITLESREQUESTINFO__CTOR_OFFSET))(this, actor, statement, callback);
		}
	};
}
