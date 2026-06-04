#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PamChatQuickFunctionType.h"
#include "unitysdk/System/Object.h"

class Class_1_E7B9DD65288306D6;

#define RPG_CLIENT_PAMCHATDATA___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC32E6A0)
#define RPG_CLIENT_PAMCHATDATA___C__DISPLAYCLASS28_0__GETPAMCHATQUICKFUNCTION_B__0_OFFSET UNITYSDK_OFFSET(0xC32F1A0)

namespace RPG::Client
{
	inline static constexpr unsigned int PamChatData___c__DisplayClass28_0_TypeDefinitionIndex = 59217;

	class PamChatData___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::RPG::Client::PamChatQuickFunctionType type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetPamChatQuickFunction_b__0(::Class_1_E7B9DD65288306D6* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_E7B9DD65288306D6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA___C__DISPLAYCLASS28_0__GETPAMCHATQUICKFUNCTION_B__0_OFFSET))(this, a1);
		}
	};
}
