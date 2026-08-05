#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_9FF4AF4C7538EF63;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIPHOTOSTICKERCONTROLPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17E15D00)
#define MOLEMOLE_UIPHOTOSTICKERCONTROLPOPWINDOWCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17E15D10)
#define MOLEMOLE_UIPHOTOSTICKERCONTROLPOPWINDOWCONTROLLER_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x17E160E0)
#define MOLEMOLE_UIPHOTOSTICKERCONTROLPOPWINDOWCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17E15D80)
#define MOLEMOLE_UIPHOTOSTICKERCONTROLPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x17E15FE0)
#define MOLEMOLE_UIPHOTOSTICKERCONTROLPOPWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17E15E20)
#define MOLEMOLE_UIPHOTOSTICKERCONTROLPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17E161B0)
#define MOLEMOLE_UIPHOTOSTICKERCONTROLPOPWINDOWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17E161C0)
#define MOLEMOLE_UIPHOTOSTICKERCONTROLPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x17E16260)
#define MOLEMOLE_UIPHOTOSTICKERCONTROLPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17E16290)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhotoStickerControlPopWindowController_TypeDefinitionIndex = 81083;

	class UIPhotoStickerControlPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSTICKERCONTROLPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSTICKERCONTROLPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_9FF4AF4C7538EF63* get__viewModel()
		{
			return ((::Class_2_9FF4AF4C7538EF63*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSTICKERCONTROLPOPWINDOWCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSTICKERCONTROLPOPWINDOWCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSTICKERCONTROLPOPWINDOWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSTICKERCONTROLPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnApplicationFocus(::System::Boolean hasFocus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSTICKERCONTROLPOPWINDOWCONTROLLER_ONAPPLICATIONFOCUS_OFFSET))(this, hasFocus);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSTICKERCONTROLPOPWINDOWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSTICKERCONTROLPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOSTICKERCONTROLPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
