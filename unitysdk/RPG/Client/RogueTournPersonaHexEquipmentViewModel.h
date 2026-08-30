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
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_ADDATTACKDAMAGETYPEFILTER_OFFSET UNITYSDK_OFFSET(0x1C79C7C0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_ADDAVATARBASETYPEFILTER_OFFSET UNITYSDK_OFFSET(0x1C79C820)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_APPLYHEXFILTERS_OFFSET UNITYSDK_OFFSET(0x1C79C880)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_CLEARHEXFILTERS_OFFSET UNITYSDK_OFFSET(0x1C79C6D0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0x1C79BC50)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_DISPLAYEDINDEXOF_OFFSET UNITYSDK_OFFSET(0x1C79C610)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_EQUIPHEX_OFFSET UNITYSDK_OFFSET(0x1C79D520)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_GET_ACHIVEDHEXES_OFFSET UNITYSDK_OFFSET(0x1C79B880)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_GET_DISPLAYEDHEXES_OFFSET UNITYSDK_OFFSET(0x1C79BAB0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_GET_HEXEQUIPMENTWORKBENCH_OFFSET UNITYSDK_OFFSET(0x1C79BAF0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_GET_HEXES_OFFSET UNITYSDK_OFFSET(0x1C79BA70)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_GET_SELECTINFO_OFFSET UNITYSDK_OFFSET(0x1C79BB10)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_GET_SLOTPANELINFO_OFFSET UNITYSDK_OFFSET(0x1C79BB30)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1C79C550)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_ISHEXBUILDREFRECOMMEND_OFFSET UNITYSDK_OFFSET(0x1C79CDA0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_ISHEXEQUIPPED_OFFSET UNITYSDK_OFFSET(0x1C79CC20)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_SELECTHEX_OFFSET UNITYSDK_OFFSET(0x1C79D100)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_SET_HEXEQUIPMENTWORKBENCH_OFFSET UNITYSDK_OFFSET(0x1C79BB00)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_SET_SELECTINFO_OFFSET UNITYSDK_OFFSET(0x1C79BB20)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_SET_SLOTPANELINFO_OFFSET UNITYSDK_OFFSET(0x1C79BB40)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_SHOWPAGE_OFFSET UNITYSDK_OFFSET(0x1C79BB50)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_TRYUNEQUIPHEX_OFFSET UNITYSDK_OFFSET(0x1C79ACF0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__COMPAREHEXES_OFFSET UNITYSDK_OFFSET(0x1C79D440)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C79BD30)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__INIT_OFFSET UNITYSDK_OFFSET(0x1C79BE10)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__ISATTACKDAMAGETYPEACCEPTED_OFFSET UNITYSDK_OFFSET(0x1C79D2A0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__ISAVATARBASETYPEACCEPTED_OFFSET UNITYSDK_OFFSET(0x1C79D370)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__ISHEXACCEPTEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1C79D1F0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1C79C1C0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__ONROGUEWORKBENCHHANDLEFUNC_OFFSET UNITYSDK_OFFSET(0x1C79C2D0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__REFRESHDISPLAYEDHEXES_OFFSET UNITYSDK_OFFSET(0x1C79C930)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__REGISTERNOTIFY_OFFSET UNITYSDK_OFFSET(0x1C79C100)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__REJECTPROMISE_OFFSET UNITYSDK_OFFSET(0x1C79DED0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__REMOVENOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1C79C210)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__REPORTEQUIPHEX_OFFSET UNITYSDK_OFFSET(0x1C79E060)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__REQUESTEQUIPHEX_OFFSET UNITYSDK_OFFSET(0x1C79D8D0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__SETUPHEXES_OFFSET UNITYSDK_OFFSET(0x1C79BE80)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__SETUPSELECTEDHEXAFTERFILTER_OFFSET UNITYSDK_OFFSET(0x1C79CB40)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__SHOWUNEQUIPHEXCONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x1C79DA30)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__UNEQUIPHEX_OFFSET UNITYSDK_OFFSET(0x1C79DC20)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___UNEQUIPHEX_B__44_1_OFFSET UNITYSDK_OFFSET(0x1C79E390)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaHexEquipmentViewModel_TypeDefinitionIndex = 72808;

	class RogueTournPersonaHexEquipmentViewModel : public ::RPG::Client::RogueTournPersonaBaseViewModel
	{
	public:
		::RPG::Client::RogueTournPersonaHexEquipmentSlotPanelInfo* _SlotPanelInfo_k__BackingField; // 0x20
		::RPG::Client::Promises::Promise* _EquipHexPromise; // 0x28
		::RPG::Client::RogueTournPersonaHexEquipmentSelectInfo* _SelectInfo_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournHex*>* _DisplayedHexes; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournHex*>* _AchivedHexes; // 0x40
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _AttackDamageTypeFilterTypes; // 0x48
		::RPG::Client::RogueWorkBenchHexEquipment* _HexEquipmentWorkBench_k__BackingField; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournHex*>* _Hexes; // 0x58
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _AvatarBaseTypeFilterTypes; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournHex*>* get_Hexes()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournHex*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_GET_HEXES_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournHex*>* get_DisplayedHexes()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournHex*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_GET_DISPLAYEDHEXES_OFFSET))(this);
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

		::System::UInt32 DisplayedIndexOf(::RPG::Client::IRogueTournHex* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_DISPLAYEDINDEXOF_OFFSET))(this, a1);
		}

		::System::Void ClearHexFilters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_CLEARHEXFILTERS_OFFSET))(this);
		}

		::System::Void AddAttackDamageTypeFilter(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_ADDATTACKDAMAGETYPEFILTER_OFFSET))(this, a1);
		}

		::System::Void AddAvatarBaseTypeFilter(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_ADDAVATARBASETYPEFILTER_OFFSET))(this, a1);
		}

		::System::Void ApplyHexFilters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL_APPLYHEXFILTERS_OFFSET))(this);
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

		::System::Void _RefreshDisplayedHexes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__REFRESHDISPLAYEDHEXES_OFFSET))(this);
		}

		::System::Boolean _IsHexAcceptedByFilter(::RPG::Client::IRogueTournHex* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__ISHEXACCEPTEDBYFILTER_OFFSET))(this, a1);
		}

		::System::Boolean _IsAttackDamageTypeAccepted(::RPG::Client::IRogueTournHex* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__ISATTACKDAMAGETYPEACCEPTED_OFFSET))(this, a1);
		}

		::System::Boolean _IsAvatarBaseTypeAccepted(::RPG::Client::IRogueTournHex* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__ISAVATARBASETYPEACCEPTED_OFFSET))(this, a1);
		}

		::System::Void _SetupSelectedHexAfterFilter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL__SETUPSELECTEDHEXAFTERFILTER_OFFSET))(this);
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

		::System::Void __UnEquipHex_b__44_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___UNEQUIPHEX_B__44_1_OFFSET))(this);
		}
	};
}
