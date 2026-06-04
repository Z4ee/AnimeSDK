#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueMagicMountType.h"
#include "unitysdk/RPG/GameCore/RogueMagicScepterFuncType.h"
#include "unitysdk/RPG/GameCore/RogueMagicStyleType.h"
#include "unitysdk/RPG/GameCore/RogueMagicUnitCategory.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace System { class String; }

#define RPG_CLIENT_ROGUEMAGICHANDBOOKMAGICUNITDATAITEM_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0xC7A41D0)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKMAGICUNITDATAITEM_GET_DISPLAYDATAITEM_OFFSET UNITYSDK_OFFSET(0xC7A4890)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKMAGICUNITDATAITEM_GET_EFFECT_OFFSET UNITYSDK_OFFSET(0xC7A4330)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKMAGICUNITDATAITEM_GET_EXTRAEFFECTS_OFFSET UNITYSDK_OFFSET(0xC7A4510)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKMAGICUNITDATAITEM_GET_FUNCTYPE_OFFSET UNITYSDK_OFFSET(0xC7A47D0)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKMAGICUNITDATAITEM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC7A4310)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKMAGICUNITDATAITEM_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC7A48A0)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKMAGICUNITDATAITEM_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC7A4090)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKMAGICUNITDATAITEM_GET_MAGICUNITID_OFFSET UNITYSDK_OFFSET(0xC7A4070)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKMAGICUNITDATAITEM_GET_MOUNTTYPE_OFFSET UNITYSDK_OFFSET(0xC7A45D0)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKMAGICUNITDATAITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC7A40B0)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKMAGICUNITDATAITEM_GET_STYLETYPE_OFFSET UNITYSDK_OFFSET(0xC7A4710)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKMAGICUNITDATAITEM_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC7A48B0)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKMAGICUNITDATAITEM_SYNCISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC7A3840)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKMAGICUNITDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC7A2F70)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicHandbookMagicUnitDataItem_TypeDefinitionIndex = 63038;

	class RogueMagicHandbookMagicUnitDataItem : public ::System::Object
	{
	public:
		::RPG::Client::RogueMagicUnitDataItem* _DataItem; // 0x10
		::System::Boolean _IsUnlocked_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::Client::RogueMagicUnitDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKMAGICUNITDATAITEM__CTOR_OFFSET))(this, a1);
		}

		::System::Void SyncIsUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKMAGICUNITDATAITEM_SYNCISUNLOCKED_OFFSET))(this, a1);
		}

		::System::UInt32 get_MagicUnitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKMAGICUNITDATAITEM_GET_MAGICUNITID_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKMAGICUNITDATAITEM_GET_LEVEL_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKMAGICUNITDATAITEM_GET_NAME_OFFSET))(this);
		}

		::RPG::GameCore::RogueMagicUnitCategory get_Category()
		{
			return ((::RPG::GameCore::RogueMagicUnitCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKMAGICUNITDATAITEM_GET_CATEGORY_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKMAGICUNITDATAITEM_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_Effect()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKMAGICUNITDATAITEM_GET_EFFECT_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffects()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKMAGICUNITDATAITEM_GET_EXTRAEFFECTS_OFFSET))(this);
		}

		::RPG::GameCore::RogueMagicMountType get_MountType()
		{
			return ((::RPG::GameCore::RogueMagicMountType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKMAGICUNITDATAITEM_GET_MOUNTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::RogueMagicStyleType get_StyleType()
		{
			return ((::RPG::GameCore::RogueMagicStyleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKMAGICUNITDATAITEM_GET_STYLETYPE_OFFSET))(this);
		}

		::RPG::GameCore::RogueMagicScepterFuncType get_FuncType()
		{
			return ((::RPG::GameCore::RogueMagicScepterFuncType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKMAGICUNITDATAITEM_GET_FUNCTYPE_OFFSET))(this);
		}

		::RPG::Client::RogueMagicUnitDataItem* get_DisplayDataItem()
		{
			return ((::RPG::Client::RogueMagicUnitDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKMAGICUNITDATAITEM_GET_DISPLAYDATAITEM_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKMAGICUNITDATAITEM_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKMAGICUNITDATAITEM_SET_ISUNLOCKED_OFFSET))(this, a1);
		}
	};
}
