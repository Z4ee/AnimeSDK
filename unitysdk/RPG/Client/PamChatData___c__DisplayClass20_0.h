#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PamChatQuickFunctionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7CC98C6000D59BCE;

#define RPG_CLIENT_PAMCHATDATA___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9EC6730)
#define RPG_CLIENT_PAMCHATDATA___C__DISPLAYCLASS20_0__GETPAMCHATQUICKFUNCTION_B__0_OFFSET UNITYSDK_OFFSET(0x9EC6BD0)

namespace RPG::Client
{
	inline static constexpr unsigned int PamChatData___c__DisplayClass20_0_TypeDefinitionIndex = 51354;

	class PamChatData___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::RPG::Client::PamChatQuickFunctionType type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetPamChatQuickFunction_b__0(::Class_1_7CC98C6000D59BCE* function)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_7CC98C6000D59BCE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA___C__DISPLAYCLASS20_0__GETPAMCHATQUICKFUNCTION_B__0_OFFSET))(this, function);
		}
	};
}
