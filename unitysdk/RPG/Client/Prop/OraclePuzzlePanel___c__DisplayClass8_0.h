#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC5C8F40)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL___C__DISPLAYCLASS8_0__STARTFADEINPERFORM_B__0_OFFSET UNITYSDK_OFFSET(0xC5CA250)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OraclePuzzlePanel___c__DisplayClass8_0_TypeDefinitionIndex = 73259;

	class OraclePuzzlePanel___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Action* OnFinish; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartFadeinPerform_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL___C__DISPLAYCLASS8_0__STARTFADEINPERFORM_B__0_OFFSET))(this);
		}
	};
}
