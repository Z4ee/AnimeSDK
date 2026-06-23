#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_9EDE5D0623B668B8;
class Class_1_B1CC8F53861C28C2;
class Class_2_292898978640E62C_1;
class Class_2_292898978640E62C_1_Class_2_F03B0164AF5E38A9;
class Class_2_2F3C7D4EFC74D485;
class Class_3_8B38DDDE25B29A1E;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIFriendChatCommonInfoUIWidgetController; }
namespace MoleMole { class UIFriendChatCommonTopUIWidgetController; }
namespace System { class EventArgs; }
namespace System { class Object; }

#define MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER_INITSHAREPLAYERTEAMUIVIEW_OFFSET UNITYSDK_OFFSET(0x15B94760)
#define MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER_INITSHARESELFPLAYERTEAMUIVIEW_OFFSET UNITYSDK_OFFSET(0x15B94700)
#define MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x15B941B0)
#define MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15B93FA0)
#define MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15B940B0)
#define MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15B94030)
#define MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15B93D10)
#define MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER_ONUPDATECHATMESSAGEROW_OFFSET UNITYSDK_OFFSET(0x15B94520)
#define MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER_RESETSPECIALUI_OFFSET UNITYSDK_OFFSET(0x15B94670)
#define MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER_RESETUIVIEW_OFFSET UNITYSDK_OFFSET(0x15B945B0)
#define MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER_SETUPTEAMUIWITHCONTENT_OFFSET UNITYSDK_OFFSET(0x15B947C0)
#define MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15B950E0)
#define MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15B950F0)
#define MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15B95180)
#define MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15B95220)
#define MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15B952B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatTeamWidgetController_TypeDefinitionIndex = 58162;

	class UIFriendChatTeamWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		// static const ::System::Int32 MAX_TEAM_MEMBER_NUM = 0x3; // 0x0
		// static const ::System::Int32 TEAM_BANGBOO_SLOT_IDX = 0x3; // 0x0
		::Class_2_292898978640E62C_1* _view; // 0x2F0
		::MoleMole::UIFriendChatCommonInfoUIWidgetController* _commonInfoWidget; // 0x2F8
		::MoleMole::UIFriendChatCommonTopUIWidgetController* _commonTopWidget; // 0x300
		::Class_2_292898978640E62C_1_Class_2_F03B0164AF5E38A9* _playerShareTeamView; // 0x308
		::Class_2_292898978640E62C_1_Class_2_F03B0164AF5E38A9* _selfShareTeamView; // 0x310
		::Class_2_2F3C7D4EFC74D485* _model; // 0x318
		::Class_1_B1CC8F53861C28C2* _data; // 0x320
		::Class_1_9EDE5D0623B668B8* _item; // 0x328
		::System::Boolean _isSenderUser; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnUpdateChatMessageRow(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER_ONUPDATECHATMESSAGEROW_OFFSET))(this, args);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void InitSharePlayerTeamUIView(::Class_3_8B38DDDE25B29A1E* teamContent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_8B38DDDE25B29A1E*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER_INITSHAREPLAYERTEAMUIVIEW_OFFSET))(this, teamContent);
		}

		::System::Void InitShareSelfPlayerTeamUIView(::Class_3_8B38DDDE25B29A1E* teamContent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_8B38DDDE25B29A1E*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER_INITSHARESELFPLAYERTEAMUIVIEW_OFFSET))(this, teamContent);
		}

		::System::Void SetupTeamUIWithContent(::Class_3_8B38DDDE25B29A1E* teamContent, ::Class_2_292898978640E62C_1_Class_2_F03B0164AF5E38A9* viewWidget)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_8B38DDDE25B29A1E*, ::Class_2_292898978640E62C_1_Class_2_F03B0164AF5E38A9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER_SETUPTEAMUIWITHCONTENT_OFFSET))(this, teamContent, viewWidget);
		}

		::System::Void ResetUIView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER_RESETUIVIEW_OFFSET))(this);
		}

		::System::Void ResetSpecialUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER_RESETSPECIALUI_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
