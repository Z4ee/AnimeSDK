#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_1824EF69C8E376A3;
class Class_3_1CFE5DEC9121201D;
class MonoUITableScrollV2;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIAVATARSPECIALAWAKENPAGECONTROLLER_CREATEBTNROW_OFFSET UNITYSDK_OFFSET(0x15AB2FF0)
#define MOLEMOLE_UIAVATARSPECIALAWAKENPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15AB2C10)
#define MOLEMOLE_UIAVATARSPECIALAWAKENPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15AB2C20)
#define MOLEMOLE_UIAVATARSPECIALAWAKENPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15AB2C90)
#define MOLEMOLE_UIAVATARSPECIALAWAKENPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15AB30B0)
#define MOLEMOLE_UIAVATARSPECIALAWAKENPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15AB2D50)
#define MOLEMOLE_UIAVATARSPECIALAWAKENPAGECONTROLLER_RESETSHOWCONTEXT_OFFSET UNITYSDK_OFFSET(0x15AB2F20)
#define MOLEMOLE_UIAVATARSPECIALAWAKENPAGECONTROLLER_SETSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x15AB2DA0)
#define MOLEMOLE_UIAVATARSPECIALAWAKENPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15AB3400)
#define MOLEMOLE_UIAVATARSPECIALAWAKENPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15AB3410)
#define MOLEMOLE_UIAVATARSPECIALAWAKENPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15AB34B0)
#define MOLEMOLE_UIAVATARSPECIALAWAKENPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15AB34C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarSpecialAwakenPageController_TypeDefinitionIndex = 79493;

	class UIAvatarSpecialAwakenPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_1824EF69C8E376A3* m_avatarItemData; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_3_1CFE5DEC9121201D* get__viewModel()
		{
			return ((::Class_3_1CFE5DEC9121201D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void SetScrollView(::MonoUITableScrollV2* scrollV2)
		{
			return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENPAGECONTROLLER_SETSCROLLVIEW_OFFSET))(this, scrollV2);
		}

		::System::Void ReSetShowContext(::Class_2_1824EF69C8E376A3* avatarData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1824EF69C8E376A3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENPAGECONTROLLER_RESETSHOWCONTEXT_OFFSET))(this, avatarData);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateBtnRow(::Struct_2_575273D27F02957E binderInfo)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::Struct_2_575273D27F02957E))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENPAGECONTROLLER_CREATEBTNROW_OFFSET))(this, binderInfo);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
