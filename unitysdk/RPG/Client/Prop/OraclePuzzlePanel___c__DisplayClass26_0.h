#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class OraclePuzzlePanel; }
namespace System { class Action; }

#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14F0CD90)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL___C__DISPLAYCLASS26_0__PLAYSELECTEDITEMHELPERHINTPERFORM_B__0_OFFSET UNITYSDK_OFFSET(0x14F0CE30)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OraclePuzzlePanel___c__DisplayClass26_0_TypeDefinitionIndex = 74783;

	class OraclePuzzlePanel___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::OraclePuzzlePanel* __4__this; // 0x10
		::System::Action* OnPerformDone; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlaySelectedItemHelperHintPerform_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL___C__DISPLAYCLASS26_0__PLAYSELECTEDITEMHELPERHINTPERFORM_B__0_OFFSET))(this);
		}
	};
}
