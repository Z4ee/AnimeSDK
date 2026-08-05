#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_5ACC3F2B5BB1B49F;
namespace MoleMole { class UIAvatarSkinSetSingleWidgetController_Data; }
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIAVATARSKINSETSINGLEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1708ED10)
#define MOLEMOLE_UIAVATARSKINSETSINGLEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1708ED80)
#define MOLEMOLE_UIAVATARSKINSETSINGLEWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x1708EF90)
#define MOLEMOLE_UIAVATARSKINSETSINGLEWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1708EE20)
#define MOLEMOLE_UIAVATARSKINSETSINGLEWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1708EEE0)
#define MOLEMOLE_UIAVATARSKINSETSINGLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1708F080)
#define MOLEMOLE_UIAVATARSKINSETSINGLEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1708F090)
#define MOLEMOLE_UIAVATARSKINSETSINGLEWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x1708F130)
#define MOLEMOLE_UIAVATARSKINSETSINGLEWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1708F1C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarSkinSetSingleWidgetController_TypeDefinitionIndex = 57188;

	class UIAvatarSkinSetSingleWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSKINSETSINGLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_5ACC3F2B5BB1B49F* get__viewModel()
		{
			return ((::Class_2_5ACC3F2B5BB1B49F*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSKINSETSINGLEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSKINSETSINGLEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSKINSETSINGLEWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView(::System::Int32 index, ::MoleMole::UIAvatarSkinSetSingleWidgetController_Data* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::UIAvatarSkinSetSingleWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSKINSETSINGLEWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, index, data);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSKINSETSINGLEWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSKINSETSINGLEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSKINSETSINGLEWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSKINSETSINGLEWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
