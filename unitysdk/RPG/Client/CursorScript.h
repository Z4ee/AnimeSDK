#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/CursorMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class VirtualCursorInputModule; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_CURSORSCRIPT_START_OFFSET UNITYSDK_OFFSET(0x1803A060)
#define RPG_CLIENT_CURSORSCRIPT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1803A290)
#define RPG_CLIENT_CURSORSCRIPT__CTOR_OFFSET UNITYSDK_OFFSET(0x1803AE10)

namespace RPG::Client
{
	inline static constexpr unsigned int CursorScript_TypeDefinitionIndex = 69872;

	class CursorScript : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::CursorMode cursorMode; // 0x18
		::UnityEngine::Vector3 cursorPosition; // 0x1C
		::System::Single cursorSpeed; // 0x28
		::UnityEngine::RectTransform* myRecTransform; // 0x30
		::UnityEngine::RectTransform* canvasParent; // 0x38
		::System::Boolean virtualCursorSupport; // 0x40
		::UnityEngine::EventSystems::VirtualCursorInputModule* Field_5_6; // 0x48
		::UnityEngine::UI::Image* Field_5_7; // 0x50
		::UnityEngine::Vector2 Field_5_8; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURSORSCRIPT__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURSORSCRIPT_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURSORSCRIPT_UPDATE_OFFSET))(this);
		}
	};
}
