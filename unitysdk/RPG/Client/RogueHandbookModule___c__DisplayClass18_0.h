#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueHandbookBuffTypeRewardData; }

#define RPG_CLIENT_ROGUEHANDBOOKMODULE___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB044890)
#define RPG_CLIENT_ROGUEHANDBOOKMODULE___C__DISPLAYCLASS18_0__ISBUFFTYPEREWARDCANTAKE_B__0_OFFSET UNITYSDK_OFFSET(0xB047780)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueHandbookModule___c__DisplayClass18_0_TypeDefinitionIndex = 62079;

	class RogueHandbookModule___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::UInt32 buffType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsBuffTypeRewardCanTake_b__0(::RPG::Client::RogueHandbookBuffTypeRewardData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueHandbookBuffTypeRewardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMODULE___C__DISPLAYCLASS18_0__ISBUFFTYPEREWARDCANTAKE_B__0_OFFSET))(this, x);
		}
	};
}
