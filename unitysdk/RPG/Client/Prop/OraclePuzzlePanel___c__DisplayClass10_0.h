#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class OraclePuzzlePanel; }
namespace System { class Action; }

#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDCD2300)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL___C__DISPLAYCLASS10_0__STARTFADEOUTPERFORM_B__0_OFFSET UNITYSDK_OFFSET(0xDCD38E0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OraclePuzzlePanel___c__DisplayClass10_0_TypeDefinitionIndex = 78268;

	class OraclePuzzlePanel___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::Action* OnFinish; // 0x10
		::RPG::Client::Prop::OraclePuzzlePanel* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartFadeoutPerform_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL___C__DISPLAYCLASS10_0__STARTFADEOUTPERFORM_B__0_OFFSET))(this);
		}
	};
}
