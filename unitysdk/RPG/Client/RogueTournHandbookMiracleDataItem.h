#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueMiracleCategory.h"
#include "unitysdk/System/Object.h"

class Class_1_CDB239B5BA2266D7;
namespace RPG::Client { class RogueTournUnderlineParamInfo; }
namespace RPG::GameCore { class RogueMiracleDisplayRow; }
namespace RPG::GameCore { class RogueMiracleEffectRow; }
namespace RPG::GameCore { class RogueTournHandbookMiracleRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xC81DB30)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GETDESCUNDERLINEPARAMINFO_OFFSET UNITYSDK_OFFSET(0xC81F330)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_BGDESC_OFFSET UNITYSDK_OFFSET(0xC81F540)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0xC81F470)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_DESC_OFFSET UNITYSDK_OFFSET(0xC81F490)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_HANDBOOKMIRACLEID_OFFSET UNITYSDK_OFFSET(0xC81DBC0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_ICON_OFFSET UNITYSDK_OFFSET(0xC81F410)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC81F5C0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC81F390)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC81F5D0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_SYNCUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC81F2E0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC81EE80)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHandbookMiracleDataItem_TypeDefinitionIndex = 63301;

	class RogueTournHandbookMiracleDataItem : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueTournHandbookMiracleRow* _HandbookMiracleRow; // 0x10
		::Class_1_CDB239B5BA2266D7* _MiracleDesc; // 0x18
		::RPG::GameCore::RogueMiracleEffectRow* _MiracleEffectRow; // 0x20
		::RPG::GameCore::RogueMiracleDisplayRow* _MiracleDisplayRow; // 0x28
		::System::Boolean _IsUnlocked_k__BackingField; // 0x30

		::System::Void _ctor(::RPG::GameCore::RogueTournHandbookMiracleRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournHandbookMiracleRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::RogueTournHandbookMiracleDataItem* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournHandbookMiracleDataItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_CREATE_OFFSET))(a1);
		}

		::System::Void SyncUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_SYNCUNLOCKED_OFFSET))(this, a1);
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

		::System::Void set_IsUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_SET_ISUNLOCKED_OFFSET))(this, a1);
		}
	};
}
