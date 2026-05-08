#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class TextItalicAdobeStyle; }

#define MOLEMOLE_UICPSCORETIPSCRIPT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B860B10)

namespace MoleMole
{
	inline static constexpr unsigned int UICpScoreTipScript_TypeDefinitionIndex = 85294;

	class UICpScoreTipScript : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* root; // 0x18
		::UnityEngine::UI::Image* image; // 0x20
		::UnityEngine::UI::TextItalicAdobeStyle* symbol; // 0x28
		::UnityEngine::UI::TextItalicAdobeStyle* value; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSCORETIPSCRIPT__CTOR_OFFSET))(this);
		}
	};
}
