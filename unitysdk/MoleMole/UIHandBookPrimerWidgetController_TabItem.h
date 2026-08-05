#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_504F298B4B2B1EEF.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_208CC9941471731A_917;
class MonoUITableScrollV2;
namespace MoleMole { class UIBaseController; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_TABITEM_GET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0x18ED60B0)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_TABITEM_GET_CREATEWIDGET_OFFSET UNITYSDK_OFFSET(0x18ED6230)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_TABITEM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x18ED6040)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_TABITEM_GET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0x18ED6080)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_TABITEM_GET_REDDOTINFO_OFFSET UNITYSDK_OFFSET(0x18ED6090)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_TABITEM_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x18ED5FA0)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_TABITEM_SET_CREATEWIDGET_OFFSET UNITYSDK_OFFSET(0x18ED6240)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_TABITEM_SET_REDDOTINFO_OFFSET UNITYSDK_OFFSET(0x18ED60A0)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_TABITEM_SHOWTAB_OFFSET UNITYSDK_OFFSET(0x18ED6250)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_TABITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x18ED6770)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookPrimerWidgetController_TabItem_TypeDefinitionIndex = 40903;

	class UIHandBookPrimerWidgetController_TabItem : public ::System::Object
	{
	public:
		::Il2CppArray<::MonoUITableScrollV2*>* _cachedScrolls; // 0x10
		::System::Func_1<::MoleMole::UIBaseController*>* _CreateWidget_k__BackingField; // 0x18
		::Class_2_208CC9941471731A_917* entryTemplate; // 0x20
		::MoleMole::UIBaseController* _controller; // 0x28
		::System::Boolean _isFirstShow; // 0x30
		::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::UInt32> _RedDotInfo_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_TABITEM__CTOR_OFFSET))(this);
		}

		::System::String* get_Title()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_TABITEM_GET_TITLE_OFFSET))(this);
		}

		::Foundation::AssetPath get_IconPath()
		{
			return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_TABITEM_GET_ICONPATH_OFFSET))(this);
		}

		::Enum_3_504F298B4B2B1EEF get_IconType()
		{
			return ((::Enum_3_504F298B4B2B1EEF(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_TABITEM_GET_ICONTYPE_OFFSET))(this);
		}

		::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::UInt32> get_RedDotInfo()
		{
			return ((::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_TABITEM_GET_REDDOTINFO_OFFSET))(this);
		}

		::System::Void set_RedDotInfo(::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::UInt32> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::UInt32>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_TABITEM_SET_REDDOTINFO_OFFSET))(this, value);
		}

		::MoleMole::UIBaseController* get_Controller()
		{
			return ((::MoleMole::UIBaseController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_TABITEM_GET_CONTROLLER_OFFSET))(this);
		}

		::System::Func_1<::MoleMole::UIBaseController*>* get_CreateWidget()
		{
			return ((::System::Func_1<::MoleMole::UIBaseController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_TABITEM_GET_CREATEWIDGET_OFFSET))(this);
		}

		::System::Void set_CreateWidget(::System::Func_1<::MoleMole::UIBaseController*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::MoleMole::UIBaseController*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_TABITEM_SET_CREATEWIDGET_OFFSET))(this, value);
		}

		::System::Void ShowTab(::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_TABITEM_SHOWTAB_OFFSET))(this, isInit);
		}
	};
}
