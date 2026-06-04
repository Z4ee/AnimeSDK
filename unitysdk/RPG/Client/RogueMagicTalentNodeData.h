#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_65.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_874;
class Class_1_24F009C622EAE626_6;
namespace RPG::Client { class RogueMagicScepterDataItem; }
namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class RogueMagicTalentRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_CANACTIVE_OFFSET UNITYSDK_OFFSET(0xC7B69C0)
#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_COSTITEM_OFFSET UNITYSDK_OFFSET(0xC7B7060)
#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xC7B6F00)
#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_DISPLAYSCEPTERS_OFFSET UNITYSDK_OFFSET(0xC7B71D0)
#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_DISPLAYUNITS_OFFSET UNITYSDK_OFFSET(0xC7B7220)
#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC7B6FF0)
#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC7B6D60)
#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xC7B7270)
#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_TALENTID_OFFSET UNITYSDK_OFFSET(0xC7B6DD0)
#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xC7B6E40)
#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xC7B6DE0)
#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xC7B7280)
#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xC7B6670)
#define RPG_CLIENT_ROGUEMAGICTALENTNODEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC7B6640)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicTalentNodeData_TypeDefinitionIndex = 63077;

	class RogueMagicTalentNodeData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_874*>* _HyperParams; // 0x10
		::System::UInt32 _TalentID_k__BackingField; // 0x18
		::Enum_3_0A3761FE34514D6C_65 _Status_k__BackingField; // 0x1C

		::System::Void _ctor(::RPG::GameCore::RogueMagicTalentRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicTalentRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTNODEDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void Sync(::Class_1_24F009C622EAE626_6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_24F009C622EAE626_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_SYNC_OFFSET))(this, a1);
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

		::System::Void set_Status(::Enum_3_0A3761FE34514D6C_65 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_65))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTNODEDATA_SET_STATUS_OFFSET))(this, a1);
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
