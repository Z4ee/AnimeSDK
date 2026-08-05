#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_8E088A3CC37917F9;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UINEOGOLDENMECHASKILLWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x151701E0)
#define MOLEMOLE_UINEOGOLDENMECHASKILLWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x151702B0)
#define MOLEMOLE_UINEOGOLDENMECHASKILLWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x151704A0)
#define MOLEMOLE_UINEOGOLDENMECHASKILLWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15170370)
#define MOLEMOLE_UINEOGOLDENMECHASKILLWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15170250)
#define MOLEMOLE_UINEOGOLDENMECHASKILLWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15170590)
#define MOLEMOLE_UINEOGOLDENMECHASKILLWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x151705A0)
#define MOLEMOLE_UINEOGOLDENMECHASKILLWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x15170640)
#define MOLEMOLE_UINEOGOLDENMECHASKILLWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x151706D0)
#define MOLEMOLE_UINEOGOLDENMECHASKILLWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15170770)

namespace MoleMole
{
	inline static constexpr unsigned int UINeoGoldenMechaSkillWidgetController_TypeDefinitionIndex = 91015;

	class UINeoGoldenMechaSkillWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHASKILLWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_8E088A3CC37917F9* get__viewModel()
		{
			return ((::Class_2_8E088A3CC37917F9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHASKILLWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHASKILLWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHASKILLWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHASKILLWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHASKILLWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHASKILLWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHASKILLWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHASKILLWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHASKILLWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
