#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueMagicStoryArchiveDataItem; }

#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDEE8B40)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION___C__DISPLAYCLASS5_0__GETSTORYITEM_B__0_OFFSET UNITYSDK_OFFSET(0xDEE9940)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicStoryArchiveCollection___c__DisplayClass5_0_TypeDefinitionIndex = 67434;

	class RogueMagicStoryArchiveCollection___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetStoryItem_b__0(::RPG::Client::RogueMagicStoryArchiveDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueMagicStoryArchiveDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION___C__DISPLAYCLASS5_0__GETSTORYITEM_B__0_OFFSET))(this, a1);
		}
	};
}
