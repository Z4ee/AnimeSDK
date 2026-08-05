#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/MoleMole/UIRoarinStoreCollectRowWidgetController_CollectItemData.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_F29BD6791908ECAD;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIROARINSTORECOLLECTROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x151082E0)
#define MOLEMOLE_UIROARINSTORECOLLECTROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15108350)
#define MOLEMOLE_UIROARINSTORECOLLECTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x151083F0)
#define MOLEMOLE_UIROARINSTORECOLLECTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x151085A0)
#define MOLEMOLE_UIROARINSTORECOLLECTROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x151085B0)
#define MOLEMOLE_UIROARINSTORECOLLECTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15108650)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoarinStoreCollectRowWidgetController_TypeDefinitionIndex = 61496;

	class UIRoarinStoreCollectRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::UIRoarinStoreCollectRowWidgetController_CollectItemData>* _itemDatas; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_F29BD6791908ECAD* get__viewModel()
		{
			return ((::Class_2_F29BD6791908ECAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
