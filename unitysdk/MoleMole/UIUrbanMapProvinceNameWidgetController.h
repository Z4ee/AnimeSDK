#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UITwoDMapElement_UIController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_4F0B31A717D6C556;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIURBANMAPPROVINCENAMEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1157CA10)
#define MOLEMOLE_UIURBANMAPPROVINCENAMEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1157CA80)
#define MOLEMOLE_UIURBANMAPPROVINCENAMEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1157CB40)
#define MOLEMOLE_UIURBANMAPPROVINCENAMEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1157CD30)
#define MOLEMOLE_UIURBANMAPPROVINCENAMEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1157CD90)
#define MOLEMOLE_UIURBANMAPPROVINCENAMEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1157CE30)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapProvinceNameWidgetController_TypeDefinitionIndex = 87449;

	class UIUrbanMapProvinceNameWidgetController : public ::MoleMole::UITwoDMapElement_UIController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPROVINCENAMEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_4F0B31A717D6C556* get__viewModel()
		{
			return ((::Class_2_4F0B31A717D6C556*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPROVINCENAMEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPROVINCENAMEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPROVINCENAMEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPROVINCENAMEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPROVINCENAMEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
