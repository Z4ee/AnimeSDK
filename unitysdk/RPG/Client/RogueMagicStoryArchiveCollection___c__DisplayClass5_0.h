#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueMagicStoryArchiveDataItem; }

#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB065D60)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION___C__DISPLAYCLASS5_0__GETSTORYITEM_B__0_OFFSET UNITYSDK_OFFSET(0xB0669E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicStoryArchiveCollection___c__DisplayClass5_0_TypeDefinitionIndex = 62138;

	class RogueMagicStoryArchiveCollection___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetStoryItem_b__0(::RPG::Client::RogueMagicStoryArchiveDataItem* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueMagicStoryArchiveDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION___C__DISPLAYCLASS5_0__GETSTORYITEM_B__0_OFFSET))(this, x);
		}
	};
}
