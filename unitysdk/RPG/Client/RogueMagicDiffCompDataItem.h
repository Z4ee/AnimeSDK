#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_115;
namespace RPG::GameCore { class RogueMagicDifficultyCompRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1B68FD00)
#define RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_GET_DIFFCOMPID_OFFSET UNITYSDK_OFFSET(0x1B68FC80)
#define RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1B68FFA0)
#define RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1B68BC90)
#define RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_GET_UNLOCKDESC_OFFSET UNITYSDK_OFFSET(0x1B68FE90)
#define RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1B68FCA0)
#define RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_SET_DIFFCOMPID_OFFSET UNITYSDK_OFFSET(0x1B68FC90)
#define RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1B68FFB0)
#define RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_SYNC_OFFSET UNITYSDK_OFFSET(0x1B68CDE0)
#define RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B68BC70)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicDiffCompDataItem_TypeDefinitionIndex = 67386;

	class RogueMagicDiffCompDataItem : public ::System::Object
	{
	public:
		::System::Boolean _IsUnlocked_k__BackingField; // 0x10
		::System::UInt32 _DiffCompID_k__BackingField; // 0x14

		::System::Void _ctor(::RPG::GameCore::RogueMagicDifficultyCompRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicDifficultyCompRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM__CTOR_OFFSET))(this, a1);
		}

		::System::Void Sync(::Class_1_21C7581DFE99F091_115* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_115*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_SYNC_OFFSET))(this, a1);
		}

		::System::UInt32 get_DiffCompID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_GET_DIFFCOMPID_OFFSET))(this);
		}

		::System::Void set_DiffCompID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_SET_DIFFCOMPID_OFFSET))(this, a1);
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

		::System::Void set_IsUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_SET_ISUNLOCKED_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueMagicDifficultyCompRow* get__Row()
		{
			return ((::RPG::GameCore::RogueMagicDifficultyCompRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICDIFFCOMPDATAITEM_GET__ROW_OFFSET))(this);
		}
	};
}
