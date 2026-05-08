#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class TextItalicAdobeStyle; }

#define MOLEMOLE_UICPROLESELECTDIFFICULTYSCRIPT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1BB400)

namespace MoleMole
{
	inline static constexpr unsigned int UICpRoleSelectDifficultyScript_TypeDefinitionIndex = 85322;

	class UICpRoleSelectDifficultyScript : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* selected; // 0x18
		::UnityEngine::UI::Image* icon; // 0x20
		::UnityEngine::UI::TextItalicAdobeStyle* text; // 0x28
		::UnityEngine::GameObject* locked; // 0x30
		::UnityEngine::UI::TextItalicAdobeStyle* lockedText; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTDIFFICULTYSCRIPT__CTOR_OFFSET))(this);
		}
	};
}
