#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Share/EPropertyType.h"

class Class_1_C5FDB00B12827EE9;
class Class_1_EEA0111A28582B57;
class Class_2_1824EF69C8E376A3;
class Class_2_208CC9941471731A_281;
class Class_2_702D914FA95B6E36;
class Class_2_79F6D62CE30E3F8E_24;
class Class_2_9D9172C07F82DDAE;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralConversionTipsPopWindowContext; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace MoleMole { class UIRoleDevelopPopWindowController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER_GETAVATARID_OFFSET UNITYSDK_OFFSET(0x12FFED50)
#define MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER_GETBTN1TEXT_OFFSET UNITYSDK_OFFSET(0x12FFF180)
#define MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER_GETCONSUMEITEMID_OFFSET UNITYSDK_OFFSET(0x13000E30)
#define MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER_GETEXTRAPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x13000C10)
#define MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x12FFDA20)
#define MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER_ONAVATARBREAKTHROUGH_OFFSET UNITYSDK_OFFSET(0x12FFF280)
#define MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER_ONBREAKANIMATIONFINISH_OFFSET UNITYSDK_OFFSET(0x12FFF570)
#define MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER_ONCLICKBTN1_OFFSET UNITYSDK_OFFSET(0x12FFEDC0)
#define MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER_ONITEMCHANGEHANDLE_OFFSET UNITYSDK_OFFSET(0x12FFEB10)
#define MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x12FFDF10)
#define MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12FFF640)
#define MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12FFDE00)
#define MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x12FFE0E0)
#define MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER_SETCONSUME_OFFSET UNITYSDK_OFFSET(0x12FFF860)
#define MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER_SETMAXSTAR_OFFSET UNITYSDK_OFFSET(0x13000A90)
#define MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER_SETPARENTVIEW_OFFSET UNITYSDK_OFFSET(0x12FFD970)
#define MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13000E80)
#define MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER__ONBREAKANIMATIONFINISH_B__33_0_OFFSET UNITYSDK_OFFSET(0x13000FF0)
#define MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER__ONCLICKBTN1_B__30_0_OFFSET UNITYSDK_OFFSET(0x13000FC0)
#define MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER__SETCONSUME_B__35_0_OFFSET UNITYSDK_OFFSET(0x130010B0)
#define MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x130010D0)
#define MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13001170)
#define MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13001200)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleBreakThroughController_TypeDefinitionIndex = 55405;

	class UIRoleBreakThroughController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnWidgetController*>* _expMatItems; // 0x2C0
		::Class_2_9D9172C07F82DDAE* _itemModel; // 0x2C8
		::Class_2_702D914FA95B6E36* _roleModel; // 0x2D0
		::MoleMole::UIRoleDevelopPopWindowController* _mainController; // 0x2D8
		::Class_2_79F6D62CE30E3F8E_24* _view; // 0x2E0
		::Class_2_1824EF69C8E376A3* _avatarData; // 0x2E8
		::System::Collections::Generic::List_1<::Class_1_C5FDB00B12827EE9*>* _curPropertyItemViews; // 0x2F0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _popertyValueCache; // 0x2F8
		::System::Boolean needNotifyParent; // 0x300
		::System::Boolean isbreaking; // 0x301
		::System::Int32 _consumeItemID; // 0x304
		::System::Int32 firstUnenoughID; // 0x308
		::System::Boolean isJumpToCompose; // 0x30C
		::System::Int32 jumpToItemID; // 0x310
		::System::Int32 jumpTabIndex; // 0x314
		::System::Int32 composeNeedCount; // 0x318
		::System::Boolean isSuggestUseMaterialConversion; // 0x31C
		::MoleMole::UIGeneralConversionTipsPopWindowContext* conversionContext; // 0x320
		::System::Boolean isSuggestUseMaterialConversionAndAdaptive; // 0x328
		::System::Boolean isSuggestUseAdaptiveMaterial; // 0x329
		::System::Boolean isUseAdaptiveMaterial; // 0x32A
		::System::Int32 useAdaptiveItemID; // 0x32C
		::System::Int32 useAdaptiveItemCount; // 0x330
		::Foundation::Coroutine::CoroutineHandle okBtnDisableHandle; // 0x334

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void SetParentView(::Class_1_EEA0111A28582B57* view)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EEA0111A28582B57*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER_SETPARENTVIEW_OFFSET))(this, view);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnItemChangeHandle(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER_ONITEMCHANGEHANDLE_OFFSET))(this, args);
		}

		::System::UInt32 GetAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER_GETAVATARID_OFFSET))(this);
		}

		::System::Void OnClickBtn1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER_ONCLICKBTN1_OFFSET))(this);
		}

		::System::String* GetBtn1Text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER_GETBTN1TEXT_OFFSET))(this);
		}

		::System::Void OnAvatarBreakThrough(::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER_ONAVATARBREAKTHROUGH_OFFSET))(this, eventArgs);
		}

		::System::Void OnBreakAnimationFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER_ONBREAKANIMATIONFINISH_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetConsume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER_SETCONSUME_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Single starlimitDelay, ::System::Boolean willClose)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER_REFRESHVIEW_OFFSET))(this, starlimitDelay, willClose);
		}

		::System::Void SetMaxStar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER_SETMAXSTAR_OFFSET))(this);
		}

		::System::Int32 GetConsumeItemID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER_GETCONSUMEITEMID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Share::EPropertyType>* GetExtraPropertyType(::Class_2_208CC9941471731A_281* template_)
		{
			return ((::System::Collections::Generic::List_1<::Share::EPropertyType>*(*)(::PVOID, ::Class_2_208CC9941471731A_281*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER_GETEXTRAPROPERTYTYPE_OFFSET))(this, template_);
		}

		::System::Void _OnClickBtn1_b__30_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER__ONCLICKBTN1_B__30_0_OFFSET))(this);
		}

		::System::Void _OnBreakAnimationFinish_b__33_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER__ONBREAKANIMATIONFINISH_B__33_0_OFFSET))(this);
		}

		::System::Void _SetConsume_b__35_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER__SETCONSUME_B__35_0_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEBREAKTHROUGHCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
