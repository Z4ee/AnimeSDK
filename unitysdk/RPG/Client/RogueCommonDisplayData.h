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

#define RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEADDBUFFS_OFFSET UNITYSDK_OFFSET(0xC775300)
#define RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEADDCOINS_OFFSET UNITYSDK_OFFSET(0xC776F00)
#define RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEADDFORMULAS_OFFSET UNITYSDK_OFFSET(0xC777180)
#define RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEADDMIRACLES_OFFSET UNITYSDK_OFFSET(0xC775D30)
#define RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEBUFFDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xC775C30)
#define RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEDESTROYMIRACLES_OFFSET UNITYSDK_OFFSET(0xC776A30)
#define RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEFORMULADISPLAYDATA_1_OFFSET UNITYSDK_OFFSET(0xC777DA0)
#define RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEFORMULADISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xC777CA0)
#define RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEMIRACLEDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xC776E00)
#define RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEREMOVEBUFFS_OFFSET UNITYSDK_OFFSET(0xC7757A0)
#define RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEREMOVECOINS_OFFSET UNITYSDK_OFFSET(0xC777040)
#define RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEREMOVEFORMULAS_OFFSET UNITYSDK_OFFSET(0xC777780)
#define RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEREMOVEMIRACLES_OFFSET UNITYSDK_OFFSET(0xC776190)
#define RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEREPAIRMIRACLES_OFFSET UNITYSDK_OFFSET(0xC776660)
#define RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEUNITDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xC777E00)
#define RPG_CLIENT_ROGUECOMMONDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC775790)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueCommonDisplayData_TypeDefinitionIndex = 68076;

	class RogueCommonDisplayData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracle*>* DisplayMiracleList; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* DisplayItemList; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* DisplayFormulaList; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* DisplayUnitList; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* DisplayBuffList; // 0x30
		::RPG::Client::RogueCommonDisplayType Type; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUECOMMONDISPLAYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueCommonDisplayData* CreateAddBuffs(::Class_1_2E64892306548DEA* a1)
		{
			return ((::RPG::Client::RogueCommonDisplayData*(*)(::Class_1_2E64892306548DEA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEADDBUFFS_OFFSET))(a1);
		}

		static ::RPG::Client::RogueCommonDisplayData* CreateRemoveBuffs(::Class_1_2E64892306548DEA* a1)
		{
			return ((::RPG::Client::RogueCommonDisplayData*(*)(::Class_1_2E64892306548DEA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEREMOVEBUFFS_OFFSET))(a1);
		}

		static ::RPG::Client::RogueCommonDisplayData* CreateBuffDisplayData(::RPG::Client::RogueCommonDisplayType a1, ::RPG::Client::RogueBuffData* a2)
		{
			return ((::RPG::Client::RogueCommonDisplayData*(*)(::RPG::Client::RogueCommonDisplayType, ::RPG::Client::RogueBuffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEBUFFDISPLAYDATA_OFFSET))(a1, a2);
		}

		static ::RPG::Client::RogueCommonDisplayData* CreateAddMiracles(::Class_1_2E64892306548DEA* a1)
		{
			return ((::RPG::Client::RogueCommonDisplayData*(*)(::Class_1_2E64892306548DEA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEADDMIRACLES_OFFSET))(a1);
		}

		static ::RPG::Client::RogueCommonDisplayData* CreateRemoveMiracles(::Class_1_2E64892306548DEA* a1)
		{
			return ((::RPG::Client::RogueCommonDisplayData*(*)(::Class_1_2E64892306548DEA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEREMOVEMIRACLES_OFFSET))(a1);
		}

		static ::RPG::Client::RogueCommonDisplayData* CreateRepairMiracles(::Class_1_2E64892306548DEA* a1)
		{
			return ((::RPG::Client::RogueCommonDisplayData*(*)(::Class_1_2E64892306548DEA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEREPAIRMIRACLES_OFFSET))(a1);
		}

		static ::RPG::Client::RogueCommonDisplayData* CreateDestroyMiracles(::Class_1_2E64892306548DEA* a1)
		{
			return ((::RPG::Client::RogueCommonDisplayData*(*)(::Class_1_2E64892306548DEA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEDESTROYMIRACLES_OFFSET))(a1);
		}

		static ::RPG::Client::RogueCommonDisplayData* CreateMiracleDisplayData(::RPG::Client::RogueCommonDisplayType a1, ::RPG::Client::IRogueMiracle* a2)
		{
			return ((::RPG::Client::RogueCommonDisplayData*(*)(::RPG::Client::RogueCommonDisplayType, ::RPG::Client::IRogueMiracle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEMIRACLEDISPLAYDATA_OFFSET))(a1, a2);
		}

		static ::RPG::Client::RogueCommonDisplayData* CreateAddCoins(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueCommonDisplayData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEADDCOINS_OFFSET))(a1);
		}

		static ::RPG::Client::RogueCommonDisplayData* CreateRemoveCoins(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueCommonDisplayData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEREMOVECOINS_OFFSET))(a1);
		}

		static ::RPG::Client::RogueCommonDisplayData* CreateAddFormulas(::Class_1_2E64892306548DEA* a1)
		{
			return ((::RPG::Client::RogueCommonDisplayData*(*)(::Class_1_2E64892306548DEA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEADDFORMULAS_OFFSET))(a1);
		}

		static ::RPG::Client::RogueCommonDisplayData* CreateRemoveFormulas(::Class_1_2E64892306548DEA* a1)
		{
			return ((::RPG::Client::RogueCommonDisplayData*(*)(::Class_1_2E64892306548DEA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEREMOVEFORMULAS_OFFSET))(a1);
		}

		static ::RPG::Client::RogueCommonDisplayData* CreateFormulaDisplayData(::RPG::Client::RogueCommonDisplayType a1, ::RPG::Client::RogueFormulaData* a2)
		{
			return ((::RPG::Client::RogueCommonDisplayData*(*)(::RPG::Client::RogueCommonDisplayType, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEFORMULADISPLAYDATA_OFFSET))(a1, a2);
		}

		static ::RPG::Client::RogueCommonDisplayData* CreateFormulaDisplayData_1(::RPG::Client::RogueCommonDisplayType a1, ::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* a2)
		{
			return ((::RPG::Client::RogueCommonDisplayData*(*)(::RPG::Client::RogueCommonDisplayType, ::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEFORMULADISPLAYDATA_1_OFFSET))(a1, a2);
		}

		static ::RPG::Client::RogueCommonDisplayData* CreateUnitDisplayData(::RPG::Client::RogueCommonDisplayType a1, ::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* a2)
		{
			return ((::RPG::Client::RogueCommonDisplayData*(*)(::RPG::Client::RogueCommonDisplayType, ::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUECOMMONDISPLAYDATA_CREATEUNITDISPLAYDATA_OFFSET))(a1, a2);
		}
	};
}
