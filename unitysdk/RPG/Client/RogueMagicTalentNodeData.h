#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_65.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_823;
class Class_1_24F009C622EAE626_6;
namespace RPG::Client { class RogueMagicScepterDataItem; }
namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class RogueMagicTalentRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_CANACTIVE_OFFSET UNITYSDK_OFFSET(0xB0682F0)
#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_COSTITEM_OFFSET UNITYSDK_OFFSET(0xB068990)
#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xB068830)
#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_DISPLAYSCEPTERS_OFFSET UNITYSDK_OFFSET(0xB068B10)
#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_DISPLAYUNITS_OFFSET UNITYSDK_OFFSET(0xB068B60)
#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB068920)
#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB068690)
#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xB068BB0)
#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_TALENTID_OFFSET UNITYSDK_OFFSET(0xB068700)
#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xB068770)
#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xB068710)
#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xB068BC0)
#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xB067F50)
#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB067F20)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicTalentNodeData_TypeDefinitionIndex = 62144;

	class RogueMagicTalentNodeData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_823*>* _HyperParams; // 0x10
		::Enum_3_0A3761FE34514D6C_65 _Status_k__BackingField; // 0x18
		::System::UInt32 _TalentID_k__BackingField; // 0x1C

		::System::Void _ctor(::RPG::GameCore::RogueMagicTalentRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicTalentRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTNODEDATA__CTOR_OFFSET))(this, row);
		}

		::System::Void Sync(::Class_1_24F009C622EAE626_6* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_24F009C622EAE626_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_SYNC_OFFSET))(this, proto);
		}

		::System::UInt32 get_TalentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_TALENTID_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_LEVEL_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_TITLE_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_DESC_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::GameCore::ItemConfig* get_CostItem()
		{
			return ((::RPG::GameCore::ItemConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_COSTITEM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicScepterDataItem*>* get_DisplayScepters()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicScepterDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_DISPLAYSCEPTERS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* get_DisplayUnits()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_DISPLAYUNITS_OFFSET))(this);
		}

		::Enum_3_0A3761FE34514D6C_65 get_Status()
		{
			return ((::Enum_3_0A3761FE34514D6C_65(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Enum_3_0A3761FE34514D6C_65 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_65))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_SET_STATUS_OFFSET))(this, value);
		}

		::System::Boolean get_CanActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_CANACTIVE_OFFSET))(this);
		}

		::RPG::GameCore::RogueMagicTalentRow* get__Row()
		{
			return ((::RPG::GameCore::RogueMagicTalentRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET__ROW_OFFSET))(this);
		}
	};
}
