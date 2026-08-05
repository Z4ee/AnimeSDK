#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_79F6D62CE30E3F8E_171;
class Class_2_79F6D62CE30E3F8E_171_Class_2_CC03AAEE6FCC732C_31;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_2_0D31A1661D004892;

#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11D80FC0)
#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x11D81050)
#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11D810A0)
#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11D80E10)
#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11D80F50)
#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER_SETBANGBODDIDANDREFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x11D81120)
#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER_TOGGLEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x11D81E10)
#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x11D82060)
#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11D81F80)
#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11D820A0)
#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x11D82130)
#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11D82140)
#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11D821D0)
#define MOLEMOLE_UIABCOLLECTBANGBOOINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11D82260)

namespace MoleMole
{
	inline static constexpr unsigned int UIABCollectBangbooInfoWidgetController_TypeDefinitionIndex = 73293;

	class UIABCollectBangbooInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Int32* StaticGet_PercentShaderParamID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIABCollectBangbooInfoWidgetController_TypeDefinitionIndex)->GetStaticField(0x125F0);
		}
		::Class_2_79F6D62CE30E3F8E_171* _view; // 0x2C0
		::System::Int32 _bangbooID; // 0x2C8
		::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_79F6D62CE30E3F8E_171_Class_2_CC03AAEE6FCC732C_31*>*>* _attributeWidgetList; // 0x2D0

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
