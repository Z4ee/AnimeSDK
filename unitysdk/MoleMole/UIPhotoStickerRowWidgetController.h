#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_7D073752F6563D6E;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIPhotoStickerRowWidgetController_Data; }
namespace System { class Object; }

#define MOLEMOLE_UIPHOTOSTICKERROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1844ABB0)
#define MOLEMOLE_UIPHOTOSTICKERROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x1844AE30)
#define MOLEMOLE_UIPHOTOSTICKERROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1844AC20)
#define MOLEMOLE_UIPHOTOSTICKERROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1844ACC0)
#define MOLEMOLE_UIPHOTOSTICKERROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1844AD80)
#define MOLEMOLE_UIPHOTOSTICKERROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1844B0D0)
#define MOLEMOLE_UIPHOTOSTICKERROWWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x1844B0E0)
#define MOLEMOLE_UIPHOTOSTICKERROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1844B0F0)
#define MOLEMOLE_UIPHOTOSTICKERROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1844B190)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhotoStickerRowWidgetController_TypeDefinitionIndex = 41651;

	class UIPhotoStickerRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSTICKERROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_7D073752F6563D6E* get__viewModel()
		{
			return ((::Class_2_7D073752F6563D6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSTICKERROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSTICKERROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSTICKERROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSTICKERROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void RefreshView(::MoleMole::UIPhotoStickerRowWidgetController_Data* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIPhotoStickerRowWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSTICKERROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSTICKERROWWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSTICKERROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSTICKERROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
