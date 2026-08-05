#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::DialogueTrees { class DialogueTree_ActorParameter; }
namespace System { class String; }

#define NODECANVAS_DIALOGUETREES_DIALOGUETREE___C__DISPLAYCLASS47_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF91030)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE___C__DISPLAYCLASS47_0__GETPARAMETERBYID_B__0_OFFSET UNITYSDK_OFFSET(0x1EF91040)

namespace NodeCanvas::DialogueTrees
{
	inline static constexpr unsigned int DialogueTree___c__DisplayClass47_0_TypeDefinitionIndex = 31166;

	class DialogueTree___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::System::String* id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE___C__DISPLAYCLASS47_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetParameterByID_b__0(::NodeCanvas::DialogueTrees::DialogueTree_ActorParameter* p)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeCanvas::DialogueTrees::DialogueTree_ActorParameter*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE___C__DISPLAYCLASS47_0__GETPARAMETERBYID_B__0_OFFSET))(this, p);
		}
	};
}
