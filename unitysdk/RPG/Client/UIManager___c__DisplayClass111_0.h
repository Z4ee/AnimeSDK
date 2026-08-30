#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_UIMANAGER___C__DISPLAYCLASS111_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE3749D0)
#define RPG_CLIENT_UIMANAGER___C__DISPLAYCLASS111_0___RESTORESCENE_B__0_OFFSET UNITYSDK_OFFSET(0xE37F2B0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIManager___c__DisplayClass111_0_TypeDefinitionIndex = 72989;

	class UIManager___c__DisplayClass111_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER___C__DISPLAYCLASS111_0__CTOR_OFFSET))(this);
		}

		::System::Void __RestoreScene_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER___C__DISPLAYCLASS111_0___RESTORESCENE_B__0_OFFSET))(this);
		}
	};
}
