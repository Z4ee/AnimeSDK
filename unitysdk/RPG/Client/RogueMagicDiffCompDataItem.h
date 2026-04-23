#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_87;
namespace RPG::GameCore { class RogueMagicDifficultyCompRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_GET_DESC_OFFSET UNITYSDK_OFFSET(0xB0501B0)
#define RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_GET_DIFFCOMPID_OFFSET UNITYSDK_OFFSET(0xB050130)
#define RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xB050460)
#define RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB04C600)
#define RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_GET_UNLOCKDESC_OFFSET UNITYSDK_OFFSET(0xB050350)
#define RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0xB050150)
#define RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_SET_DIFFCOMPID_OFFSET UNITYSDK_OFFSET(0xB050140)
#define RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xB050470)
#define RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_SYNC_OFFSET UNITYSDK_OFFSET(0xB04D4D0)
#define RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB04C5E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicDiffCompDataItem_TypeDefinitionIndex = 62090;

	class RogueMagicDiffCompDataItem : public ::System::Object
	{
	public:
		::System::UInt32 _DiffCompID_k__BackingField; // 0x10
		::System::Boolean _IsUnlocked_k__BackingField; // 0x14

		::System::Void _ctor(::RPG::GameCore::RogueMagicDifficultyCompRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicDifficultyCompRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM__CTOR_OFFSET))(this, row);
		}

		::System::Void Sync(::Class_1_21C7581DFE99F091_87* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_87*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_SYNC_OFFSET))(this, proto);
		}

		::System::UInt32 get_DiffCompID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_GET_DIFFCOMPID_OFFSET))(this);
		}

		::System::Void set_DiffCompID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_SET_DIFFCOMPID_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_GET_LEVEL_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_UnlockDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_GET_UNLOCKDESC_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_SET_ISUNLOCKED_OFFSET))(this, value);
		}

		::RPG::GameCore::RogueMagicDifficultyCompRow* get__Row()
		{
			return ((::RPG::GameCore::RogueMagicDifficultyCompRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_GET__ROW_OFFSET))(this);
		}
	};
}
