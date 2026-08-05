#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_763B2CEEEF84976D;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIHouseRhythmRewardGetRowWidgetController_Data; }
namespace System { class Object; }

#define MOLEMOLE_UIHOUSERHYTHMREWARDGETROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19622A80)
#define MOLEMOLE_UIHOUSERHYTHMREWARDGETROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19622AF0)
#define MOLEMOLE_UIHOUSERHYTHMREWARDGETROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19622B90)
#define MOLEMOLE_UIHOUSERHYTHMREWARDGETROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x19622C50)
#define MOLEMOLE_UIHOUSERHYTHMREWARDGETROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19622DD0)
#define MOLEMOLE_UIHOUSERHYTHMREWARDGETROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19622DE0)
#define MOLEMOLE_UIHOUSERHYTHMREWARDGETROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19622E80)

namespace MoleMole
{
	inline static constexpr unsigned int UIHouseRhythmRewardGetRowWidgetController_TypeDefinitionIndex = 66898;

	class UIHouseRhythmRewardGetRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDGETROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_763B2CEEEF84976D* get__viewModel()
		{
			return ((::Class_2_763B2CEEEF84976D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDGETROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDGETROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDGETROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView(::MoleMole::UIHouseRhythmRewardGetRowWidgetController_Data* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHouseRhythmRewardGetRowWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDGETROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDGETROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMREWARDGETROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
