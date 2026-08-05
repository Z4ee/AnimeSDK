#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_UISCREENINFOHANDLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x17D4C1F0)
#define MOLEMOLE_UISCREENINFOHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D4C740)

namespace MoleMole
{
	inline static constexpr unsigned int UIScreenInfoHandler_TypeDefinitionIndex = 90000;

	class UIScreenInfoHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Text* _resolutionWidth; // 0x18
		::UnityEngine::UI::Text* _resolutionHeight; // 0x20
		::UnityEngine::UI::Text* _resolutionRefreshRate; // 0x28
		::UnityEngine::UI::Text* _dpi; // 0x30
		::UnityEngine::UI::Text* _dpiRatio; // 0x38
		::UnityEngine::UI::Text* _width; // 0x40
		::UnityEngine::UI::Text* _height; // 0x48
		::UnityEngine::UI::Text* _widthOrigin; // 0x50
		::UnityEngine::UI::Text* _heightOrigin; // 0x58
		::UnityEngine::UI::Text* _orientation; // 0x60
		::UnityEngine::UI::Text* _cutouts; // 0x68
		::UnityEngine::UI::Text* _safeArea; // 0x70
		::UnityEngine::UI::Text* _safeAreaOrigin; // 0x78
		::UnityEngine::UI::Text* _deviceModel; // 0x80
		::UnityEngine::UI::Text* _deviceName; // 0x88
		::UnityEngine::UI::Text* _deviceType; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENINFOHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENINFOHANDLER_UPDATE_OFFSET))(this);
		}
	};
}
