#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_12D28F3D08F5B8EA;
class Class_2_FAE450D7FA44A587;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIBOSSBATTLEDATATABROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18D28C60)
#define MOLEMOLE_UIBOSSBATTLEDATATABROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18D28CD0)
#define MOLEMOLE_UIBOSSBATTLEDATATABROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x18D29030)
#define MOLEMOLE_UIBOSSBATTLEDATATABROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18D28D70)
#define MOLEMOLE_UIBOSSBATTLEDATATABROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x18D28E30)
#define MOLEMOLE_UIBOSSBATTLEDATATABROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18D29120)
#define MOLEMOLE_UIBOSSBATTLEDATATABROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18D29130)
#define MOLEMOLE_UIBOSSBATTLEDATATABROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x18D291D0)
#define MOLEMOLE_UIBOSSBATTLEDATATABROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18D29260)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossBattleDataTabRowWidgetController_TypeDefinitionIndex = 58903;

	class UIBossBattleDataTabRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSBATTLEDATATABROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_FAE450D7FA44A587* get__viewModel()
		{
			return ((::Class_2_FAE450D7FA44A587*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSBATTLEDATATABROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSBATTLEDATATABROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSBATTLEDATATABROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView(::Class_1_12D28F3D08F5B8EA* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_12D28F3D08F5B8EA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSBATTLEDATATABROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSBATTLEDATATABROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSBATTLEDATATABROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSBATTLEDATATABROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSBATTLEDATATABROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
