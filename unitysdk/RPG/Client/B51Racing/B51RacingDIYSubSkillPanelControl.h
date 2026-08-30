#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

class Class_1_13F74058D18673AD;
class Class_1_72977D67C0793A43;
class Class_1_EF079561C804F2A6;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class StaticListViewItem; }
namespace RPG::Client::B51Racing { class B51RacingCarTargetPartIconLiteControl; }
namespace RPG::Client::B51Racing { class LuaControllerHandle; }
namespace RPG::UINavigation { class UINavigationZoneManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL_GETSELECTEDPARTIDS_OFFSET UNITYSDK_OFFSET(0xC86BA20)
#define RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL_HASSELECTIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0xC86BC00)
#define RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL_SETCONTENTVISIBLE_OFFSET UNITYSDK_OFFSET(0xC86C040)
#define RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC86C3E0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__BUILDPARTITEMVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xC871DA0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__BUILDSLOTITEMVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xC870EA0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__CCTOR_OFFSET UNITYSDK_OFFSET(0xC872E00)
#define RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xC872DD0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__FINDPARTICONPATH_OFFSET UNITYSDK_OFFSET(0xC871910)
#define RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__GETBRIDGEHANDLE_OFFSET UNITYSDK_OFFSET(0xC870E00)
#define RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__GETSELECTEDITEMINDEX_OFFSET UNITYSDK_OFFSET(0xC8721B0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__GETUINAVIGATIONZONEMANAGER_OFFSET UNITYSDK_OFFSET(0xC872310)
#define RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC870BA0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__ONGETPARTITEM_OFFSET UNITYSDK_OFFSET(0xC872400)
#define RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__ONGETSLOTITEM_OFFSET UNITYSDK_OFFSET(0xC871A60)
#define RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC870880)
#define RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__ONNEXTSLOT_OFFSET UNITYSDK_OFFSET(0xC872BE0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__ONPARTITEMCLICKED_OFFSET UNITYSDK_OFFSET(0xC8725D0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__ONPRESLOT_OFFSET UNITYSDK_OFFSET(0xC8729F0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__ONSLOTITEMCLICKED_OFFSET UNITYSDK_OFFSET(0xC871CA0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__REFRESHPARTLIST_OFFSET UNITYSDK_OFFSET(0xC871390)
#define RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__REFRESHSLOTLIST_OFFSET UNITYSDK_OFFSET(0xC871200)
#define RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__REFRESHTEXTS_OFFSET UNITYSDK_OFFSET(0xC871760)
#define RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__SETSLOTCHECKED_OFFSET UNITYSDK_OFFSET(0xC871630)
#define RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__UPDATEPARTSELECTIONSTATE_OFFSET UNITYSDK_OFFSET(0xC872750)
#define RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__UPDATESLOTEQUIPSTATE_OFFSET UNITYSDK_OFFSET(0xC872880)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingDIYSubSkillPanelControl_TypeDefinitionIndex = 80456;

