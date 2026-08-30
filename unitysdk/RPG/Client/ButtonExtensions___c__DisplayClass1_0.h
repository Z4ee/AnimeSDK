#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::UI { class Button; }

#define RPG_CLIENT_BUTTONEXTENSIONS___C__DISPLAYCLASS1_0__BINDCLICK_B__0_OFFSET UNITYSDK_OFFSET(0xC97D8F0)
#define RPG_CLIENT_BUTTONEXTENSIONS___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC97D8E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ButtonExtensions___c__DisplayClass1_0_TypeDefinitionIndex = 72690;

	class ButtonExtensions___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::UnityEngine::UI::Button* button; // 0x10
		::UnityEngine::Events::UnityAction* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUTTONEXTENSIONS___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void _BindClick_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUTTONEXTENSIONS___C__DISPLAYCLASS1_0__BINDCLICK_B__0_OFFSET))(this);
		}
	};
}
