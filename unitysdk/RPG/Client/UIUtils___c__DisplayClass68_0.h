#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Events { class UnityAction; }

#define RPG_CLIENT_UIUTILS___C__DISPLAYCLASS68_0__CREATEBLOCKER_B__0_OFFSET UNITYSDK_OFFSET(0xE400640)
#define RPG_CLIENT_UIUTILS___C__DISPLAYCLASS68_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE400290)

namespace RPG::Client
{
	inline static constexpr unsigned int UIUtils___c__DisplayClass68_0_TypeDefinitionIndex = 73189;

	class UIUtils___c__DisplayClass68_0 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* blocker; // 0x10
		::UnityEngine::Events::UnityAction* blockClickCallback; // 0x18
		::UnityEngine::Canvas* exceptBlockNodeCanvas; // 0x20
		::System::Int32 sortingOrder; // 0x28
		::System::Int32 sortingLayerID; // 0x2C
		::System::Boolean overrideSorting; // 0x30

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
