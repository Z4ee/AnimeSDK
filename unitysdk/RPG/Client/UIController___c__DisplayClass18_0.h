#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_UICONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17009410)
#define RPG_CLIENT_UICONTROLLER___C__DISPLAYCLASS18_0__EXITPROMISE_B__0_OFFSET UNITYSDK_OFFSET(0x17014350)

namespace RPG::Client
{
	inline static constexpr unsigned int UIController___c__DisplayClass18_0_TypeDefinitionIndex = 72954;

	class UIController___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _ExitPromise_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTROLLER___C__DISPLAYCLASS18_0__EXITPROMISE_B__0_OFFSET))(this);
		}
	};
}
