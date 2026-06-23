#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::DialogueTrees { class DialogueTree_ActorParameter; }
namespace System { class String; }

#define NODECANVAS_DIALOGUETREES_DIALOGUETREE___C__DISPLAYCLASS51_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1E3A40)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE___C__DISPLAYCLASS51_0__SETACTORREFERENCE_B__0_OFFSET UNITYSDK_OFFSET(0x1D1E3A50)

namespace NodeCanvas::DialogueTrees
{
	inline static constexpr unsigned int DialogueTree___c__DisplayClass51_0_TypeDefinitionIndex = 30116;

	class DialogueTree___c__DisplayClass51_0 : public ::System::Object
	{
	public:
		::System::String* paramName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE___C__DISPLAYCLASS51_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetActorReference_b__0(::NodeCanvas::DialogueTrees::DialogueTree_ActorParameter* p)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeCanvas::DialogueTrees::DialogueTree_ActorParameter*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE___C__DISPLAYCLASS51_0__SETACTORREFERENCE_B__0_OFFSET))(this, p);
		}
	};
}
