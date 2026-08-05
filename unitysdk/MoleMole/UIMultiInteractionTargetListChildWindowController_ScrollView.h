#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_72BDD67FEA972F1C;
namespace MoleMole { class UIMultiInteractionTargetListChildWindowController; }
namespace MoleMole { class UIMultiInteractionTargetListItemWidgetController; }
namespace MoleMole { class UIMultiInteractionTargetListItemWidgetController_Context; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class ScrollRect; }

#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x15F41F40)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_CLEANUP_OFFSET UNITYSDK_OFFSET(0x15F42050)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_CLEARPOOLED_OFFSET UNITYSDK_OFFSET(0x15F43D80)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_DEALLOCATEALLIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x15F43620)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_DEALLOCATE_OFFSET UNITYSDK_OFFSET(0x15F434D0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_FILLPOOL_OFFSET UNITYSDK_OFFSET(0x15F415B0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_FINDBYINTERACTION_OFFSET UNITYSDK_OFFSET(0x15F44A70)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_GETITEMCTRL_OFFSET UNITYSDK_OFFSET(0x15F449E0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_GETSCROLLVELOCITYBYNORMALIZEDDISTANCE_OFFSET UNITYSDK_OFFSET(0x15F453D0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_GETVERTICALSCROLLDISTANCE_OFFSET UNITYSDK_OFFSET(0x15F452C0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0x15F43E30)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_SCROLLTOTARGET_OFFSET UNITYSDK_OFFSET(0x15F45140)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_STARTITEMFADEIN_OFFSET UNITYSDK_OFFSET(0x15F44890)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_STARTITEMFADEOUT_OFFSET UNITYSDK_OFFSET(0x15F437A0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_UPDATESCROLL_OFFSET UNITYSDK_OFFSET(0x15F40FE0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0x15F40E60)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_WARMUP_OFFSET UNITYSDK_OFFSET(0x15F41560)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x15F409E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMultiInteractionTargetListChildWindowController_ScrollView_TypeDefinitionIndex = 84191;

	class UIMultiInteractionTargetListChildWindowController_ScrollView : public ::System::Object
	{
	public:
		// static const ::System::Single _smoothTime; // 0x0
		::System::Collections::Generic::List_1<::MoleMole::UIMultiInteractionTargetListItemWidgetController*>* _ctrls; // 0x10
		::Il2CppArray<::UnityEngine::Vector3>* _viewportWorldCorners; // 0x18
		::Il2CppArray<::UnityEngine::Vector3>* _targetWorldCorners; // 0x20
		::MoleMole::UIMultiInteractionTargetListChildWindowController* _parent; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::UIMultiInteractionTargetListItemWidgetController*>* _tmpCtrls; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::UIMultiInteractionTargetListItemWidgetController_Context*>* _data; // 0x38
		::UnityEngine::RectTransform* _scrollTarget; // 0x40
		::UnityEngine::UI::ScrollRect* _root; // 0x48
		::System::Collections::Generic::Stack_1<::MoleMole::UIMultiInteractionTargetListItemWidgetController*>* _pooled; // 0x50
		::System::Collections::Generic::List_1<::MoleMole::UIMultiInteractionTargetListItemWidgetController*>* _fadeOutCtrls; // 0x58
		::System::Int32 _cleanupTag; // 0x60
		::System::Int32 _allocatedCount; // 0x64
		::System::Single _earliestCleanupTime; // 0x68
		::System::Single ScrollSpeed; // 0x6C
		::System::Int32 _maxAllocateCount; // 0x70
		::System::Single _velocity; // 0x74

		::System::Void _ctor(::UnityEngine::UI::ScrollRect* root, ::MoleMole::UIMultiInteractionTargetListChildWindowController* parent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::ScrollRect*, ::MoleMole::UIMultiInteractionTargetListChildWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW__CTOR_OFFSET))(this, root, parent);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void Warmup(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_WARMUP_OFFSET))(this, count);
		}

		::MoleMole::UIMultiInteractionTargetListItemWidgetController* Allocate()
		{
			return ((::MoleMole::UIMultiInteractionTargetListItemWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_ALLOCATE_OFFSET))(this);
		}

		::System::Void FillPool(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_FILLPOOL_OFFSET))(this, count);
		}

		::System::Void Deallocate(::MoleMole::UIMultiInteractionTargetListItemWidgetController* item)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMultiInteractionTargetListItemWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_DEALLOCATE_OFFSET))(this, item);
		}

		::System::Void DeallocateAllImmediately()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_DEALLOCATEALLIMMEDIATELY_OFFSET))(this);
		}

		::System::Void ClearPooled()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_CLEARPOOLED_OFFSET))(this);
		}

		::System::Void RefreshData(::System::Collections::Generic::List_1<::MoleMole::UIMultiInteractionTargetListItemWidgetController_Context*>* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UIMultiInteractionTargetListItemWidgetController_Context*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_REFRESHDATA_OFFSET))(this, data);
		}

		::MoleMole::UIMultiInteractionTargetListItemWidgetController* GetItemCtrl(::System::Int32 index)
		{
			return ((::MoleMole::UIMultiInteractionTargetListItemWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_GETITEMCTRL_OFFSET))(this, index);
		}

		::MoleMole::UIMultiInteractionTargetListItemWidgetController* FindByInteraction(::Class_2_72BDD67FEA972F1C* instance)
		{
			return ((::MoleMole::UIMultiInteractionTargetListItemWidgetController*(*)(::PVOID, ::Class_2_72BDD67FEA972F1C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_FINDBYINTERACTION_OFFSET))(this, instance);
		}

		::System::Void StartItemFadeIn(::MoleMole::UIMultiInteractionTargetListItemWidgetController* itemCtrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMultiInteractionTargetListItemWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_STARTITEMFADEIN_OFFSET))(this, itemCtrl);
		}

		::System::Void StartItemFadeOut(::MoleMole::UIMultiInteractionTargetListItemWidgetController* itemCtrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMultiInteractionTargetListItemWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_STARTITEMFADEOUT_OFFSET))(this, itemCtrl);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_CLEANUP_OFFSET))(this);
		}

		::System::Void ScrollToTarget(::UnityEngine::RectTransform* target)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_SCROLLTOTARGET_OFFSET))(this, target);
		}

		::System::Void UpdateScroll(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_UPDATESCROLL_OFFSET))(this, deltaTime);
		}

		::System::Single GetVerticalScrollDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_GETVERTICALSCROLLDISTANCE_OFFSET))(this);
		}

		static ::System::Single GetScrollVelocityByNormalizedDistance(::System::Single d)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_SCROLLVIEW_GETSCROLLVELOCITYBYNORMALIZEDDISTANCE_OFFSET))(d);
		}
	};
}
