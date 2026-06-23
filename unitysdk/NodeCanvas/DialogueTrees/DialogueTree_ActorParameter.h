#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::DialogueTrees { class IDialogueActor; }
namespace System { class String; }
namespace UnityEngine { class Object; }

#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_ACTORPARAMETER_GET_ACTOR_OFFSET UNITYSDK_OFFSET(0x1D841900)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_ACTORPARAMETER_GET_ID_OFFSET UNITYSDK_OFFSET(0x1D8425A0)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_ACTORPARAMETER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D842580)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_ACTORPARAMETER_SET_ACTOR_OFFSET UNITYSDK_OFFSET(0x1D841B80)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_ACTORPARAMETER_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1D842590)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_ACTORPARAMETER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D8426A0)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_ACTORPARAMETER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D842610)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_ACTORPARAMETER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D842620)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_ACTORPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D842600)

namespace NodeCanvas::DialogueTrees
{
	inline static constexpr unsigned int DialogueTree_ActorParameter_TypeDefinitionIndex = 30119;

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
