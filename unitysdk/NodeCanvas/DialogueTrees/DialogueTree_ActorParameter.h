#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::DialogueTrees { class IDialogueActor; }
namespace System { class String; }
namespace UnityEngine { class Object; }

#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_ACTORPARAMETER_GET_ACTOR_OFFSET UNITYSDK_OFFSET(0x1B4A1610)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_ACTORPARAMETER_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B4A22C0)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_ACTORPARAMETER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B4A22A0)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_ACTORPARAMETER_SET_ACTOR_OFFSET UNITYSDK_OFFSET(0x1B4A1890)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_ACTORPARAMETER_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1B4A22B0)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_ACTORPARAMETER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B4A23C0)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_ACTORPARAMETER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B4A2330)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_ACTORPARAMETER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B4A2340)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_ACTORPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4A2320)

namespace NodeCanvas::DialogueTrees
{
	inline static constexpr unsigned int DialogueTree_ActorParameter_TypeDefinitionIndex = 26837;

	class DialogueTree_ActorParameter : public ::System::Object
	{
	public:
		::System::String* _keyName; // 0x10
		::System::String* _id; // 0x18
		::UnityEngine::Object* _actorObject; // 0x20
		::NodeCanvas::DialogueTrees::IDialogueActor* _actor; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_ACTORPARAMETER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_ACTORPARAMETER__CTOR_1_OFFSET))(this, name);
		}

		::System::Void _ctor_2(::System::String* name, ::NodeCanvas::DialogueTrees::IDialogueActor* actor)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::NodeCanvas::DialogueTrees::IDialogueActor*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_ACTORPARAMETER__CTOR_2_OFFSET))(this, name, actor);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_ACTORPARAMETER_GET_NAME_OFFSET))(this);
		}

		::System::Void set_name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_ACTORPARAMETER_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_ID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_ACTORPARAMETER_GET_ID_OFFSET))(this);
		}

		::NodeCanvas::DialogueTrees::IDialogueActor* get_actor()
		{
			return ((::NodeCanvas::DialogueTrees::IDialogueActor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_ACTORPARAMETER_GET_ACTOR_OFFSET))(this);
		}

		::System::Void set_actor(::NodeCanvas::DialogueTrees::IDialogueActor* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::DialogueTrees::IDialogueActor*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_ACTORPARAMETER_SET_ACTOR_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_ACTORPARAMETER_TOSTRING_OFFSET))(this);
		}
	};
}
