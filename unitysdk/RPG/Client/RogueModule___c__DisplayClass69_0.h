#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueBuffData; }

#define RPG_CLIENT_ROGUEMODULE___C__DISPLAYCLASS69_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA33FE20)
#define RPG_CLIENT_ROGUEMODULE___C__DISPLAYCLASS69_0__ISBUFFACHIVEDBUFF_B__0_OFFSET UNITYSDK_OFFSET(0xA3496A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueModule___c__DisplayClass69_0_TypeDefinitionIndex = 54967;

	class RogueModule___c__DisplayClass69_0 : public ::System::Object
	{
	public:
		::System::UInt32 buffLevel; // 0x10
		::System::UInt32 buffID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE___C__DISPLAYCLASS69_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsBuffAchivedBuff_b__0(::RPG::Client::RogueBuffData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueBuffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE___C__DISPLAYCLASS69_0__ISBUFFACHIVEDBUFF_B__0_OFFSET))(this, x);
		}
	};
}
