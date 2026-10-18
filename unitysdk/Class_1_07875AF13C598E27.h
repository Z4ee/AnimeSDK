#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1498;
class Class_0_16E4307DCC419505_1499;
class Class_0_16E4307DCC419505_155;
class Class_0_16E4307DCC419505_397;
class Class_1_1294FEF8E985635C;
class Class_1_16C4955EF2FA3814;
class Class_1_31522EB1D598DA68;
class Class_1_43BD383C98B4C0C5_232;
class Class_1_E64C5E78139B800A;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftCoinResBarViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftOrderDetailInfoViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftOrderItemViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftOrderSelectTipsViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentTreeEntranceViewModel; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define CLASS_1_07875AF13C598E27_ADD_HANDLESETEXITAFTERTRANSITION_OFFSET UNITYSDK_OFFSET(0x15BDA410)
#define CLASS_1_07875AF13C598E27_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BDA9E0)
#define CLASS_1_07875AF13C598E27_GET_AUDIOSERVICE_OFFSET UNITYSDK_OFFSET(0x15BDA2D0)
#define CLASS_1_07875AF13C598E27_GET_COINRESBAR_OFFSET UNITYSDK_OFFSET(0x15BDA3D0)
#define CLASS_1_07875AF13C598E27_GET_DETAILINFO_OFFSET UNITYSDK_OFFSET(0x15BDA390)
#define CLASS_1_07875AF13C598E27_GET_ISINTUTORIALLEVEL_OFFSET UNITYSDK_OFFSET(0x15BDA3F0)
#define CLASS_1_07875AF13C598E27_GET_MESSENGER_OFFSET UNITYSDK_OFFSET(0x15BDA2B0)
#define CLASS_1_07875AF13C598E27_GET_ORDERLIST_OFFSET UNITYSDK_OFFSET(0x15BDA350)
#define CLASS_1_07875AF13C598E27_GET_QUERYUSERPREFSSERVICE_OFFSET UNITYSDK_OFFSET(0x15BDA2F0)
#define CLASS_1_07875AF13C598E27_GET_TALENTENTRANCE_OFFSET UNITYSDK_OFFSET(0x15BDA370)
#define CLASS_1_07875AF13C598E27_GET_TIPS_OFFSET UNITYSDK_OFFSET(0x15BDA3B0)
#define CLASS_1_07875AF13C598E27_GET_WORKSHOPLEVELCONFIGREPOSITORY_OFFSET UNITYSDK_OFFSET(0x15BDA330)
#define CLASS_1_07875AF13C598E27_GET_WORKSHOPREPOSITORY_OFFSET UNITYSDK_OFFSET(0x15BDA310)
#define CLASS_1_07875AF13C598E27_METHOD_1_03C4FFAD29DE0852_OFFSET UNITYSDK_OFFSET(0x15BDB880)
#define CLASS_1_07875AF13C598E27_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x15BDAD50)
#define CLASS_1_07875AF13C598E27_METHOD_1_19844080C13BA28F_OFFSET UNITYSDK_OFFSET(0x15BDA660)
#define CLASS_1_07875AF13C598E27_METHOD_1_1B555116F1579D96_OFFSET UNITYSDK_OFFSET(0x15BDB0D0)
#define CLASS_1_07875AF13C598E27_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15BDAC30)
#define CLASS_1_07875AF13C598E27_METHOD_1_7D374B7050B049E2_1_OFFSET UNITYSDK_OFFSET(0x15BDB3F0)
#define CLASS_1_07875AF13C598E27_METHOD_1_7D374B7050B049E2_2_OFFSET UNITYSDK_OFFSET(0x15BDB450)
#define CLASS_1_07875AF13C598E27_METHOD_1_7D374B7050B049E2_OFFSET UNITYSDK_OFFSET(0x15BDB070)
#define CLASS_1_07875AF13C598E27_METHOD_1_7DC02668922F287C_OFFSET UNITYSDK_OFFSET(0x15BDB7E0)
#define CLASS_1_07875AF13C598E27_METHOD_1_8787B40237648031_OFFSET UNITYSDK_OFFSET(0x15BDB640)
#define CLASS_1_07875AF13C598E27_METHOD_1_9725A4CA0CFEC673_OFFSET UNITYSDK_OFFSET(0x15BDA4D0)
#define CLASS_1_07875AF13C598E27_METHOD_1_B213056103887067_1_OFFSET UNITYSDK_OFFSET(0x15BDAC90)
#define CLASS_1_07875AF13C598E27_METHOD_1_B213056103887067_OFFSET UNITYSDK_OFFSET(0x15BDAB70)
#define CLASS_1_07875AF13C598E27_METHOD_1_BB1E7C4E5465F8EE_OFFSET UNITYSDK_OFFSET(0x15BDB4B0)
#define CLASS_1_07875AF13C598E27_REMOVE_HANDLESETEXITAFTERTRANSITION_OFFSET UNITYSDK_OFFSET(0x15BDA470)
#define CLASS_1_07875AF13C598E27_SET_AUDIOSERVICE_OFFSET UNITYSDK_OFFSET(0x15BDA2E0)
#define CLASS_1_07875AF13C598E27_SET_COINRESBAR_OFFSET UNITYSDK_OFFSET(0x15BDA3E0)
#define CLASS_1_07875AF13C598E27_SET_DETAILINFO_OFFSET UNITYSDK_OFFSET(0x15BDA3A0)
#define CLASS_1_07875AF13C598E27_SET_ISINTUTORIALLEVEL_OFFSET UNITYSDK_OFFSET(0x15BDA400)
#define CLASS_1_07875AF13C598E27_SET_MESSENGER_OFFSET UNITYSDK_OFFSET(0x15BDA2C0)
#define CLASS_1_07875AF13C598E27_SET_ORDERLIST_OFFSET UNITYSDK_OFFSET(0x15BDA360)
#define CLASS_1_07875AF13C598E27_SET_QUERYUSERPREFSSERVICE_OFFSET UNITYSDK_OFFSET(0x15BDA300)
#define CLASS_1_07875AF13C598E27_SET_TALENTENTRANCE_OFFSET UNITYSDK_OFFSET(0x15BDA380)
#define CLASS_1_07875AF13C598E27_SET_TIPS_OFFSET UNITYSDK_OFFSET(0x15BDA3C0)
#define CLASS_1_07875AF13C598E27_SET_WORKSHOPLEVELCONFIGREPOSITORY_OFFSET UNITYSDK_OFFSET(0x15BDA340)
#define CLASS_1_07875AF13C598E27_SET_WORKSHOPREPOSITORY_OFFSET UNITYSDK_OFFSET(0x15BDA320)
#define CLASS_1_07875AF13C598E27__CTOR_OFFSET UNITYSDK_OFFSET(0x15BDB8D0)
#define CLASS_1_07875AF13C598E27__INITIALIZE_B__50_0_OFFSET UNITYSDK_OFFSET(0x15BDB8E0)
#define CLASS_1_07875AF13C598E27___ONCONFIRM_B__59_0_OFFSET UNITYSDK_OFFSET(0x15BDBA00)
#define CLASS_1_07875AF13C598E27___ONCONFIRM_G__ENTERCRAFT_59_1_OFFSET UNITYSDK_OFFSET(0x15BDAFE0)

