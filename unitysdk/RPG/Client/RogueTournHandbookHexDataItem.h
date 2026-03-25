#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournHexData; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xA395EC0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_BGDESC_OFFSET UNITYSDK_OFFSET(0xA396DC0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_DESC_OFFSET UNITYSDK_OFFSET(0xA396DA0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_EXTRAEFFECTIDS_OFFSET UNITYSDK_OFFSET(0xA396DF0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_HEXID_OFFSET UNITYSDK_OFFSET(0xA395F50)
#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_ICON_OFFSET UNITYSDK_OFFSET(0xA396D80)
#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA396D40)
#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA396D50)
#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_SYNCUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA396CF0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA396CE0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHandbookHexDataItem_TypeDefinitionIndex = 55179;

	class RogueTournHandbookHexDataItem : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournHexData* _HexData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueTournHandbookHexDataItem* Create(::System::UInt32 hexID)
		{
			return ((::RPG::Client::RogueTournHandbookHexDataItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_CREATE_OFFSET))(hexID);
		}

		::System::Void SyncUnlocked(::System::Boolean isUnlocked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_SYNCUNLOCKED_OFFSET))(this, isUnlocked);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::UInt32 get_HexID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_HEXID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Icon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_ICON_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_BgDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_BGDESC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffectIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_EXTRAEFFECTIDS_OFFSET))(this);
		}
	};
}
