#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

namespace MoleMole
{
	inline static constexpr unsigned int UISnakeEndingAnimScript_TeamModifier_TypeDefinitionIndex = 85379;

	struct alignas(8) UISnakeEndingAnimScript_TeamModifier
	{
		// static const ::System::Single conerShowOffset; // 0x0
		// static const ::System::Single conerTopOffset; // 0x0
		// static const ::System::Single conerBlackBorderHeight; // 0x0
		// static const ::System::Single deltaHeight; // 0x0
		::UnityEngine::RectTransform* rectTrans; // 0x10
		::UnityEngine::RectTransform* lRect; // 0x18
		::UnityEngine::RectTransform* rRect; // 0x20
		::UnityEngine::RectTransform* midRect; // 0x28
		::UnityEngine::RectTransform* midRectLconer; // 0x30
		::UnityEngine::RectTransform* midRectRconer; // 0x38
		::UnityEngine::RectTransform* midRectLconerBlackBorder; // 0x40
		::UnityEngine::RectTransform* midRectRconerBlackBorder; // 0x48
		::System::Single midRectLconerPosX; // 0x50
		::System::Single midRectRconerPosX; // 0x54
		::System::Single midRectLconerBlackBorderPosX; // 0x58
		::System::Single midRectRconerBlackBorderPosX; // 0x5C
		::UnityEngine::RectTransform* playerLRect; // 0x60
		::UnityEngine::RectTransform* playerRRect; // 0x68
		::UnityEngine::UI::Extension::UILocalizationText* playerLName; // 0x70
		::UnityEngine::UI::Extension::UILocalizationText* playerRName; // 0x78
		::UnityEngine::UI::Image* playerLIcon; // 0x80
		::UnityEngine::UI::Image* playerRIcon; // 0x88
		::UnityEngine::UI::Extension::UILocalizationText* playerLConsoleName; // 0x90
		::UnityEngine::UI::Extension::UILocalizationText* playerRConsoleName; // 0x98
		::UnityEngine::UI::Image* playerLConsoleIcon; // 0xA0
		::UnityEngine::UI::Image* playerRConsoleIcon; // 0xA8
		::UnityEngine::GameObject* playerLSpriteRenderer; // 0xB0
		::UnityEngine::GameObject* playerRSpriteRenderer; // 0xB8
	};
}
