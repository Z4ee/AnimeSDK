#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_205B03D40B9BD873.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_E9529ED64113E4E9;
class Class_2_79F6D62CE30E3F8E_97;
class Class_2_DA3A8DDFF1297CFF;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIVideoWidgetController; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_BINDEVENT_OFFSET UNITYSDK_OFFSET(0x17F74AE0)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_CHECCKSELECT_OFFSET UNITYSDK_OFFSET(0x17F75140)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x17F741C0)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET UNITYSDK_OFFSET(0x17F74260)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17F741B0)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_ONCONFRIMMAN_OFFSET UNITYSDK_OFFSET(0x17F747E0)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_ONCONFRIMWOMAN_OFFSET UNITYSDK_OFFSET(0x17F753E0)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17F741D0)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17F74350)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17F75030)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17F748A0)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17F74270)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_OPENINPUTNAMEVIEW_OFFSET UNITYSDK_OFFSET(0x17F75450)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_PLAYSPLITVIDEO_OFFSET UNITYSDK_OFFSET(0x17F74610)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_RESETCLICKSTATE_OFFSET UNITYSDK_OFFSET(0x17F75540)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_SETCONFIG_OFFSET UNITYSDK_OFFSET(0x17F74850)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_SHOWROLENPCNAME_OFFSET UNITYSDK_OFFSET(0x17F74DD0)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17F755B0)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER__PLAYSPLITVIDEO_B__10_1_OFFSET UNITYSDK_OFFSET(0x17F75700)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER__PLAYSPLITVIDEO_G__ONVIDEOSTART_10_0_OFFSET UNITYSDK_OFFSET(0x17F75660)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17F75770)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17F75800)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17F75810)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17F75820)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17F75830)

namespace MoleMole
{
	inline static constexpr unsigned int UICreateRolePageController_TypeDefinitionIndex = 59859;

	class UICreateRolePageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* VideoBG; // 0x0
		// static const ::System::String* OPEN_FADEIN; // 0x0
		// static const ::System::String* CLOSE_FADEOUT; // 0x0
		// static const ::System::Int32 MAX_VIDEO_COUNT = 0x2; // 0x0
		::Class_2_79F6D62CE30E3F8E_97* _view; // 0x318
		::System::Collections::Generic::List_1<::System::Object*>* options; // 0x320
		::System::Boolean _isInputName; // 0x328
		::System::String* _inputName; // 0x330
		::System::Int32 _curStartVideo; // 0x338
		::MoleMole::UIVideoWidgetController* fullScreen; // 0x340
		::System::Boolean isClickSelect; // 0x348
		::Class_2_DA3A8DDFF1297CFF* _procedureConfig; // 0x350
		::System::Int32 _selectTag; // 0x358
		::System::Int32 _beforeSelect; // 0x35C
		::Class_1_E9529ED64113E4E9* rightVideo; // 0x360
		::Class_1_E9529ED64113E4E9* leftVideo; // 0x368
		::System::String* left_url; // 0x370
		::System::String* right_url; // 0x378

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::Enum_3_205B03D40B9BD873 get_MessageMatchPage()
		{
			return ((::Enum_3_205B03D40B9BD873(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_ONSHOW_OFFSET))(this, openCtrlContext);
		}

		::System::Void PlaySplitVideo(::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_PLAYSPLITVIDEO_OFFSET))(this, url);
		}

		::System::Void SetConfig(::Class_2_DA3A8DDFF1297CFF* config)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_DA3A8DDFF1297CFF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_SETCONFIG_OFFSET))(this, config);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ChecckSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_CHECCKSELECT_OFFSET))(this);
		}

		::System::Void ShowRoleNPCName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_SHOWROLENPCNAME_OFFSET))(this);
		}

		::System::Void OnConfrimMan()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_ONCONFRIMMAN_OFFSET))(this);
		}

		::System::Void OnConfrimWoman()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_ONCONFRIMWOMAN_OFFSET))(this);
		}

		::System::Void OpenInputNameView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_OPENINPUTNAMEVIEW_OFFSET))(this);
		}

		::System::Void BindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_BINDEVENT_OFFSET))(this);
		}

		::System::Void ResetClickState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_RESETCLICKSTATE_OFFSET))(this);
		}

		::System::Void _PlaySplitVideo_g__OnVideoStart_10_0(::Class_1_E9529ED64113E4E9* videoPlayerHelper)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER__PLAYSPLITVIDEO_G__ONVIDEOSTART_10_0_OFFSET))(this, videoPlayerHelper);
		}

		::System::Void _PlaySplitVideo_b__10_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER__PLAYSPLITVIDEO_B__10_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
