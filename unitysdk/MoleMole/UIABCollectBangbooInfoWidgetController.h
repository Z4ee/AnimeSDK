#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_79F6D62CE30E3F8E_57;
class Class_2_79F6D62CE30E3F8E_57_Class_2_CC03AAEE6FCC732C_4;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_2_0D31A1661D004892;

#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11E08300)
#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x11E08390)
#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11E083E0)
#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11E08150)
#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11E08290)
#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER_SETBANGBODDIDANDREFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x11E08460)
#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER_TOGGLEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x11E08FF0)
#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x11E09240)
#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11E09160)
#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11E09280)
#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x11E09310)
#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11E09320)
#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11E093B0)
#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11E09440)

namespace MoleMole
{
	inline static constexpr unsigned int UIABCollectBangbooInfoWidgetController_TypeDefinitionIndex = 48609;

	class UIABCollectBangbooInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Int32* StaticGet_PercentShaderParamID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIABCollectBangbooInfoWidgetController_TypeDefinitionIndex)->GetStaticField(0x10CD0);
		}
		::Class_2_79F6D62CE30E3F8E_57* _view; // 0x2B8
		::System::Int32 _bangbooID; // 0x2C0
		::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_79F6D62CE30E3F8E_57_Class_2_CC03AAEE6FCC732C_4*>*>* _attributeWidgetList; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetBangboddIDAndRefreshView(::System::Int32 bangbooID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER_SETBANGBODDIDANDREFRESHVIEW_OFFSET))(this, bangbooID);
		}

		::System::Void ToggleAttribute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER_TOGGLEATTRIBUTE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
