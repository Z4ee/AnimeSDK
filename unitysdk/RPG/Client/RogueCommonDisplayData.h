#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueCommonDisplayType.h"
#include "unitysdk/System/Object.h"

class Class_1_2E64892306548DEA;
namespace RPG::Client { class IRogueMiracle; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class RogueBuffData; }
namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEADDBUFFS_OFFSET UNITYSDK_OFFSET(0xB029A70)
#define RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEADDCOINS_OFFSET UNITYSDK_OFFSET(0xB02B300)
#define RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEADDFORMULAS_OFFSET UNITYSDK_OFFSET(0xB02B4C0)
#define RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEADDMIRACLES_OFFSET UNITYSDK_OFFSET(0xB02A290)
#define RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEBUFFDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xB02A1E0)
#define RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEDESTROYMIRACLES_OFFSET UNITYSDK_OFFSET(0xB02AEB0)
#define RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEFORMULADISPLAYDATA_1_OFFSET UNITYSDK_OFFSET(0xB02BF90)
#define RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEFORMULADISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xB02BEE0)
#define RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEMIRACLEDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xB02B250)
#define RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEREMOVEBUFFS_OFFSET UNITYSDK_OFFSET(0xB029E30)
#define RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEREMOVECOINS_OFFSET UNITYSDK_OFFSET(0xB02B3E0)
#define RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEREMOVEFORMULAS_OFFSET UNITYSDK_OFFSET(0xB02BA40)
#define RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEREMOVEMIRACLES_OFFSET UNITYSDK_OFFSET(0xB02A690)
#define RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEREPAIRMIRACLES_OFFSET UNITYSDK_OFFSET(0xB02AB10)
#define RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEUNITDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xB02BFF0)
#define RPG_CLIENT_ROGUECOMMONDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB029E20)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueCommonDisplayData_TypeDefinitionIndex = 67133;

	class RogueCommonDisplayData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* DisplayBuffList; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* DisplayFormulaList; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* DisplayUnitList; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracle*>* DisplayMiracleList; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* DisplayItemList; // 0x30
		::RPG::Client::RogueCommonDisplayType Type; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUECOMMONDISPLAYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueCommonDisplayData* CreateAddBuffs(::Class_1_2E64892306548DEA* rsp)
		{
			return ((::RPG::Client::RogueCommonDisplayData*(*)(::Class_1_2E64892306548DEA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEADDBUFFS_OFFSET))(rsp);
		}

		static ::RPG::Client::RogueCommonDisplayData* CreateRemoveBuffs(::Class_1_2E64892306548DEA* rsp)
		{
			return ((::RPG::Client::RogueCommonDisplayData*(*)(::Class_1_2E64892306548DEA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEREMOVEBUFFS_OFFSET))(rsp);
		}

		static ::RPG::Client::RogueCommonDisplayData* CreateBuffDisplayData(::RPG::Client::RogueCommonDisplayType type, ::RPG::Client::RogueBuffData* buff)
		{
			return ((::RPG::Client::RogueCommonDisplayData*(*)(::RPG::Client::RogueCommonDisplayType, ::RPG::Client::RogueBuffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEBUFFDISPLAYDATA_OFFSET))(type, buff);
		}

		static ::RPG::Client::RogueCommonDisplayData* CreateAddMiracles(::Class_1_2E64892306548DEA* rsp)
		{
			return ((::RPG::Client::RogueCommonDisplayData*(*)(::Class_1_2E64892306548DEA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEADDMIRACLES_OFFSET))(rsp);
		}

		static ::RPG::Client::RogueCommonDisplayData* CreateRemoveMiracles(::Class_1_2E64892306548DEA* rsp)
		{
			return ((::RPG::Client::RogueCommonDisplayData*(*)(::Class_1_2E64892306548DEA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEREMOVEMIRACLES_OFFSET))(rsp);
		}

		static ::RPG::Client::RogueCommonDisplayData* CreateRepairMiracles(::Class_1_2E64892306548DEA* rsp)
		{
			return ((::RPG::Client::RogueCommonDisplayData*(*)(::Class_1_2E64892306548DEA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEREPAIRMIRACLES_OFFSET))(rsp);
		}

		static ::RPG::Client::RogueCommonDisplayData* CreateDestroyMiracles(::Class_1_2E64892306548DEA* rsp)
		{
			return ((::RPG::Client::RogueCommonDisplayData*(*)(::Class_1_2E64892306548DEA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEDESTROYMIRACLES_OFFSET))(rsp);
		}

		static ::RPG::Client::RogueCommonDisplayData* CreateMiracleDisplayData(::RPG::Client::RogueCommonDisplayType type, ::RPG::Client::IRogueMiracle* miracle)
		{
			return ((::RPG::Client::RogueCommonDisplayData*(*)(::RPG::Client::RogueCommonDisplayType, ::RPG::Client::IRogueMiracle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEMIRACLEDISPLAYDATA_OFFSET))(type, miracle);
		}

		static ::RPG::Client::RogueCommonDisplayData* CreateAddCoins(::System::UInt32 coinNum)
		{
			return ((::RPG::Client::RogueCommonDisplayData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEADDCOINS_OFFSET))(coinNum);
		}

		static ::RPG::Client::RogueCommonDisplayData* CreateRemoveCoins(::System::UInt32 coinNum)
		{
			return ((::RPG::Client::RogueCommonDisplayData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEREMOVECOINS_OFFSET))(coinNum);
		}

		static ::RPG::Client::RogueCommonDisplayData* CreateAddFormulas(::Class_1_2E64892306548DEA* rsp)
		{
			return ((::RPG::Client::RogueCommonDisplayData*(*)(::Class_1_2E64892306548DEA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEADDFORMULAS_OFFSET))(rsp);
		}

		static ::RPG::Client::RogueCommonDisplayData* CreateRemoveFormulas(::Class_1_2E64892306548DEA* rsp)
		{
			return ((::RPG::Client::RogueCommonDisplayData*(*)(::Class_1_2E64892306548DEA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEREMOVEFORMULAS_OFFSET))(rsp);
		}

		static ::RPG::Client::RogueCommonDisplayData* CreateFormulaDisplayData(::RPG::Client::RogueCommonDisplayType type, ::RPG::Client::RogueFormulaData* formula)
		{
			return ((::RPG::Client::RogueCommonDisplayData*(*)(::RPG::Client::RogueCommonDisplayType, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEFORMULADISPLAYDATA_OFFSET))(type, formula);
		}

		static ::RPG::Client::RogueCommonDisplayData* CreateFormulaDisplayData_1(::RPG::Client::RogueCommonDisplayType type, ::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* formulas)
		{
			return ((::RPG::Client::RogueCommonDisplayData*(*)(::RPG::Client::RogueCommonDisplayType, ::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEFORMULADISPLAYDATA_1_OFFSET))(type, formulas);
		}

		static ::RPG::Client::RogueCommonDisplayData* CreateUnitDisplayData(::RPG::Client::RogueCommonDisplayType type, ::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* unitsDataItems)
		{
			return ((::RPG::Client::RogueCommonDisplayData*(*)(::RPG::Client::RogueCommonDisplayType, ::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEUNITDISPLAYDATA_OFFSET))(type, unitsDataItems);
		}
	};
}
