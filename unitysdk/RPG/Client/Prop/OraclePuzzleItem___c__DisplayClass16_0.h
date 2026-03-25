#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class OraclePuzzleItem; }
namespace System { class Action; }

#define RPG_CLIENT_PROP_ORACLEPUZZLEITEM___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA102C80)
#define RPG_CLIENT_PROP_ORACLEPUZZLEITEM___C__DISPLAYCLASS16_0__MOVETOTARGETPOSPERFORM_B__0_OFFSET UNITYSDK_OFFSET(0xA1031A0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEITEM___C__DISPLAYCLASS16_0__MOVETOTARGETPOSPERFORM_B__1_OFFSET UNITYSDK_OFFSET(0xA1032B0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEITEM___C__DISPLAYCLASS16_0__MOVETOTARGETPOSPERFORM_B__2_OFFSET UNITYSDK_OFFSET(0xA103400)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OraclePuzzleItem___c__DisplayClass16_0_TypeDefinitionIndex = 64182;

	class OraclePuzzleItem___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::OraclePuzzleItem* __4__this; // 0x10
		::System::Action* __9__2; // 0x18
		::System::Action* OnPerformDone; // 0x20
		::System::Action* __9__1; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEITEM___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _MoveToTargetPosPerform_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEITEM___C__DISPLAYCLASS16_0__MOVETOTARGETPOSPERFORM_B__0_OFFSET))(this);
		}

		::System::Void _MoveToTargetPosPerform_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEITEM___C__DISPLAYCLASS16_0__MOVETOTARGETPOSPERFORM_B__1_OFFSET))(this);
		}

		::System::Void _MoveToTargetPosPerform_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEITEM___C__DISPLAYCLASS16_0__MOVETOTARGETPOSPERFORM_B__2_OFFSET))(this);
		}
	};
}
