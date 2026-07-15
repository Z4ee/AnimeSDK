#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_702;
namespace RPG::Client { class MonopolyAssetWrapper; }
namespace System { class String; }

#define RPG_CLIENT_MONOPOLYASSETDATAITEM_GET_ASSETDESC_OFFSET UNITYSDK_OFFSET(0x1A368E30)
#define RPG_CLIENT_MONOPOLYASSETDATAITEM_GET_ASSETNAME_OFFSET UNITYSDK_OFFSET(0x1A368D80)
#define RPG_CLIENT_MONOPOLYASSETDATAITEM_GET_DISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x1A368EE0)
#define RPG_CLIENT_MONOPOLYASSETDATAITEM_GET_FIGUREPATH_OFFSET UNITYSDK_OFFSET(0x1A368D00)
#define RPG_CLIENT_MONOPOLYASSETDATAITEM_GET_HASNEXTLEVEL_OFFSET UNITYSDK_OFFSET(0x1A368C90)
#define RPG_CLIENT_MONOPOLYASSETDATAITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A368C00)
#define RPG_CLIENT_MONOPOLYASSETDATAITEM_GET_ISOWNEDBYPLAYER_OFFSET UNITYSDK_OFFSET(0x1A368C40)
#define RPG_CLIENT_MONOPOLYASSETDATAITEM_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1A368C20)
#define RPG_CLIENT_MONOPOLYASSETDATAITEM_GET_TOTALPROFIT_OFFSET UNITYSDK_OFFSET(0x1A368FB0)
#define RPG_CLIENT_MONOPOLYASSETDATAITEM_MODIFY_OFFSET UNITYSDK_OFFSET(0x1A368BB0)
#define RPG_CLIENT_MONOPOLYASSETDATAITEM_SET_ID_OFFSET UNITYSDK_OFFSET(0x1A368C10)
#define RPG_CLIENT_MONOPOLYASSETDATAITEM_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1A368C30)
#define RPG_CLIENT_MONOPOLYASSETDATAITEM_SET_TOTALPROFIT_OFFSET UNITYSDK_OFFSET(0x1A368FC0)
#define RPG_CLIENT_MONOPOLYASSETDATAITEM_SYNC_OFFSET UNITYSDK_OFFSET(0x1A368B10)
#define RPG_CLIENT_MONOPOLYASSETDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A368B00)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyAssetDataItem_TypeDefinitionIndex = 63268;

	class MonopolyAssetDataItem : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _INITLEVEL = 0x1; // 0x0
		::RPG::Client::MonopolyAssetWrapper* _CurDisplayData; // 0x10
		::RPG::Client::MonopolyAssetWrapper* _NextDisplayData; // 0x18
		::System::UInt32 _TotalProfit_k__BackingField; // 0x20
		::System::UInt32 _Level_k__BackingField; // 0x24
		::System::UInt32 _ID_k__BackingField; // 0x28

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETDATAITEM__CTOR_OFFSET))(this, a1);
		}

		::System::Void Sync(::Class_1_D17272E82AE804C2_702* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_702*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETDATAITEM_SYNC_OFFSET))(this, a1);
		}

		::System::Void Modify(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETDATAITEM_MODIFY_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETDATAITEM_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETDATAITEM_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETDATAITEM_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETDATAITEM_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsOwnedByPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETDATAITEM_GET_ISOWNEDBYPLAYER_OFFSET))(this);
		}

		::System::Boolean get_HasNextLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETDATAITEM_GET_HASNEXTLEVEL_OFFSET))(this);
		}

		::System::String* get_FigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETDATAITEM_GET_FIGUREPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_AssetName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETDATAITEM_GET_ASSETNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_AssetDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETDATAITEM_GET_ASSETDESC_OFFSET))(this);
		}

		::RPG::Client::MonopolyAssetWrapper* get_DisplayData()
		{
			return ((::RPG::Client::MonopolyAssetWrapper*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETDATAITEM_GET_DISPLAYDATA_OFFSET))(this);
		}

		::System::UInt32 get_TotalProfit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETDATAITEM_GET_TOTALPROFIT_OFFSET))(this);
		}

		::System::Void set_TotalProfit(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETDATAITEM_SET_TOTALPROFIT_OFFSET))(this, a1);
		}
	};
}
