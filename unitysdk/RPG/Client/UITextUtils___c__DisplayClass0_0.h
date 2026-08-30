#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_UITEXTUTILS___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE3BFDE0)
#define RPG_CLIENT_UITEXTUTILS___C__DISPLAYCLASS0_0__WRAP_B__0_OFFSET UNITYSDK_OFFSET(0xE3C25A0)

namespace RPG::Client
{
	inline static constexpr unsigned int UITextUtils___c__DisplayClass0_0_TypeDefinitionIndex = 73090;

	class UITextUtils___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::UnityEngine::UI::Text* reformatText; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Void _Wrap_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITEXTUTILS___C__DISPLAYCLASS0_0__WRAP_B__0_OFFSET))(this);
		}
	};
}
