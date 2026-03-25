#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace System { class String; }

#define RPG_CLIENT_UIMANAGER___C__DISPLAYCLASS135_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA6A96B0)
#define RPG_CLIENT_UIMANAGER___C__DISPLAYCLASS135_0__GETABOVEDIALOGBYNAME_B__0_OFFSET UNITYSDK_OFFSET(0xA6AAE70)

namespace RPG::Client
{
	inline static constexpr unsigned int UIManager___c__DisplayClass135_0_TypeDefinitionIndex = 59892;

	class UIManager___c__DisplayClass135_0 : public ::System::Object
	{
	public:
		::System::String* dialogName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER___C__DISPLAYCLASS135_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAboveDialogByName_b__0(::RPG::Client::UIController* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER___C__DISPLAYCLASS135_0__GETABOVEDIALOGBYNAME_B__0_OFFSET))(this, x);
		}
	};
}
