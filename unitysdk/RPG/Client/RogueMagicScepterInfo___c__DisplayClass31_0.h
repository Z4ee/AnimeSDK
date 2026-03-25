#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueMagicScepterDataItem; }

#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA32D340)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO___C__DISPLAYCLASS31_0__GETSCEPTERITEM_B__0_OFFSET UNITYSDK_OFFSET(0xA32EE10)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicScepterInfo___c__DisplayClass31_0_TypeDefinitionIndex = 54944;

	class RogueMagicScepterInfo___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::System::UInt32 scepterID; // 0x10
		::System::UInt32 level; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetScepterItem_b__0(::RPG::Client::RogueMagicScepterDataItem* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueMagicScepterDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO___C__DISPLAYCLASS31_0__GETSCEPTERITEM_B__0_OFFSET))(this, x);
		}
	};
}
