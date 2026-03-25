#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/PinAlignment.h"
#include "unitysdk/SRF/SRMonoBehaviour.h"

namespace UnityEngine { class GameObject; }

#define SRDEBUGGER_UI_OTHER_HANDLEMANAGER_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x1845AFC0)
#define SRDEBUGGER_UI_OTHER_HANDLEMANAGER_SETALIGNMENT_OFFSET UNITYSDK_OFFSET(0x18442FB0)
#define SRDEBUGGER_UI_OTHER_HANDLEMANAGER_START_OFFSET UNITYSDK_OFFSET(0x1845AFB0)
#define SRDEBUGGER_UI_OTHER_HANDLEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1845AFE0)

namespace SRDebugger::UI::Other
{
	inline static constexpr unsigned int HandleManager_TypeDefinitionIndex = 29652;

	class HandleManager : public ::SRF::SRMonoBehaviour
	{
	public:
		::System::Boolean _hasSet; // 0x48
		::UnityEngine::GameObject* BottomHandle; // 0x50
		::UnityEngine::GameObject* BottomLeftHandle; // 0x58
		::UnityEngine::GameObject* BottomRightHandle; // 0x60
		::SRDebugger::PinAlignment DefaultAlignment; // 0x68
		::UnityEngine::GameObject* LeftHandle; // 0x70
		::UnityEngine::GameObject* RightHandle; // 0x78
		::UnityEngine::GameObject* TopHandle; // 0x80
		::UnityEngine::GameObject* TopLeftHandle; // 0x88
		::UnityEngine::GameObject* TopRightHandle; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_HANDLEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_HANDLEMANAGER_START_OFFSET))(this);
		}

		::System::Void SetAlignment(::SRDebugger::PinAlignment alignment)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::PinAlignment))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_HANDLEMANAGER_SETALIGNMENT_OFFSET))(this, alignment);
		}

		::System::Void SetActive(::UnityEngine::GameObject* obj, ::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_HANDLEMANAGER_SETACTIVE_OFFSET))(this, obj, active);
		}
	};
}
