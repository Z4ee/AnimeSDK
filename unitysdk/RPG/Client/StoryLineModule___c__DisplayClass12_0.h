#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_STORYLINEMODULE___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19C44E10)
#define RPG_CLIENT_STORYLINEMODULE___C__DISPLAYCLASS12_0__SWITCHLINE_B__0_OFFSET UNITYSDK_OFFSET(0x19C44E20)

namespace RPG::Client
{
	inline static constexpr unsigned int StoryLineModule___c__DisplayClass12_0_TypeDefinitionIndex = 64982;

	class StoryLineModule___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::UInt32 contentID; // 0x10
		::System::UInt32 teleportID; // 0x14
		::System::UInt32 id; // 0x18
		::System::UInt32 entryID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _SwitchLine_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEMODULE___C__DISPLAYCLASS12_0__SWITCHLINE_B__0_OFFSET))(this, a1);
		}
	};
}