inline static constexpr unsigned int Class_1_07875AF13C598E27_TypeDefinitionIndex = 79668;

class Class_1_07875AF13C598E27 : public ::System::Object
{
public:
	::RPG::Client::MechCraft::ViewModel::MechCraftOrderDetailInfoViewModel* _DetailInfo_k__BackingField; // 0x10
	::System::Action* MHDDNJLMBFI; // 0x18
	::Class_1_16C4955EF2FA3814* _WorkshopRepository_k__BackingField; // 0x20
	::Sofa::Core::SimpleCommand* LCGBLFOHNFA; // 0x28
	::Class_0_16E4307DCC419505_1498* _QueryUserPrefsService_k__BackingField; // 0x30
	::RPG::Client::MechCraft::ViewModel::MechCraftCoinResBarViewModel* _CoinResBar_k__BackingField; // 0x38
	::Sofa::Core::SimpleCommand* FGHLGECDPMB; // 0x40
	::RPG::Client::MechCraft::ViewModel::MechCraftTalentTreeEntranceViewModel* _TalentEntrance_k__BackingField; // 0x48
	::Class_0_16E4307DCC419505_155* _WorkshopLevelConfigRepository_k__BackingField; // 0x50
	::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel* PPGMKDPNFPF; // 0x58
	::Class_1_1294FEF8E985635C* _Messenger_k__BackingField; // 0x60
	::Class_0_16E4307DCC419505_1499* FFILMBCHEIM; // 0x68
	::System::Action_1<::System::Boolean>* HandleSetExitAfterTransition; // 0x70
	::Class_1_E64C5E78139B800A* _OrderList_k__BackingField; // 0x78
	::RPG::Client::MechCraft::ViewModel::MechCraftOrderSelectTipsViewModel* _Tips_k__BackingField; // 0x80
	::Class_1_31522EB1D598DA68* _AudioService_k__BackingField; // 0x88
	::System::Boolean _IsInTutorialLevel_k__BackingField; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27__CTOR_OFFSET))(this);
	}

	::Class_1_1294FEF8E985635C* get_Messenger()
	{
		return ((::Class_1_1294FEF8E985635C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27_GET_MESSENGER_OFFSET))(this);
	}

	::System::Void set_Messenger(::Class_1_1294FEF8E985635C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1294FEF8E985635C*))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27_SET_MESSENGER_OFFSET))(this, a1);
	}

	::Class_1_31522EB1D598DA68* get_AudioService()
	{
		return ((::Class_1_31522EB1D598DA68*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27_GET_AUDIOSERVICE_OFFSET))(this);
	}

	::System::Void set_AudioService(::Class_1_31522EB1D598DA68* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_31522EB1D598DA68*))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27_SET_AUDIOSERVICE_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1498* get_QueryUserPrefsService()
	{
		return ((::Class_0_16E4307DCC419505_1498*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27_GET_QUERYUSERPREFSSERVICE_OFFSET))(this);
	}

	::System::Void set_QueryUserPrefsService(::Class_0_16E4307DCC419505_1498* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1498*))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27_SET_QUERYUSERPREFSSERVICE_OFFSET))(this, a1);
	}

	::Class_1_16C4955EF2FA3814* get_WorkshopRepository()
	{
		return ((::Class_1_16C4955EF2FA3814*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27_GET_WORKSHOPREPOSITORY_OFFSET))(this);
	}

	::System::Void set_WorkshopRepository(::Class_1_16C4955EF2FA3814* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_16C4955EF2FA3814*))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27_SET_WORKSHOPREPOSITORY_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_155* get_WorkshopLevelConfigRepository()
	{
		return ((::Class_0_16E4307DCC419505_155*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27_GET_WORKSHOPLEVELCONFIGREPOSITORY_OFFSET))(this);
	}

	::System::Void set_WorkshopLevelConfigRepository(::Class_0_16E4307DCC419505_155* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_155*))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27_SET_WORKSHOPLEVELCONFIGREPOSITORY_OFFSET))(this, a1);
	}

	::Class_1_E64C5E78139B800A* get_OrderList()
	{
		return ((::Class_1_E64C5E78139B800A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27_GET_ORDERLIST_OFFSET))(this);
	}

	::System::Void set_OrderList(::Class_1_E64C5E78139B800A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E64C5E78139B800A*))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27_SET_ORDERLIST_OFFSET))(this, a1);
	}

	::RPG::Client::MechCraft::ViewModel::MechCraftTalentTreeEntranceViewModel* get_TalentEntrance()
	{
		return ((::RPG::Client::MechCraft::ViewModel::MechCraftTalentTreeEntranceViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27_GET_TALENTENTRANCE_OFFSET))(this);
	}

	::System::Void set_TalentEntrance(::RPG::Client::MechCraft::ViewModel::MechCraftTalentTreeEntranceViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentTreeEntranceViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27_SET_TALENTENTRANCE_OFFSET))(this, a1);
	}

	::RPG::Client::MechCraft::ViewModel::MechCraftOrderDetailInfoViewModel* get_DetailInfo()
	{
		return ((::RPG::Client::MechCraft::ViewModel::MechCraftOrderDetailInfoViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27_GET_DETAILINFO_OFFSET))(this);
	}

	::System::Void set_DetailInfo(::RPG::Client::MechCraft::ViewModel::MechCraftOrderDetailInfoViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderDetailInfoViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27_SET_DETAILINFO_OFFSET))(this, a1);
	}

	::RPG::Client::MechCraft::ViewModel::MechCraftOrderSelectTipsViewModel* get_Tips()
	{
		return ((::RPG::Client::MechCraft::ViewModel::MechCraftOrderSelectTipsViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27_GET_TIPS_OFFSET))(this);
	}

	::System::Void set_Tips(::RPG::Client::MechCraft::ViewModel::MechCraftOrderSelectTipsViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderSelectTipsViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27_SET_TIPS_OFFSET))(this, a1);
	}

	::RPG::Client::MechCraft::ViewModel::MechCraftCoinResBarViewModel* get_CoinResBar()
	{
		return ((::RPG::Client::MechCraft::ViewModel::MechCraftCoinResBarViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27_GET_COINRESBAR_OFFSET))(this);
	}

	::System::Void set_CoinResBar(::RPG::Client::MechCraft::ViewModel::MechCraftCoinResBarViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftCoinResBarViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27_SET_COINRESBAR_OFFSET))(this, a1);
	}

	::System::Boolean get_IsInTutorialLevel()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27_GET_ISINTUTORIALLEVEL_OFFSET))(this);
	}

	::System::Void set_IsInTutorialLevel(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27_SET_ISINTUTORIALLEVEL_OFFSET))(this, a1);
	}

	::System::Void add_HandleSetExitAfterTransition(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27_ADD_HANDLESETEXITAFTERTRANSITION_OFFSET))(this, a1);
	}

	::System::Void remove_HandleSetExitAfterTransition(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27_REMOVE_HANDLESETEXITAFTERTRANSITION_OFFSET))(this, a1);
	}

	::System::Void Method_1_9725A4CA0CFEC673()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27_METHOD_1_9725A4CA0CFEC673_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27_DISPOSE_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_397* Method_1_B213056103887067()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27_METHOD_1_B213056103887067_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_397* Method_1_B213056103887067_1()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27_METHOD_1_B213056103887067_1_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_7D374B7050B049E2(::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27_METHOD_1_7D374B7050B049E2_OFFSET))(this, a1);
	}

	::System::Void Method_1_7D374B7050B049E2_1(::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27_METHOD_1_7D374B7050B049E2_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_7D374B7050B049E2_2(::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27_METHOD_1_7D374B7050B049E2_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_1B555116F1579D96(::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27_METHOD_1_1B555116F1579D96_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_BB1E7C4E5465F8EE(::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27_METHOD_1_BB1E7C4E5465F8EE_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DC02668922F287C(::System::Object* a1, ::Class_1_43BD383C98B4C0C5_232* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::Class_1_43BD383C98B4C0C5_232*))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27_METHOD_1_7DC02668922F287C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_03C4FFAD29DE0852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27_METHOD_1_03C4FFAD29DE0852_OFFSET))(this);
	}

	::System::Void Method_1_19844080C13BA28F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27_METHOD_1_19844080C13BA28F_OFFSET))(this);
	}

	::System::Void Method_1_8787B40237648031(::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27_METHOD_1_8787B40237648031_OFFSET))(this, a1);
	}

	::System::Void _Initialize_b__50_0(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27__INITIALIZE_B__50_0_OFFSET))(this, a1, a2);
	}

	::System::Void __OnConfirm_b__59_0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27___ONCONFIRM_B__59_0_OFFSET))(this, a1);
	}

	::System::Void __OnConfirm_g__EnterCraft_59_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07875AF13C598E27___ONCONFIRM_G__ENTERCRAFT_59_1_OFFSET))(this);
	}
};
