#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_DIALOGUETREES_PROXYDIALOGUEACTOR_GET_DIALOGUECOLOR_OFFSET UNITYSDK_OFFSET(0x1B4A2400)
#define NODECANVAS_DIALOGUETREES_PROXYDIALOGUEACTOR_GET_DIALOGUEPOSITION_OFFSET UNITYSDK_OFFSET(0x1B4A2410)
#define NODECANVAS_DIALOGUETREES_PROXYDIALOGUEACTOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B4A23D0)
#define NODECANVAS_DIALOGUETREES_PROXYDIALOGUEACTOR_GET_PORTRAITSPRITE_OFFSET UNITYSDK_OFFSET(0x1B4A23F0)
#define NODECANVAS_DIALOGUETREES_PROXYDIALOGUEACTOR_GET_PORTRAIT_OFFSET UNITYSDK_OFFSET(0x1B4A23E0)
#define NODECANVAS_DIALOGUETREES_PROXYDIALOGUEACTOR_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B4A2430)
#define NODECANVAS_DIALOGUETREES_PROXYDIALOGUEACTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4A1600)

namespace NodeCanvas::DialogueTrees
{
	inline static constexpr unsigned int ProxyDialogueActor_TypeDefinitionIndex = 27086;

	class ProxyDialogueActor : public ::System::Object
	{
	public:
		::System::String* _name; // 0x10
		::UnityEngine::Transform* _transform; // 0x18

		::System::Void _ctor(::System::String* name, ::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_PROXYDIALOGUEACTOR__CTOR_OFFSET))(this, name, transform);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_PROXYDIALOGUEACTOR_GET_NAME_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_portrait()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_PROXYDIALOGUEACTOR_GET_PORTRAIT_OFFSET))(this);
		}

		::UnityEngine::Sprite* get_portraitSprite()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_PROXYDIALOGUEACTOR_GET_PORTRAITSPRITE_OFFSET))(this);
		}

		::UnityEngine::Color get_dialogueColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_PROXYDIALOGUEACTOR_GET_DIALOGUECOLOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_dialoguePosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_PROXYDIALOGUEACTOR_GET_DIALOGUEPOSITION_OFFSET))(this);
		}

		::UnityEngine::Transform* get_transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_PROXYDIALOGUEACTOR_GET_TRANSFORM_OFFSET))(this);
		}
	};
}
