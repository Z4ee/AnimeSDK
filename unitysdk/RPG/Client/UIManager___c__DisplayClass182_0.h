#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace System { class String; }

#define RPG_CLIENT_UIMANAGER___C__DISPLAYCLASS182_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE3BEFC0)
#define RPG_CLIENT_UIMANAGER___C__DISPLAYCLASS182_0__GETABOVEDIALOGBYNAME_B__0_OFFSET UNITYSDK_OFFSET(0xE3C0EF0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIManager___c__DisplayClass182_0_TypeDefinitionIndex = 73084;

	class UIManager___c__DisplayClass182_0 : public ::System::Object
	{
	public:
		::System::String* dialogName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER___C__DISPLAYCLASS182_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAboveDialogByName_b__0(::RPG::Client::UIController* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER___C__DISPLAYCLASS182_0__GETABOVEDIALOGBYNAME_B__0_OFFSET))(this, a1);
		}
	};
}
