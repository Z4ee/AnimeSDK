#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueMagicUnitDataItem; }

#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDEE63F0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO___C__DISPLAYCLASS32_0__GETUNITDATAITEM_B__0_OFFSET UNITYSDK_OFFSET(0xDEE7BA0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicScepterInfo___c__DisplayClass32_0_TypeDefinitionIndex = 67429;

	class RogueMagicScepterInfo___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::System::UInt32 uid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetUnitDataItem_b__0(::RPG::Client::RogueMagicUnitDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO___C__DISPLAYCLASS32_0__GETUNITDATAITEM_B__0_OFFSET))(this, a1);
		}
	};
}
