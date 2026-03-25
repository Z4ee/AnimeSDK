#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueMiracleCategory.h"
#include "unitysdk/System/Object.h"

class Class_1_412DDC84C44F8B4B;
namespace RPG::Client { class RogueTournUnderlineParamInfo; }
namespace RPG::GameCore { class RogueMiracleDisplayRow; }
namespace RPG::GameCore { class RogueMiracleEffectRow; }
namespace RPG::GameCore { class RogueTournHandbookMiracleRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xA395E10)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GETDESCUNDERLINEPARAMINFO_OFFSET UNITYSDK_OFFSET(0xA397370)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_BGDESC_OFFSET UNITYSDK_OFFSET(0xA397580)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0xA3974B0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_DESC_OFFSET UNITYSDK_OFFSET(0xA3974D0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_HANDBOOKMIRACLEID_OFFSET UNITYSDK_OFFSET(0xA395EA0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_ICON_OFFSET UNITYSDK_OFFSET(0xA397450)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA397600)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA3973D0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA397610)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_SYNCUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA397320)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA396E10)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHandbookMiracleDataItem_TypeDefinitionIndex = 55180;

	class RogueTournHandbookMiracleDataItem : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueMiracleDisplayRow* _MiracleDisplayRow; // 0x10
		::RPG::GameCore::RogueTournHandbookMiracleRow* _HandbookMiracleRow; // 0x18
		::Class_1_412DDC84C44F8B4B* _MiracleDesc; // 0x20
		::RPG::GameCore::RogueMiracleEffectRow* _MiracleEffectRow; // 0x28
		::System::Boolean _IsUnlocked_k__BackingField; // 0x30

		::System::Void _ctor(::RPG::GameCore::RogueTournHandbookMiracleRow* handbookMiracleRow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournHandbookMiracleRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM__CTOR_OFFSET))(this, handbookMiracleRow);
		}

		static ::RPG::Client::RogueTournHandbookMiracleDataItem* Create(::System::UInt32 handbookID)
		{
			return ((::RPG::Client::RogueTournHandbookMiracleDataItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_CREATE_OFFSET))(handbookID);
		}

		::System::Void SyncUnlocked(::System::Boolean isUnlocked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_SYNCUNLOCKED_OFFSET))(this, isUnlocked);
		}

		::RPG::Client::RogueTournUnderlineParamInfo* GetDescUnderlineParamInfo()
		{
			return ((::RPG::Client::RogueTournUnderlineParamInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GETDESCUNDERLINEPARAMINFO_OFFSET))(this);
		}

		::System::UInt32 get_HandbookMiracleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_HANDBOOKMIRACLEID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Icon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_ICON_OFFSET))(this);
		}

		::RPG::GameCore::RogueMiracleCategory get_Category()
		{
			return ((::RPG::GameCore::RogueMiracleCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_CATEGORY_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_BgDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_BGDESC_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_SET_ISUNLOCKED_OFFSET))(this, value);
		}
	};
}
