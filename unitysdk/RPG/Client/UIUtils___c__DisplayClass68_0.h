#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Events { class UnityAction; }

#define RPG_CLIENT_UIUTILS___C__DISPLAYCLASS68_0__CREATEBLOCKER_B__0_OFFSET UNITYSDK_OFFSET(0xE40B3A0)
#define RPG_CLIENT_UIUTILS___C__DISPLAYCLASS68_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE40AFF0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIUtils___c__DisplayClass68_0_TypeDefinitionIndex = 73190;

	class UIUtils___c__DisplayClass68_0 : public ::System::Object
	{
	public:
		::UnityEngine::Canvas* exceptBlockNodeCanvas; // 0x10
		::UnityEngine::Events::UnityAction* blockClickCallback; // 0x18
		::UnityEngine::GameObject* blocker; // 0x20
		::System::Boolean overrideSorting; // 0x28
		::System::Int32 sortingOrder; // 0x2C
		::System::Int32 sortingLayerID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS___C__DISPLAYCLASS68_0__CTOR_OFFSET))(this);
		}

		::System::Void _CreateBlocker_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS___C__DISPLAYCLASS68_0__CREATEBLOCKER_B__0_OFFSET))(this);
		}
	};
}
