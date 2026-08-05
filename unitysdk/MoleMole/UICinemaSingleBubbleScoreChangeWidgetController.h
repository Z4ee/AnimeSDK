#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_59EC1B57AEE839C2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEWIDGETCONTROLLER_GETCOMBOIMGBYINT_OFFSET UNITYSDK_OFFSET(0x183D02C0)
#define MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x183D01B0)
#define MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x183D0240)
#define MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x183CFCB0)
#define MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x183CFD10)
#define MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEWIDGETCONTROLLER_SHOWSCORECHANGE_OFFSET UNITYSDK_OFFSET(0x183CFDF0)
#define MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x183D04F0)
#define MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEWIDGETCONTROLLER__SHOWSCORECHANGE_B__5_0_OFFSET UNITYSDK_OFFSET(0x183D05A0)
#define MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x183D05B0)
#define MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x183D0640)
#define MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x183D06D0)
#define MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x183D0760)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaSingleBubbleScoreChangeWidgetController_TypeDefinitionIndex = 69360;

	class UICinemaSingleBubbleScoreChangeWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_59EC1B57AEE839C2* _view; // 0x2C0
		::System::String* _addScoreAnim; // 0x2C8
		::System::String* _minusScoreAnim; // 0x2D0
		::System::String* addScoreImgPath; // 0x2D8
		::System::String* minusScoreImgPath; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ShowScoreChange(::System::Int32 scoreChange)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEWIDGETCONTROLLER_SHOWSCORECHANGE_OFFSET))(this, scoreChange);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetComboImgByInt(::System::Int32 number, ::System::Boolean isAddScore)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEWIDGETCONTROLLER_GETCOMBOIMGBYINT_OFFSET))(this, number, isAddScore);
		}

		::System::Void _ShowScoreChange_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEWIDGETCONTROLLER__SHOWSCORECHANGE_B__5_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEBUBBLESCORECHANGEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
