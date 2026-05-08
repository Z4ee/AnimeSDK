#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_DIALOGUETREES_DIALOGUEACTOR_GET_DIALOGUECOLOR_OFFSET UNITYSDK_OFFSET(0x1A8592E0)
#define NODECANVAS_DIALOGUETREES_DIALOGUEACTOR_GET_DIALOGUEPOSITION_OFFSET UNITYSDK_OFFSET(0x1A8592F0)
#define NODECANVAS_DIALOGUETREES_DIALOGUEACTOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A859000)
#define NODECANVAS_DIALOGUETREES_DIALOGUEACTOR_GET_PORTRAITSPRITE_OFFSET UNITYSDK_OFFSET(0x1A859020)
#define NODECANVAS_DIALOGUETREES_DIALOGUEACTOR_GET_PORTRAIT_OFFSET UNITYSDK_OFFSET(0x1A859010)
#define NODECANVAS_DIALOGUETREES_DIALOGUEACTOR_NODECANVAS_DIALOGUETREES_IDIALOGUEACTOR_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1A8593C0)
#define NODECANVAS_DIALOGUETREES_DIALOGUEACTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A859360)

namespace NodeCanvas::DialogueTrees
{
	inline static constexpr unsigned int DialogueActor_TypeDefinitionIndex = 26562;

	class DialogueActor : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* _name; // 0x18
		::UnityEngine::Texture2D* _portrait; // 0x20
		::UnityEngine::Color _dialogueColor; // 0x28
		::UnityEngine::Vector3 _dialogueOffset; // 0x38
		::UnityEngine::Sprite* _portraitSprite; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUEACTOR__CTOR_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUEACTOR_GET_NAME_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_portrait()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUEACTOR_GET_PORTRAIT_OFFSET))(this);
		}

		::UnityEngine::Sprite* get_portraitSprite()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUEACTOR_GET_PORTRAITSPRITE_OFFSET))(this);
		}

		::UnityEngine::Color get_dialogueColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUEACTOR_GET_DIALOGUECOLOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_dialoguePosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUEACTOR_GET_DIALOGUEPOSITION_OFFSET))(this);
		}

		::UnityEngine::Transform* NodeCanvas_DialogueTrees_IDialogueActor_get_transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUEACTOR_NODECANVAS_DIALOGUETREES_IDIALOGUEACTOR_GET_TRANSFORM_OFFSET))(this);
		}
	};
}
