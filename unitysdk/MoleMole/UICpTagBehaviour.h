#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class TextItalicAdobeStyle; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UICPTAGBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4E9C40)

namespace MoleMole
{
	inline static constexpr unsigned int UICpTagBehaviour_TypeDefinitionIndex = 90860;

	class UICpTagBehaviour : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animation* anim; // 0x18
		::UnityEngine::UI::Image* unLockImage; // 0x20
		::UnityEngine::GameObject* unLockObj; // 0x28
		::UnityEngine::UI::Image* lockImage; // 0x30
		::UnityEngine::GameObject* lockObj; // 0x38
		::UnityEngine::UI::TextItalicAdobeStyle* num1; // 0x40
		::UnityEngine::UI::TextItalicAdobeStyle* num2; // 0x48
		::UnityEngine::UI::Extension::UILocalizationText* desc; // 0x50
		::UnityEngine::GameObject* highlight; // 0x58
		::UnityEngine::GameObject* numRoot; // 0x60
		::UnityEngine::GameObject* numRootHighlight; // 0x68
		::UnityEngine::UI::TextItalicAdobeStyle* num1Highlight; // 0x70
		::UnityEngine::UI::TextItalicAdobeStyle* num2Highlight; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPTAGBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
