#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3A280D225275881D.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_E27CFE06F80E2F77;
class Class_2_1824EF69C8E376A3;
class Class_2_DD79625F22C397C5;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHandBookChangeWishlistTargetRowWidgetController; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER_BUILDSUITMATCHFOURPIECEOWNEDLIST_OFFSET UNITYSDK_OFFSET(0x11A06790)
#define MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER_BUILDSUITMATCHTWOPIECEOWNEDLIST_OFFSET UNITYSDK_OFFSET(0x11A06B40)
#define MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER_CLEARROLEGROUP_OFFSET UNITYSDK_OFFSET(0x11A06150)
#define MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER_FILLROLEGROUP_OFFSET UNITYSDK_OFFSET(0x11A07100)
#define MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x11A05CE0)
#define MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER_ONANYROWCLICK_OFFSET UNITYSDK_OFFSET(0x11A08730)
#define MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11A06030)
#define MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER_ONSETTARGETBTNCLICK_OFFSET UNITYSDK_OFFSET(0x11A08A70)
#define MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11A060C0)
#define MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11A05CF0)
#define MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11A05EB0)
#define MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER_PADTOROWSIZE_OFFSET UNITYSDK_OFFSET(0x11A06EF0)
#define MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER_PICKDEFAULTSELECTION_OFFSET UNITYSDK_OFFSET(0x11A073F0)
#define MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER_REFRESHALL_OFFSET UNITYSDK_OFFSET(0x11A05FE0)
#define MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER_REFRESHAVATARLISTS_OFFSET UNITYSDK_OFFSET(0x11A065C0)
#define MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER_REFRESHEMPTYSTATE_OFFSET UNITYSDK_OFFSET(0x11A06FF0)
#define MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER_REFRESHROLESPACELIST_OFFSET UNITYSDK_OFFSET(0x11A07FE0)
#define MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER_REFRESHSELECTSTATE_OFFSET UNITYSDK_OFFSET(0x11A075C0)
#define MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER_REFRESHSETTARGETBTNSTATE_OFFSET UNITYSDK_OFFSET(0x11A07D30)
#define MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER_REFRESHSUITHEADER_OFFSET UNITYSDK_OFFSET(0x11A06330)
#define MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A09320)
#define MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11A09180)
#define MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11A093D0)
#define MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11A09460)
#define MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11A09470)
#define MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11A09480)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoSelectRoleListDialogPopWindowController_TypeDefinitionIndex = 45626;

	class UIVideoSelectRoleListDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		static ::Il2CppArray<::Enum_3_3A280D225275881D>** StaticGet_AvatarSorters()
		{
			return (::Il2CppArray<::Enum_3_3A280D225275881D>**)Il2CppClass::FromTypeDefinitionIndex(UIVideoSelectRoleListDialogPopWindowController_TypeDefinitionIndex)->GetStaticField(0x42F40);
		}
		// static const ::System::Int32 ItemsPerRow = 0x6; // 0x0
		::Class_2_DD79625F22C397C5* _view; // 0x318
		::System::Int32 _selectUpSuitID; // 0x320
		::System::UInt32 _defaultCheckedAvatarID; // 0x324
		::System::Action_1<::System::Int32>* _onSelectConfirm; // 0x328
		::Class_2_1824EF69C8E376A3* _curAvatar; // 0x330
		::MoleMole::UIHandBookChangeWishlistTargetRowWidgetController* _curSelectedCtrl; // 0x338
		::System::Int32 _selectedAvatarId; // 0x340
		::System::Collections::Generic::List_1<::Class_1_E27CFE06F80E2F77*>* _roleGroupContexts; // 0x348
		::System::Collections::Generic::List_1<::Class_1_E27CFE06F80E2F77*>* _roleGroup02Contexts; // 0x350
		::System::Collections::Generic::List_1<::MoleMole::UIHandBookChangeWishlistTargetRowWidgetController*>* _roleGroupRows; // 0x358
		::System::Collections::Generic::List_1<::MoleMole::UIHandBookChangeWishlistTargetRowWidgetController*>* _roleGroup02Rows; // 0x360

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER_REFRESHALL_OFFSET))(this);
		}

		::System::Void RefreshSuitHeader()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER_REFRESHSUITHEADER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* BuildSuitMatchFourPieceOwnedList()
		{
			return ((::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER_BUILDSUITMATCHFOURPIECEOWNEDLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* BuildSuitMatchTwoPieceOwnedList()
		{
			return ((::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER_BUILDSUITMATCHTWOPIECEOWNEDLIST_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* PadToRowSize(::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* list)
		{
			return ((::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>*(*)(::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER_PADTOROWSIZE_OFFSET))(list);
		}

		::System::Void RefreshEmptyState(::UnityEngine::RectTransform* emptyRoot, ::UnityEngine::UI::Extension::UILocalizationText* emptyText, ::System::Int32 listCount)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::UI::Extension::UILocalizationText*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER_REFRESHEMPTYSTATE_OFFSET))(this, emptyRoot, emptyText, listCount);
		}

		::System::Void ClearRoleGroup(::System::Collections::Generic::List_1<::MoleMole::UIHandBookChangeWishlistTargetRowWidgetController*>* rows, ::System::Collections::Generic::List_1<::Class_1_E27CFE06F80E2F77*>* contexts)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UIHandBookChangeWishlistTargetRowWidgetController*>*, ::System::Collections::Generic::List_1<::Class_1_E27CFE06F80E2F77*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER_CLEARROLEGROUP_OFFSET))(this, rows, contexts);
		}

		::System::Void FillRoleGroup(::UnityEngine::RectTransform* parent, ::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* avatars, ::System::Collections::Generic::List_1<::Class_1_E27CFE06F80E2F77*>* contexts, ::System::Collections::Generic::List_1<::MoleMole::UIHandBookChangeWishlistTargetRowWidgetController*>* rows)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>*, ::System::Collections::Generic::List_1<::Class_1_E27CFE06F80E2F77*>*, ::System::Collections::Generic::List_1<::MoleMole::UIHandBookChangeWishlistTargetRowWidgetController*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER_FILLROLEGROUP_OFFSET))(this, parent, avatars, contexts, rows);
		}

		::System::Void RefreshAvatarLists()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER_REFRESHAVATARLISTS_OFFSET))(this);
		}

		::System::Void PickDefaultSelection(::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* related, ::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* others)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>*, ::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER_PICKDEFAULTSELECTION_OFFSET))(this, related, others);
		}

		::System::Void RefreshRoleSpaceList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER_REFRESHROLESPACELIST_OFFSET))(this);
		}

		::System::Void RefreshSelectState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER_REFRESHSELECTSTATE_OFFSET))(this);
		}

		::System::Void OnAnyRowClick(::MoleMole::UIHandBookChangeWishlistTargetRowWidgetController* row)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHandBookChangeWishlistTargetRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER_ONANYROWCLICK_OFFSET))(this, row);
		}

		::System::Void RefreshSetTargetBtnState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER_REFRESHSETTARGETBTNSTATE_OFFSET))(this);
		}

		::System::Void OnSetTargetBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER_ONSETTARGETBTNCLICK_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
