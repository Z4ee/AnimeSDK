#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_C3CCFC6EABA3B5B8;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UILIVEHOUSEINGAMEPERFECTEFFECTWIDGETCONTROLLER_GET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x17449C80)
#define MOLEMOLE_UILIVEHOUSEINGAMEPERFECTEFFECTWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17449CA0)
#define MOLEMOLE_UILIVEHOUSEINGAMEPERFECTEFFECTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17449D10)
#define MOLEMOLE_UILIVEHOUSEINGAMEPERFECTEFFECTWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17449DB0)
#define MOLEMOLE_UILIVEHOUSEINGAMEPERFECTEFFECTWIDGETCONTROLLER_SET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x17449C90)
#define MOLEMOLE_UILIVEHOUSEINGAMEPERFECTEFFECTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17449F70)
#define MOLEMOLE_UILIVEHOUSEINGAMEPERFECTEFFECTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17449FD0)
#define MOLEMOLE_UILIVEHOUSEINGAMEPERFECTEFFECTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1744A070)

namespace MoleMole
{
	inline static constexpr unsigned int UILiveHouseInGamePerfectEffectWidgetController_TypeDefinitionIndex = 72747;

	class UILiveHouseInGamePerfectEffectWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Boolean _NeedCache_k__BackingField; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEINGAMEPERFECTEFFECTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_NeedCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEINGAMEPERFECTEFFECTWIDGETCONTROLLER_GET_NEEDCACHE_OFFSET))(this);
		}

		::System::Void set_NeedCache(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEINGAMEPERFECTEFFECTWIDGETCONTROLLER_SET_NEEDCACHE_OFFSET))(this, value);
		}

		::Class_2_C3CCFC6EABA3B5B8* get__viewModel()
		{
			return ((::Class_2_C3CCFC6EABA3B5B8*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEINGAMEPERFECTEFFECTWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEINGAMEPERFECTEFFECTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEINGAMEPERFECTEFFECTWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEINGAMEPERFECTEFFECTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEINGAMEPERFECTEFFECTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
