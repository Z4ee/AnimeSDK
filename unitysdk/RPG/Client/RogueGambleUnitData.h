#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueGableRarity.h"
#include "unitysdk/RPG/Client/RogueGambleMode.h"
#include "unitysdk/RPG/Client/RogueGamblePropRarity.h"
#include "unitysdk/RPG/GameCore/RogueGambleUnitType.h"
#include "unitysdk/System/Object.h"

class Class_1_FE9F66B3969909B1;
namespace RPG::Client { class IRogueMiracle; }
namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace RPG::GameCore { class RogueTournGambleUnitRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_GAMBLEMODE_OFFSET UNITYSDK_OFFSET(0xA3078B0)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA305300)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xA3071A0)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xA3071C0)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_ISMAGICUNIT_OFFSET UNITYSDK_OFFSET(0xA3078D0)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xA3071E0)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_MAGICUNITDATA_OFFSET UNITYSDK_OFFSET(0xA307220)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_MIRACLEDATA_OFFSET UNITYSDK_OFFSET(0xA307830)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_MIRACLEICONPATH_OFFSET UNITYSDK_OFFSET(0xA307630)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_MIRACLEID_OFFSET UNITYSDK_OFFSET(0xA307200)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_PARAM_OFFSET UNITYSDK_OFFSET(0xA3075F0)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_PROPRARITY_OFFSET UNITYSDK_OFFSET(0xA3074E0)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xA307370)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xA307240)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA307350)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_UNITICONPATH_OFFSET UNITYSDK_OFFSET(0xA307610)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_UNITTEXTUREPARAM_OFFSET UNITYSDK_OFFSET(0xA307810)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_GAMBLEMODE_OFFSET UNITYSDK_OFFSET(0xA3078C0)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xA3071B0)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xA3071D0)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_ISMAGICUNIT_OFFSET UNITYSDK_OFFSET(0xA3078E0)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_ISVALID_OFFSET UNITYSDK_OFFSET(0xA3071F0)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_MAGICUNITDATA_OFFSET UNITYSDK_OFFSET(0xA307230)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_MIRACLEID_OFFSET UNITYSDK_OFFSET(0xA307210)
#define RPG_CLIENT_ROGUEGAMBLEUNITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA305A30)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueGambleUnitData_TypeDefinitionIndex = 54744;

	class RogueGambleUnitData : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueTournGambleUnitRow* _Row; // 0x10
		::RPG::Client::RogueMagicUnitDataItem* _MagicUnitData_k__BackingField; // 0x18
		::RPG::Client::IRogueMiracle* _MiracleData; // 0x20
		::System::UInt32 _Index_k__BackingField; // 0x28
		::System::UInt32 _MiracleID_k__BackingField; // 0x2C
		::System::UInt32 _ID_k__BackingField; // 0x30
		::System::Boolean _IsMagicUnit_k__BackingField; // 0x34
		::System::Boolean _IsValid_k__BackingField; // 0x35
		::RPG::Client::RogueGambleMode _GambleMode_k__BackingField; // 0x38

		::System::Void _ctor(::Class_1_FE9F66B3969909B1* protoUnitInfo, ::System::UInt32 index, ::RPG::Client::RogueGambleMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FE9F66B3969909B1*, ::System::UInt32, ::RPG::Client::RogueGambleMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA__CTOR_OFFSET))(this, protoUnitInfo, index, mode);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_ID_OFFSET))(this, value);
		}

		::System::UInt32 get_Index()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_INDEX_OFFSET))(this, value);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_ISVALID_OFFSET))(this);
		}

		::System::Void set_IsValid(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_ISVALID_OFFSET))(this, value);
		}

		::System::UInt32 get_MiracleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_MIRACLEID_OFFSET))(this);
		}

		::System::Void set_MiracleID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_MIRACLEID_OFFSET))(this, value);
		}

		::RPG::Client::RogueMagicUnitDataItem* get_MagicUnitData()
		{
			return ((::RPG::Client::RogueMagicUnitDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_MAGICUNITDATA_OFFSET))(this);
		}

		::System::Void set_MagicUnitData(::RPG::Client::RogueMagicUnitDataItem* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_MAGICUNITDATA_OFFSET))(this, value);
		}

		::RPG::GameCore::RogueTournGambleUnitRow* get_Row()
		{
			return ((::RPG::GameCore::RogueTournGambleUnitRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_ROW_OFFSET))(this);
		}

		::RPG::GameCore::RogueGambleUnitType get_Type()
		{
			return ((::RPG::GameCore::RogueGambleUnitType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::RogueGableRarity get_Rarity()
		{
			return ((::RPG::Client::RogueGableRarity(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_RARITY_OFFSET))(this);
		}

		::RPG::Client::RogueGamblePropRarity get_PropRarity()
		{
			return ((::RPG::Client::RogueGamblePropRarity(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_PROPRARITY_OFFSET))(this);
		}

		::System::UInt32 get_Param()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_PARAM_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_UnitIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_UNITICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_UnitTextureParam()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_UNITTEXTUREPARAM_OFFSET))(this);
		}

		::RPG::Client::IRogueMiracle* get_MiracleData()
		{
			return ((::RPG::Client::IRogueMiracle*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_MIRACLEDATA_OFFSET))(this);
		}

		::System::String* get_MiracleIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_MIRACLEICONPATH_OFFSET))(this);
		}

		::RPG::Client::RogueGambleMode get_GambleMode()
		{
			return ((::RPG::Client::RogueGambleMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_GAMBLEMODE_OFFSET))(this);
		}

		::System::Void set_GambleMode(::RPG::Client::RogueGambleMode value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueGambleMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_GAMBLEMODE_OFFSET))(this, value);
		}

		::System::Boolean get_IsMagicUnit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_GET_ISMAGICUNIT_OFFSET))(this);
		}

		::System::Void set_IsMagicUnit(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEUNITDATA_SET_ISMAGICUNIT_OFFSET))(this, value);
		}
	};
}
