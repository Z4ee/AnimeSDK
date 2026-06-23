#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0277FE49450CA4D5.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIBaseController_FadeFlag.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_DCAE8F26C462318B;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER_GET_IGNOREFADING_OFFSET UNITYSDK_OFFSET(0x1789B080)
#define MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER_GET_ISALLOWINPUTPASS_OFFSET UNITYSDK_OFFSET(0x1789B090)
#define MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER_GET_UICURSORHIDESTATE_OFFSET UNITYSDK_OFFSET(0x1789B0A0)
#define MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1789B000)
#define MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1789B010)
#define MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1789B0B0)
#define MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER_ONFADEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x1789B380)
#define MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1789B150)
#define MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER_PLAYEXPTHENCLOSE_OFFSET UNITYSDK_OFFSET(0x1789B470)
#define MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1789B4F0)
#define MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1789B500)
#define MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER___BASE_ONFADEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x1789B5A0)
#define MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1789B5B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABExpTopTipsPopWindowController_TypeDefinitionIndex = 68487;

	class UIRABExpTopTipsPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Boolean _expAnimStarted; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_DCAE8F26C462318B* get__viewModel()
		{
			return ((::Class_2_DCAE8F26C462318B*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Boolean get_IgnoreFading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER_GET_IGNOREFADING_OFFSET))(this);
		}

		::System::Boolean get_IsAllowInputPass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER_GET_ISALLOWINPUTPASS_OFFSET))(this);
		}

		::Enum_3_0277FE49450CA4D5 get_UICursorHideState()
		{
			return ((::Enum_3_0277FE49450CA4D5(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER_GET_UICURSORHIDESTATE_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnFadePlayFinish(::MoleMole::UIBaseController_FadeFlag flag, ::System::String* animName)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController_FadeFlag, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER_ONFADEPLAYFINISH_OFFSET))(this, flag, animName);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* PlayExpThenClose()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER_PLAYEXPTHENCLOSE_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnFadePlayFinish(::MoleMole::UIBaseController_FadeFlag P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController_FadeFlag, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER___BASE_ONFADEPLAYFINISH_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