	class B51RacingDIYSubSkillPanelControl : public ::Sofa::BaseSofaControl
	{
	public:
		static ::Il2CppArray<::RPG::GameCore::B51RacingPartType>** StaticGet__SLOT_PART_TYPES()
		{
			return (::Il2CppArray<::RPG::GameCore::B51RacingPartType>**)Il2CppClass::FromTypeDefinitionIndex(B51RacingDIYSubSkillPanelControl_TypeDefinitionIndex)->GetStaticField(0x66770);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::RPG::Client::TextID>** StaticGet__SLOT_TYPE_NAME_MAP()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::RPG::Client::TextID>**)Il2CppClass::FromTypeDefinitionIndex(B51RacingDIYSubSkillPanelControl_TypeDefinitionIndex)->GetStaticField(0x66778);
		}
		// static const ::System::Int32 _SLOT_COUNT = 0x3; // 0x0
		::RPG::Client::StaticListView* _AccessoriesTrailListView; // 0x38
		::UnityEngine::Transform* _AccessoriesTrailListNode; // 0x40
		::RPG::Client::StaticListView* _AccessoriesSlotListView; // 0x48
		::UnityEngine::Transform* _SlotListNode; // 0x50
		::RPG::Client::LocalizedText* _SelectStatusText; // 0x58
		::RPG::Client::AnimatorButton* _BtnGamePadPreSlot; // 0x60
		::RPG::Client::AnimatorButton* _BtnGamePadNextSlot; // 0x68
		::UnityEngine::Transform* _CurrentSelectSlotTypeIconNode; // 0x70
		::RPG::Client::B51Racing::B51RacingCarTargetPartIconLiteControl* _CurrentSelectSlotTypeIcon; // 0x78
		::RPG::Client::LocalizedText* _TitleText; // 0x80
		::System::Action_1<::System::UInt32>* OnPartSelected; // 0x88
		::System::Action_1<::RPG::GameCore::B51RacingPartType>* OnSlotSelected; // 0x90
		::System::Boolean _TrailListInitialized; // 0x98
		::System::Boolean _SlotListInitialized; // 0x99
		::Il2CppArray<::Class_1_72977D67C0793A43*>* _SlotItemVMs; // 0xA0
		::Il2CppArray<::Class_1_EF079561C804F2A6*>* _CurrentPartItems; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__CCTOR_OFFSET))();
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::B51Racing::LuaControllerHandle* _GetBridgeHandle()
		{
			return ((::RPG::Client::B51Racing::LuaControllerHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__GETBRIDGEHANDLE_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL_SETUPVIEW_OFFSET))(this);
		}

		::System::Void SetContentVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL_SETCONTENTVISIBLE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetSelectedPartIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL_GETSELECTEDPARTIDS_OFFSET))(this);
		}

		::System::Boolean HasSelectionCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL_HASSELECTIONCOMPLETED_OFFSET))(this);
		}

		::System::Void _BuildSlotItemViewModels(::Class_1_13F74058D18673AD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_13F74058D18673AD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__BUILDSLOTITEMVIEWMODELS_OFFSET))(this, a1);
		}

		::System::Void _RefreshSlotList(::Class_1_13F74058D18673AD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_13F74058D18673AD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__REFRESHSLOTLIST_OFFSET))(this, a1);
		}

		::RPG::Client::StaticListViewItem* _OnGetSlotItem(::XLua::LuaTable* a1, ::RPG::Client::StaticListView* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__ONGETSLOTITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _SetSlotChecked(::RPG::GameCore::B51RacingPartType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::B51RacingPartType))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__SETSLOTCHECKED_OFFSET))(this, a1);
		}

		::System::Void _OnSlotItemClicked(::RPG::GameCore::B51RacingPartType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::B51RacingPartType))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__ONSLOTITEMCLICKED_OFFSET))(this, a1);
		}

		::System::Void _RefreshPartList(::Class_1_13F74058D18673AD* a1, ::RPG::GameCore::B51RacingPartType a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_13F74058D18673AD*, ::RPG::GameCore::B51RacingPartType))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__REFRESHPARTLIST_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetSelectedItemIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__GETSELECTEDITEMINDEX_OFFSET))(this);
		}

		::Il2CppArray<::Class_1_EF079561C804F2A6*>* _BuildPartItemViewModels(::Class_1_13F74058D18673AD* a1, ::RPG::GameCore::B51RacingPartType a2)
		{
			return ((::Il2CppArray<::Class_1_EF079561C804F2A6*>*(*)(::PVOID, ::Class_1_13F74058D18673AD*, ::RPG::GameCore::B51RacingPartType))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__BUILDPARTITEMVIEWMODELS_OFFSET))(this, a1, a2);
		}

		::RPG::Client::StaticListViewItem* _OnGetPartItem(::XLua::LuaTable* a1, ::RPG::Client::StaticListView* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__ONGETPARTITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnPartItemClicked(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__ONPARTITEMCLICKED_OFFSET))(this, a1);
		}

		::System::Void _UpdatePartSelectionState(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__UPDATEPARTSELECTIONSTATE_OFFSET))(this, a1);
		}

		::System::Void _UpdateSlotEquipState(::Class_1_13F74058D18673AD* a1, ::RPG::GameCore::B51RacingPartType a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_13F74058D18673AD*, ::RPG::GameCore::B51RacingPartType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__UPDATESLOTEQUIPSTATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RefreshTexts(::Class_1_13F74058D18673AD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_13F74058D18673AD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__REFRESHTEXTS_OFFSET))(this, a1);
		}

		::System::String* _FindPartIconPath(::Class_1_13F74058D18673AD* a1, ::RPG::GameCore::B51RacingPartType a2, ::System::UInt32 a3)
		{
			return ((::System::String*(*)(::PVOID, ::Class_1_13F74058D18673AD*, ::RPG::GameCore::B51RacingPartType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__FINDPARTICONPATH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnPreSlot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__ONPRESLOT_OFFSET))(this);
		}

		::System::Void _OnNextSlot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__ONNEXTSLOT_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationZoneManager* _GetUINavigationZoneManager()
		{
			return ((::RPG::UINavigation::UINavigationZoneManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL__GETUINAVIGATIONZONEMANAGER_OFFSET))(this);
		}
	};
}
