#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_6C8EF1DE8BD104F1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_URBANMAPRIGHTBANGKOVCONTROLLER_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x13B3EC40)
#define MOLEMOLE_URBANMAPRIGHTBANGKOVCONTROLLER_GET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x13B3E600)
#define MOLEMOLE_URBANMAPRIGHTBANGKOVCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x13B3E610)
#define MOLEMOLE_URBANMAPRIGHTBANGKOVCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x13B3E680)
#define MOLEMOLE_URBANMAPRIGHTBANGKOVCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x13B3EB30)
#define MOLEMOLE_URBANMAPRIGHTBANGKOVCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x13B3ED00)
#define MOLEMOLE_URBANMAPRIGHTBANGKOVCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x13B3E750)
#define MOLEMOLE_URBANMAPRIGHTBANGKOVCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x13B3EAD0)
#define MOLEMOLE_URBANMAPRIGHTBANGKOVCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13B3EDE0)
#define MOLEMOLE_URBANMAPRIGHTBANGKOVCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x13B3EE40)
#define MOLEMOLE_URBANMAPRIGHTBANGKOVCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x13B3EEE0)
#define MOLEMOLE_URBANMAPRIGHTBANGKOVCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x13B3EF70)
#define MOLEMOLE_URBANMAPRIGHTBANGKOVCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x13B3F000)
#define MOLEMOLE_URBANMAPRIGHTBANGKOVCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x13B3F0A0)

namespace MoleMole
{
	inline static constexpr unsigned int UrbanMapRightBangkovController_TypeDefinitionIndex = 69352;

	class UrbanMapRightBangkovController : public ::MoleMole::UIWidgetController
	{
	public:
		::Struct_2_575273D27F02957E _binderInfo; // 0x2B8
		::MoleMole::UIControlReference* _controlReference; // 0x2C8
		::System::Single _originSize; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTBANGKOVCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_NeedCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTBANGKOVCONTROLLER_GET_NEEDCACHE_OFFSET))(this);
		}

		::Class_2_6C8EF1DE8BD104F1* get__viewModel()
		{
			return ((::Class_2_6C8EF1DE8BD104F1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTBANGKOVCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTBANGKOVCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTBANGKOVCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTBANGKOVCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTBANGKOVCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Boolean get_Active()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTBANGKOVCONTROLLER_GET_ACTIVE_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTBANGKOVCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTBANGKOVCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTBANGKOVCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTBANGKOVCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTBANGKOVCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTBANGKOVCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}
	};
}
