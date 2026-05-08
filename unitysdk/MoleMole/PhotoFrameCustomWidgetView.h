#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_PHOTOFRAMECUSTOMWIDGETVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x15BB0810)

namespace MoleMole
{
	inline static constexpr unsigned int PhotoFrameCustomWidgetView_TypeDefinitionIndex = 65323;

	class PhotoFrameCustomWidgetView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Extension::UILocalizationText* TextID; // 0x18
		::UnityEngine::UI::Extension::UILocalizationText* Name; // 0x20
		::UnityEngine::UI::Extension::UILocalizationText* StageName; // 0x28
		::UnityEngine::UI::Extension::UILocalizationText* VerID_Text; // 0x30
		::UnityEngine::UI::Image* photoLogo; // 0x38
		::UnityEngine::UI::Image* photoLogo_Cloudgame; // 0x40
		::UnityEngine::RectTransform* frameMaskRect; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMECUSTOMWIDGETVIEW__CTOR_OFFSET))(this);
		}
	};
}
