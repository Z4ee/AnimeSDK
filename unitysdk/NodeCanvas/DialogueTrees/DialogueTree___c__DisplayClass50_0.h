#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::DialogueTrees { class DialogueTree_ActorParameter; }
namespace System { class String; }

#define NODECANVAS_DIALOGUETREES_DIALOGUETREE___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6DA3A0)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE___C__DISPLAYCLASS50_0__GETACTORREFERENCEBYNAME_B__0_OFFSET UNITYSDK_OFFSET(0x1E6DA3B0)

namespace NodeCanvas::DialogueTrees
{
	inline static constexpr unsigned int DialogueTree___c__DisplayClass50_0_TypeDefinitionIndex = 31171;

	class DialogueTree___c__DisplayClass50_0 : public ::System::Object
	{
	public:
		::System::String* paramName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetActorReferenceByName_b__0(::NodeCanvas::DialogueTrees::DialogueTree_ActorParameter* r)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeCanvas::DialogueTrees::DialogueTree_ActorParameter*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE___C__DISPLAYCLASS50_0__GETACTORREFERENCEBYNAME_B__0_OFFSET))(this, r);
		}
	};
}
