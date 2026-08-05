#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_9EDE5D0623B668B8;
class Class_1_B1CC8F53861C28C2;
class Class_2_1A39E1B51756BF41;
class Class_2_79AE422BA06F6D26_259;
class Class_3_5B0D01C92C1E671E_9;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIFriendChatCommonInfoUIWidgetController; }
namespace MoleMole { class UIFriendChatCommonTopUIWidgetController; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER_GETDUNGEONMAPNAME_OFFSET UNITYSDK_OFFSET(0x18036560)
#define MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER_GETSENDERNAME_OFFSET UNITYSDK_OFFSET(0x180362B0)
#define MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x180355A0)
#define MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18035390)
#define MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x180354A0)
#define MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18035420)
#define MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18035230)
#define MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER_ONUPDATECHATMESSAGEROW_OFFSET UNITYSDK_OFFSET(0x18036170)
#define MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER_RESETUIVIEW_OFFSET UNITYSDK_OFFSET(0x180359D0)
#define MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER_SETUPSHARECONTENT_OFFSET UNITYSDK_OFFSET(0x18035AF0)
#define MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18036780)
#define MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18036790)
#define MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18036820)
#define MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x180368C0)
#define MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18036950)

namespace MoleMole
{
	inline static constexpr unsigned int UIChatShareInterknotWidgetController_TypeDefinitionIndex = 76663;

	class UIChatShareInterknotWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_259* _view; // 0x2F0
		::MoleMole::UIFriendChatCommonInfoUIWidgetController* _commonInfoWidget; // 0x2F8
		::MoleMole::UIFriendChatCommonTopUIWidgetController* _commonTopWidget; // 0x300
		::Class_1_9EDE5D0623B668B8* _item; // 0x308
		::Class_1_B1CC8F53861C28C2* _data; // 0x310
		::System::Boolean _isSenderUser; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void ResetUIView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER_RESETUIVIEW_OFFSET))(this);
		}

		::System::Void OnUpdateChatMessageRow(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER_ONUPDATECHATMESSAGEROW_OFFSET))(this, args);
		}

		::System::Void SetupShareContent(::Class_2_1A39E1B51756BF41* image, ::Class_2_1A39E1B51756BF41* timeOut, ::UnityEngine::UI::Extension::UILocalizationText* coinNum, ::UnityEngine::UI::Extension::UILocalizationText* resultTitle, ::UnityEngine::UI::Extension::UILocalizationText* name, ::UnityEngine::UI::Extension::UILocalizationText* mission, ::Class_3_5B0D01C92C1E671E_9* zenkov)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::Class_2_1A39E1B51756BF41*, ::UnityEngine::UI::Extension::UILocalizationText*, ::UnityEngine::UI::Extension::UILocalizationText*, ::UnityEngine::UI::Extension::UILocalizationText*, ::UnityEngine::UI::Extension::UILocalizationText*, ::Class_3_5B0D01C92C1E671E_9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER_SETUPSHARECONTENT_OFFSET))(this, image, timeOut, coinNum, resultTitle, name, mission, zenkov);
		}

		::System::String* GetSenderName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER_GETSENDERNAME_OFFSET))(this);
		}

		::System::String* GetDungeonMapName(::System::UInt32 dungeonId)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER_GETDUNGEONMAPNAME_OFFSET))(this, dungeonId);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATSHAREINTERKNOTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
