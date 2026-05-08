#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/GraphOwner_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NodeCanvas::DialogueTrees { class DialogueTree; }
namespace NodeCanvas::DialogueTrees { class IDialogueActor; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_DIALOGUETREES_DIALOGUETREECONTROLLER_GETACTORREFERENCEBYNAME_OFFSET UNITYSDK_OFFSET(0x1B32CE80)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREECONTROLLER_NODECANVAS_DIALOGUETREES_IDIALOGUEACTOR_GET_DIALOGUECOLOR_OFFSET UNITYSDK_OFFSET(0x1B32C8E0)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREECONTROLLER_NODECANVAS_DIALOGUETREES_IDIALOGUEACTOR_GET_DIALOGUEPOSITION_OFFSET UNITYSDK_OFFSET(0x1B32C8F0)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREECONTROLLER_NODECANVAS_DIALOGUETREES_IDIALOGUEACTOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B32C860)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREECONTROLLER_NODECANVAS_DIALOGUETREES_IDIALOGUEACTOR_GET_PORTRAITSPRITE_OFFSET UNITYSDK_OFFSET(0x1B32C8D0)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREECONTROLLER_NODECANVAS_DIALOGUETREES_IDIALOGUEACTOR_GET_PORTRAIT_OFFSET UNITYSDK_OFFSET(0x1B32C8C0)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREECONTROLLER_NODECANVAS_DIALOGUETREES_IDIALOGUEACTOR_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B32C910)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREECONTROLLER_PAUSEDIALOGUE_OFFSET UNITYSDK_OFFSET(0x1B32CB10)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREECONTROLLER_SETACTORREFERENCES_OFFSET UNITYSDK_OFFSET(0x1B32CD20)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREECONTROLLER_SETACTORREFERENCE_OFFSET UNITYSDK_OFFSET(0x1B32CBB0)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREECONTROLLER_STARTDIALOGUE_1_OFFSET UNITYSDK_OFFSET(0x1B32CA90)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREECONTROLLER_STARTDIALOGUE_2_OFFSET UNITYSDK_OFFSET(0x1B32CAA0)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREECONTROLLER_STARTDIALOGUE_3_OFFSET UNITYSDK_OFFSET(0x1B32CAB0)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREECONTROLLER_STARTDIALOGUE_4_OFFSET UNITYSDK_OFFSET(0x1B32C930)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREECONTROLLER_STARTDIALOGUE_OFFSET UNITYSDK_OFFSET(0x1B32C920)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREECONTROLLER_STOPDIALOGUE_OFFSET UNITYSDK_OFFSET(0x1B32CB60)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B32CFE0)

namespace NodeCanvas::DialogueTrees
{
	inline static constexpr unsigned int DialogueTreeController_TypeDefinitionIndex = 27138;

	class DialogueTreeController : public ::NodeCanvas::Framework::GraphOwner_1<::NodeCanvas::DialogueTrees::DialogueTree*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::String* NodeCanvas_DialogueTrees_IDialogueActor_get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREECONTROLLER_NODECANVAS_DIALOGUETREES_IDIALOGUEACTOR_GET_NAME_OFFSET))(this);
		}

		::UnityEngine::Texture2D* NodeCanvas_DialogueTrees_IDialogueActor_get_portrait()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREECONTROLLER_NODECANVAS_DIALOGUETREES_IDIALOGUEACTOR_GET_PORTRAIT_OFFSET))(this);
		}

		::UnityEngine::Sprite* NodeCanvas_DialogueTrees_IDialogueActor_get_portraitSprite()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREECONTROLLER_NODECANVAS_DIALOGUETREES_IDIALOGUEACTOR_GET_PORTRAITSPRITE_OFFSET))(this);
		}

		::UnityEngine::Color NodeCanvas_DialogueTrees_IDialogueActor_get_dialogueColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREECONTROLLER_NODECANVAS_DIALOGUETREES_IDIALOGUEACTOR_GET_DIALOGUECOLOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 NodeCanvas_DialogueTrees_IDialogueActor_get_dialoguePosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREECONTROLLER_NODECANVAS_DIALOGUETREES_IDIALOGUEACTOR_GET_DIALOGUEPOSITION_OFFSET))(this);
		}

		::UnityEngine::Transform* NodeCanvas_DialogueTrees_IDialogueActor_get_transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREECONTROLLER_NODECANVAS_DIALOGUETREES_IDIALOGUEACTOR_GET_TRANSFORM_OFFSET))(this);
		}

		::System::Void StartDialogue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREECONTROLLER_STARTDIALOGUE_OFFSET))(this);
		}

		::System::Void StartDialogue_1(::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREECONTROLLER_STARTDIALOGUE_1_OFFSET))(this, callback);
		}

		::System::Void StartDialogue_2(::NodeCanvas::DialogueTrees::IDialogueActor* instigator)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::DialogueTrees::IDialogueActor*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREECONTROLLER_STARTDIALOGUE_2_OFFSET))(this, instigator);
		}

		::System::Void StartDialogue_3(::NodeCanvas::DialogueTrees::DialogueTree* newTree, ::NodeCanvas::DialogueTrees::IDialogueActor* instigator, ::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::DialogueTrees::DialogueTree*, ::NodeCanvas::DialogueTrees::IDialogueActor*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREECONTROLLER_STARTDIALOGUE_3_OFFSET))(this, newTree, instigator, callback);
		}

		::System::Void StartDialogue_4(::NodeCanvas::DialogueTrees::IDialogueActor* instigator, ::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::DialogueTrees::IDialogueActor*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREECONTROLLER_STARTDIALOGUE_4_OFFSET))(this, instigator, callback);
		}

		::System::Void PauseDialogue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREECONTROLLER_PAUSEDIALOGUE_OFFSET))(this);
		}

		::System::Void StopDialogue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREECONTROLLER_STOPDIALOGUE_OFFSET))(this);
		}

		::System::Void SetActorReference(::System::String* paramName, ::NodeCanvas::DialogueTrees::IDialogueActor* actor)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::NodeCanvas::DialogueTrees::IDialogueActor*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREECONTROLLER_SETACTORREFERENCE_OFFSET))(this, paramName, actor);
		}

		::System::Void SetActorReferences(::System::Collections::Generic::Dictionary_2<::System::String*, ::NodeCanvas::DialogueTrees::IDialogueActor*>* actors)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::NodeCanvas::DialogueTrees::IDialogueActor*>*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREECONTROLLER_SETACTORREFERENCES_OFFSET))(this, actors);
		}

		::NodeCanvas::DialogueTrees::IDialogueActor* GetActorReferenceByName(::System::String* paramName)
		{
			return ((::NodeCanvas::DialogueTrees::IDialogueActor*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREECONTROLLER_GETACTORREFERENCEBYNAME_OFFSET))(this, paramName);
		}
	};
}
