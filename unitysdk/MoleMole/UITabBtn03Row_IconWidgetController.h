#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_504F298B4B2B1EEF.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Share/ENotificationBadgeType.h"

class Class_2_EC73135AD9EBC18B;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER_GETVIEW_OFFSET UNITYSDK_OFFSET(0x160FE5D0)
#define MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x160FDB40)
#define MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER_ONITEMRESELECT_OFFSET UNITYSDK_OFFSET(0x160FDCE0)
#define MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x160FDC50)
#define MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x160FDDE0)
#define MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x160FDBD0)
#define MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x160FD9F0)
#define MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER_SETICONANDTEXT_OFFSET UNITYSDK_OFFSET(0x160FE170)
#define MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER_SETREDPOINT_OFFSET UNITYSDK_OFFSET(0x160FE380)
#define MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x160FE620)
#define MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x160FE630)
#define MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER___BASE_ONITEMRESELECT_OFFSET UNITYSDK_OFFSET(0x160FE6C0)
#define MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x160FE750)
#define MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x160FE7E0)
#define MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x160FE880)
#define MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x160FE910)

namespace MoleMole
{
	inline static constexpr unsigned int UITabBtn03Row_IconWidgetController_TypeDefinitionIndex = 73304;

	class UITabBtn03Row_IconWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_EC73135AD9EBC18B* _view; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnItemReselect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER_ONITEMRESELECT_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetIconAndText(::System::String* titleText, ::Foundation::AssetPath iconPath, ::Enum_3_504F298B4B2B1EEF iconType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::AssetPath, ::Enum_3_504F298B4B2B1EEF))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER_SETICONANDTEXT_OFFSET))(this, titleText, iconPath, iconType);
		}

		::Class_2_EC73135AD9EBC18B* GetView()
		{
			return ((::Class_2_EC73135AD9EBC18B*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER_GETVIEW_OFFSET))(this);
		}

		::System::Void SetRedPoint(::Share::ENotificationBadgeType type, ::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER_SETREDPOINT_OFFSET))(this, type, id);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemReselect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER___BASE_ONITEMRESELECT_OFFSET))(this);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
