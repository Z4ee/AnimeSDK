#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ItemMainType.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
#include "unitysdk/RPG/GameCore/ItemSubType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayDataExtraInfo; }
namespace RPG::GameCore { class ItemRow; }
namespace System { class String; }

#define RPG_CLIENT_ITEMDISPLAYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x194EF6D0)
#define RPG_CLIENT_ITEMDISPLAYDATA_GET_DEFAULTICONPATH_OFFSET UNITYSDK_OFFSET(0x194EF750)
#define RPG_CLIENT_ITEMDISPLAYDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x194EF800)
#define RPG_CLIENT_ITEMDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x194D7DE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemDisplayData_TypeDefinitionIndex = 65774;

	class ItemDisplayData : public ::System::Object
	{
	public:
		::RPG::Client::ItemDisplayDataExtraInfo* ExtraInfo; // 0x10
		::System::UInt32 UID; // 0x18
		::RPG::GameCore::ItemRarity Rarity; // 0x1C
		::System::UInt32 Level; // 0x20
		::System::UInt32 Count; // 0x24
		::System::UInt32 Rank; // 0x28
		::System::UInt32 ConfigID; // 0x2C
		::RPG::GameCore::ItemSubType ItemSubType; // 0x30
		::RPG::GameCore::ItemMainType ItemMainType; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDISPLAYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ItemDisplayData* Create(::RPG::Client::ItemDisplayData* a1)
		{
			return ((::RPG::Client::ItemDisplayData*(*)(::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDISPLAYDATA_CREATE_OFFSET))(a1);
		}

		::System::String* get_DefaultIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDISPLAYDATA_GET_DEFAULTICONPATH_OFFSET))(this);
		}

		::RPG::GameCore::ItemRow* get__Row()
		{
			return ((::RPG::GameCore::ItemRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDISPLAYDATA_GET__ROW_OFFSET))(this);
		}
	};
}
