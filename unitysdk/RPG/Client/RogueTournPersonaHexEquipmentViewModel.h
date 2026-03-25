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

#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xA3BC0B0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_EQUIPHEX_OFFSET UNITYSDK_OFFSET(0xA3BCD00)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_GET_ACHIVEDHEXES_OFFSET UNITYSDK_OFFSET(0xA3BBF30)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_GET_HEXEQUIPMENTWORKBENCH_OFFSET UNITYSDK_OFFSET(0xA3BBF40)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_GET_HEXES_OFFSET UNITYSDK_OFFSET(0xA3BBF20)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_GET_SELECTINFO_OFFSET UNITYSDK_OFFSET(0xA3BBF60)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_GET_SLOTPANELINFO_OFFSET UNITYSDK_OFFSET(0xA3BBF80)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_INDEXOF_OFFSET UNITYSDK_OFFSET(0xA3BA2D0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_ISHEXBUILDREFRECOMMEND_OFFSET UNITYSDK_OFFSET(0xA3BC900)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_ISHEXEQUIPPED_OFFSET UNITYSDK_OFFSET(0xA3BA400)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_SELECTHEX_OFFSET UNITYSDK_OFFSET(0xA3BCB30)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_SET_HEXEQUIPMENTWORKBENCH_OFFSET UNITYSDK_OFFSET(0xA3BBF50)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_SET_SELECTINFO_OFFSET UNITYSDK_OFFSET(0xA3BBF70)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_SET_SLOTPANELINFO_OFFSET UNITYSDK_OFFSET(0xA3BBF90)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_SHOWPAGE_OFFSET UNITYSDK_OFFSET(0xA3BBFA0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_TRYUNEQUIPHEX_OFFSET UNITYSDK_OFFSET(0xA3BB460)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__COMPAREHEXES_OFFSET UNITYSDK_OFFSET(0xA3BCC20)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xA3BC200)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__INIT_OFFSET UNITYSDK_OFFSET(0xA3BC270)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xA3BC5D0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__ONROGUEWORKBENCHHANDLEFUNC_OFFSET UNITYSDK_OFFSET(0xA3BC6B0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__REGISTERNOTIFY_OFFSET UNITYSDK_OFFSET(0xA3BC540)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__REJECTPROMISE_OFFSET UNITYSDK_OFFSET(0xA3BD790)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__REMOVENOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA3BC620)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__REPORTEQUIPHEX_OFFSET UNITYSDK_OFFSET(0xA3BD8C0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__REQUESTEQUIPHEX_OFFSET UNITYSDK_OFFSET(0xA3BD120)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__SETUPHEXES_OFFSET UNITYSDK_OFFSET(0xA3BC2E0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__SHOWUNEQUIPHEXCONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0xA3BD280)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__UNEQUIPHEX_OFFSET UNITYSDK_OFFSET(0xA3BD430)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xA3BDC80)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___UNEQUIPHEX_B__32_1_OFFSET UNITYSDK_OFFSET(0xA3BDC10)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaHexEquipmentViewModel_TypeDefinitionIndex = 59750;

	class RogueTournPersonaHexEquipmentViewModel : public ::RPG::Client::RogueTournPersonaBaseViewModel
	{
	public:
		::RPG::Client::RogueTournPersonaHexEquipmentSelectInfo* _SelectInfo_k__BackingField; // 0x20
		::RPG::Client::RogueTournPersonaHexEquipmentSlotPanelInfo* _SlotPanelInfo_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournHex*>* _Hexes; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournHex*>* _AchivedHexes; // 0x38
		::RPG::Client::Promises::Promise* _EquipHexPromise; // 0x40
		::RPG::Client::RogueWorkBenchHexEquipment* _HexEquipmentWorkBench_k__BackingField; // 0x48

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

		::System::Void set_HexEquipmentWorkBench(::RPG::Client::RogueWorkBenchHexEquipment* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueWorkBenchHexEquipment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_SET_HEXEQUIPMENTWORKBENCH_OFFSET))(this, value);
		}

		::RPG::Client::RogueTournPersonaHexEquipmentSelectInfo* get_SelectInfo()
		{
			return ((::RPG::Client::RogueTournPersonaHexEquipmentSelectInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_GET_SELECTINFO_OFFSET))(this);
		}

		::System::Void set_SelectInfo(::RPG::Client::RogueTournPersonaHexEquipmentSelectInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournPersonaHexEquipmentSelectInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_SET_SELECTINFO_OFFSET))(this, value);
		}

		::RPG::Client::RogueTournPersonaHexEquipmentSlotPanelInfo* get_SlotPanelInfo()
		{
			return ((::RPG::Client::RogueTournPersonaHexEquipmentSlotPanelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_GET_SLOTPANELINFO_OFFSET))(this);
		}

		::System::Void set_SlotPanelInfo(::RPG::Client::RogueTournPersonaHexEquipmentSlotPanelInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournPersonaHexEquipmentSlotPanelInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_SET_SLOTPANELINFO_OFFSET))(this, value);
		}

		static ::RPG::Client::LuaUIController* ShowPage(::RPG::Client::RogueWorkBenchHexEquipment* hexEquipment)
		{
			return ((::RPG::Client::LuaUIController*(*)(::RPG::Client::RogueWorkBenchHexEquipment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_SHOWPAGE_OFFSET))(hexEquipment);
		}

		static ::RPG::Client::RogueTournPersonaHexEquipmentViewModel* Create(::RPG::Client::RogueWorkBenchHexEquipment* hexEquipment)
		{
			return ((::RPG::Client::RogueTournPersonaHexEquipmentViewModel*(*)(::RPG::Client::RogueWorkBenchHexEquipment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_CREATE_OFFSET))(hexEquipment);
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

		::System::Void _OnRogueWorkbenchHandleFunc(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__ONROGUEWORKBENCHHANDLEFUNC_OFFSET))(this, arg);
		}

		::System::Void _RemoveNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__REMOVENOTIFYHANDLERS_OFFSET))(this);
		}

		::System::UInt32 IndexOf(::RPG::Client::IRogueTournHex* hex)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_INDEXOF_OFFSET))(this, hex);
		}

		::System::Boolean IsHexEquipped(::RPG::Client::IRogueTournHex* hex)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_ISHEXEQUIPPED_OFFSET))(this, hex);
		}

		::System::Boolean IsHexBuildRefRecommend(::RPG::Client::IRogueTournHex* hex)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_ISHEXBUILDREFRECOMMEND_OFFSET))(this, hex);
		}

		::System::Void SelectHex(::RPG::Client::IRogueTournHex* hex)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_SELECTHEX_OFFSET))(this, hex);
		}

		::System::Void _SetupHexes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__SETUPHEXES_OFFSET))(this);
		}

		::System::Int32 _CompareHexes(::RPG::Client::IRogueTournHex* a, ::RPG::Client::IRogueTournHex* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournHex*, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__COMPAREHEXES_OFFSET))(this, a, b);
		}

		::System::Void EquipHex(::RPG::Client::IRogueTournHex* hex)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_EQUIPHEX_OFFSET))(this, hex);
		}

		::System::Void TryUnEquipHex(::RPG::Client::IRogueTournHex* hex)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_TRYUNEQUIPHEX_OFFSET))(this, hex);
		}

		::System::Void _ShowUnEquipHexConfirmDialog(::RPG::Client::IRogueTournHex* hex)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__SHOWUNEQUIPHEXCONFIRMDIALOG_OFFSET))(this, hex);
		}

		::System::Void _UnEquipHex(::RPG::Client::IRogueTournHex* hex)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__UNEQUIPHEX_OFFSET))(this, hex);
		}

		::RPG::Client::Promises::IPromise* _RequestEquipHex(::System::Collections::Generic::List_1<::System::UInt32>* equippedHexIDs)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__REQUESTEQUIPHEX_OFFSET))(this, equippedHexIDs);
		}

		::System::Void _ReportEquipHex(::RPG::Client::IRogueTournHex* hex)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__REPORTEQUIPHEX_OFFSET))(this, hex);
		}

		::System::Void _RejectPromise(::RPG::Client::Promises::Promise*& promise)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__REJECTPROMISE_OFFSET))(this, promise);
		}

		::System::Void __UnEquipHex_b__32_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___UNEQUIPHEX_B__32_1_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
		}
	};
}
