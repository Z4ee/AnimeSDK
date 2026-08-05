#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class TextItalicAdobeStyle; }

#define MOLEMOLE_UICPROLESELECTPROPSCRIPT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F72FA00)

namespace MoleMole
{
	inline static constexpr unsigned int UICpRoleSelectPropScript_TypeDefinitionIndex = 94784;

	class UICpRoleSelectPropScript : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* root; // 0x18
		::UnityEngine::GameObject* empty; // 0x20
		::UnityEngine::UI::Image* image; // 0x28
		::UnityEngine::UI::TextItalicAdobeStyle* text; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTPROPSCRIPT__CTOR_OFFSET))(this);
		}
	};
}
