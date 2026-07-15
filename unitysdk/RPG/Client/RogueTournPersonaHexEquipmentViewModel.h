#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournPersonaBaseViewModel.h"

namespace RPG::Client { class IRogueTournHex; }
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class RogueTournPersonaHexEquipmentSelectInfo; }
namespace RPG::Client { class RogueTournPersonaHexEquipmentSlotPanelInfo; }
namespace RPG::Client { class RogueWorkBenchHexEquipment; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0x1AA65A60)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_EQUIPHEX_OFFSET UNITYSDK_OFFSET(0x1AA66850)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_GET_ACHIVEDHEXES_OFFSET UNITYSDK_OFFSET(0x1AA64A20)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_GET_HEXEQUIPMENTWORKBENCH_OFFSET UNITYSDK_OFFSET(0x1AA65900)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_GET_HEXES_OFFSET UNITYSDK_OFFSET(0x1AA63D80)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_GET_SELECTINFO_OFFSET UNITYSDK_OFFSET(0x1AA65920)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_GET_SLOTPANELINFO_OFFSET UNITYSDK_OFFSET(0x1AA65940)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1AA638B0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_ISHEXBUILDREFRECOMMEND_OFFSET UNITYSDK_OFFSET(0x1AA66320)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_ISHEXEQUIPPED_OFFSET UNITYSDK_OFFSET(0x1AA639D0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_SELECTHEX_OFFSET UNITYSDK_OFFSET(0x1AA66680)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_SET_HEXEQUIPMENTWORKBENCH_OFFSET UNITYSDK_OFFSET(0x1AA65910)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_SET_SELECTINFO_OFFSET UNITYSDK_OFFSET(0x1AA65930)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_SET_SLOTPANELINFO_OFFSET UNITYSDK_OFFSET(0x1AA65950)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_SHOWPAGE_OFFSET UNITYSDK_OFFSET(0x1AA65960)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_TRYUNEQUIPHEX_OFFSET UNITYSDK_OFFSET(0x1AA64C00)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__COMPAREHEXES_OFFSET UNITYSDK_OFFSET(0x1AA66770)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA65BB0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__INIT_OFFSET UNITYSDK_OFFSET(0x1AA65C20)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1AA65FC0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__ONROGUEWORKBENCHHANDLEFUNC_OFFSET UNITYSDK_OFFSET(0x1AA660D0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__REGISTERNOTIFY_OFFSET UNITYSDK_OFFSET(0x1AA65F00)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__REJECTPROMISE_OFFSET UNITYSDK_OFFSET(0x1AA67200)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__REMOVENOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1AA66010)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__REPORTEQUIPHEX_OFFSET UNITYSDK_OFFSET(0x1AA67390)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__REQUESTEQUIPHEX_OFFSET UNITYSDK_OFFSET(0x1AA66C00)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__SETUPHEXES_OFFSET UNITYSDK_OFFSET(0x1AA65C90)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__SHOWUNEQUIPHEXCONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x1AA66D60)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__UNEQUIPHEX_OFFSET UNITYSDK_OFFSET(0x1AA66F50)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___UNEQUIPHEX_B__32_1_OFFSET UNITYSDK_OFFSET(0x1AA676C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaHexEquipmentViewModel_TypeDefinitionIndex = 69575;

	class RogueTournPersonaHexEquipmentViewModel : public ::RPG::Client::RogueTournPersonaBaseViewModel
	{
	public:
		::RPG::Client::RogueWorkBenchHexEquipment* _HexEquipmentWorkBench_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournHex*>* _AchivedHexes; // 0x28
		::RPG::Client::RogueTournPersonaHexEquipmentSlotPanelInfo* _SlotPanelInfo_k__BackingField; // 0x30
		::RPG::Client::Promises::Promise* _EquipHexPromise; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournHex*>* _Hexes; // 0x40
		::RPG::Client::RogueTournPersonaHexEquipmentSelectInfo* _SelectInfo_k__BackingField; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournHex*>* get_Hexes()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournHex*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_GET_HEXES_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournHex*>* get_AchivedHexes()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournHex*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_GET_ACHIVEDHEXES_OFFSET))(this);
		}

		::RPG::Client::RogueWorkBenchHexEquipment* get_HexEquipmentWorkBench()
		{
			return ((::RPG::Client::RogueWorkBenchHexEquipment*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_GET_HEXEQUIPMENTWORKBENCH_OFFSET))(this);
		}

		::System::Void set_HexEquipmentWorkBench(::RPG::Client::RogueWorkBenchHexEquipment* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueWorkBenchHexEquipment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_SET_HEXEQUIPMENTWORKBENCH_OFFSET))(this, a1);
		}

		::RPG::Client::RogueTournPersonaHexEquipmentSelectInfo* get_SelectInfo()
		{
			return ((::RPG::Client::RogueTournPersonaHexEquipmentSelectInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_GET_SELECTINFO_OFFSET))(this);
		}

		::System::Void set_SelectInfo(::RPG::Client::RogueTournPersonaHexEquipmentSelectInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournPersonaHexEquipmentSelectInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_SET_SELECTINFO_OFFSET))(this, a1);
		}

		::RPG::Client::RogueTournPersonaHexEquipmentSlotPanelInfo* get_SlotPanelInfo()
		{
			return ((::RPG::Client::RogueTournPersonaHexEquipmentSlotPanelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_GET_SLOTPANELINFO_OFFSET))(this);
		}

		::System::Void set_SlotPanelInfo(::RPG::Client::RogueTournPersonaHexEquipmentSlotPanelInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournPersonaHexEquipmentSlotPanelInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_SET_SLOTPANELINFO_OFFSET))(this, a1);
		}

		static ::RPG::Client::LuaUIController* ShowPage(::RPG::Client::RogueWorkBenchHexEquipment* a1)
		{
			return ((::RPG::Client::LuaUIController*(*)(::RPG::Client::RogueWorkBenchHexEquipment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_SHOWPAGE_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTournPersonaHexEquipmentViewModel* Create(::RPG::Client::RogueWorkBenchHexEquipment* a1)
		{
			return ((::RPG::Client::RogueTournPersonaHexEquipmentViewModel*(*)(::RPG::Client::RogueWorkBenchHexEquipment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_CREATE_OFFSET))(a1);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__INIT_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__ONDISPOSE_OFFSET))(this);
		}

		::System::Void _RegisterNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__REGISTERNOTIFY_OFFSET))(this);
		}

		::System::Void _OnRogueWorkbenchHandleFunc(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__ONROGUEWORKBENCHHANDLEFUNC_OFFSET))(this, a1);
		}

		::System::Void _RemoveNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__REMOVENOTIFYHANDLERS_OFFSET))(this);
		}

		::System::UInt32 IndexOf(::RPG::Client::IRogueTournHex* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_INDEXOF_OFFSET))(this, a1);
		}

		::System::Boolean IsHexEquipped(::RPG::Client::IRogueTournHex* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_ISHEXEQUIPPED_OFFSET))(this, a1);
		}

		::System::Boolean IsHexBuildRefRecommend(::RPG::Client::IRogueTournHex* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_ISHEXBUILDREFRECOMMEND_OFFSET))(this, a1);
		}

		::System::Void SelectHex(::RPG::Client::IRogueTournHex* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_SELECTHEX_OFFSET))(this, a1);
		}

		::System::Void _SetupHexes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__SETUPHEXES_OFFSET))(this);
		}

		::System::Int32 _CompareHexes(::RPG::Client::IRogueTournHex* a1, ::RPG::Client::IRogueTournHex* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournHex*, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__COMPAREHEXES_OFFSET))(this, a1, a2);
		}

		::System::Void EquipHex(::RPG::Client::IRogueTournHex* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_EQUIPHEX_OFFSET))(this, a1);
		}

		::System::Void TryUnEquipHex(::RPG::Client::IRogueTournHex* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_TRYUNEQUIPHEX_OFFSET))(this, a1);
		}

		::System::Void _ShowUnEquipHexConfirmDialog(::RPG::Client::IRogueTournHex* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__SHOWUNEQUIPHEXCONFIRMDIALOG_OFFSET))(this, a1);
		}

		::System::Void _UnEquipHex(::RPG::Client::IRogueTournHex* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__UNEQUIPHEX_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _RequestEquipHex(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__REQUESTEQUIPHEX_OFFSET))(this, a1);
		}

		::System::Void _ReportEquipHex(::RPG::Client::IRogueTournHex* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__REPORTEQUIPHEX_OFFSET))(this, a1);
		}

		::System::Void _RejectPromise(::RPG::Client::Promises::Promise*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__REJECTPROMISE_OFFSET))(this, a1);
		}

		::System::Void __UnEquipHex_b__32_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___UNEQUIPHEX_B__32_1_OFFSET))(this);
		}
	};
}
