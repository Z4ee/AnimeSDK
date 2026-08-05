#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_A15E6A28FA06A960;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UISummerTideTreasureSellingLevelDetailItemRowWidgetController_Data; }
namespace System { class Object; }

#define MOLEMOLE_UISUMMERTIDETREASURESELLINGLEVELDETAILITEMROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x13037510)
#define MOLEMOLE_UISUMMERTIDETREASURESELLINGLEVELDETAILITEMROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x13037580)
#define MOLEMOLE_UISUMMERTIDETREASURESELLINGLEVELDETAILITEMROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x13037620)
#define MOLEMOLE_UISUMMERTIDETREASURESELLINGLEVELDETAILITEMROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x130376E0)
#define MOLEMOLE_UISUMMERTIDETREASURESELLINGLEVELDETAILITEMROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13037860)
#define MOLEMOLE_UISUMMERTIDETREASURESELLINGLEVELDETAILITEMROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x13037870)
#define MOLEMOLE_UISUMMERTIDETREASURESELLINGLEVELDETAILITEMROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x13037910)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureSellingLevelDetailItemRowWidgetController_TypeDefinitionIndex = 69508;

	class UISummerTideTreasureSellingLevelDetailItemRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGLEVELDETAILITEMROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_A15E6A28FA06A960* get__viewModel()
		{
			return ((::Class_2_A15E6A28FA06A960*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGLEVELDETAILITEMROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGLEVELDETAILITEMROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGLEVELDETAILITEMROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView(::MoleMole::UISummerTideTreasureSellingLevelDetailItemRowWidgetController_Data* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UISummerTideTreasureSellingLevelDetailItemRowWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGLEVELDETAILITEMROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGLEVELDETAILITEMROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGLEVELDETAILITEMROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
