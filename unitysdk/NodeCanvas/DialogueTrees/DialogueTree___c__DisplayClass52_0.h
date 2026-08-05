#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::DialogueTrees { class DialogueTree_ActorParameter; }
namespace NodeCanvas::DialogueTrees { class IDialogueActor; }
namespace System { class String; }

#define NODECANVAS_DIALOGUETREES_DIALOGUETREE___C__DISPLAYCLASS52_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB924E0)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE___C__DISPLAYCLASS52_0__SETACTORREFERENCES_B__0_OFFSET UNITYSDK_OFFSET(0x1EB924F0)

namespace NodeCanvas::DialogueTrees
{
	inline static constexpr unsigned int DialogueTree___c__DisplayClass52_0_TypeDefinitionIndex = 31169;

	class DialogueTree___c__DisplayClass52_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::NodeCanvas::DialogueTrees::IDialogueActor*> pair; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE___C__DISPLAYCLASS52_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetActorReferences_b__0(::NodeCanvas::DialogueTrees::DialogueTree_ActorParameter* p)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeCanvas::DialogueTrees::DialogueTree_ActorParameter*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE___C__DISPLAYCLASS52_0__SETACTORREFERENCES_B__0_OFFSET))(this, p);
		}
	};
}
