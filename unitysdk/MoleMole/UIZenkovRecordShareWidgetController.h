#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_9EDE5D0623B668B8;
class Class_1_B1CC8F53861C28C2;
class Class_2_292898978640E62C_1;
class Class_2_292898978640E62C_1_Class_2_F4F2A8D14967B70F;
class Class_2_AF5BA1C65F12F4B1;
class Class_3_F7A504CEEF0222DC;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIFriendChatCommonInfoUIWidgetController; }
namespace MoleMole { class UIFriendChatCommonTopUIWidgetController; }
namespace System { class EventArgs; }
namespace System { class Object; }

#define MOLEMOLE_UIZENKOVRECORDSHAREWIDGETCONTROLLER_GET__MODEL_OFFSET UNITYSDK_OFFSET(0x12E6F2F0)
#define MOLEMOLE_UIZENKOVRECORDSHAREWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x12E6F650)
#define MOLEMOLE_UIZENKOVRECORDSHAREWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12E6FBC0)
#define MOLEMOLE_UIZENKOVRECORDSHAREWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x12E6FC50)
#define MOLEMOLE_UIZENKOVRECORDSHAREWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12E70AD0)
#define MOLEMOLE_UIZENKOVRECORDSHAREWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12E6F3B0)
#define MOLEMOLE_UIZENKOVRECORDSHAREWIDGETCONTROLLER_ONUPDATECHATMESSAGEROW_OFFSET UNITYSDK_OFFSET(0x12E6F510)
#define MOLEMOLE_UIZENKOVRECORDSHAREWIDGETCONTROLLER_SETUPSHARECONTENT_OFFSET UNITYSDK_OFFSET(0x12E6FD50)
#define MOLEMOLE_UIZENKOVRECORDSHAREWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12E70B50)
#define MOLEMOLE_UIZENKOVRECORDSHAREWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12E70B60)
#define MOLEMOLE_UIZENKOVRECORDSHAREWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x12E70BF0)
#define MOLEMOLE_UIZENKOVRECORDSHAREWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12E70C90)
#define MOLEMOLE_UIZENKOVRECORDSHAREWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12E70D20)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovRecordShareWidgetController_TypeDefinitionIndex = 53767;

	class UIZenkovRecordShareWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_292898978640E62C_1* _view; // 0x2F0
		::MoleMole::UIFriendChatCommonInfoUIWidgetController* _commonInfoWidget; // 0x2F8
		::MoleMole::UIFriendChatCommonTopUIWidgetController* _commonTopWidget; // 0x300
		::Class_1_9EDE5D0623B668B8* _item; // 0x308
		::Class_1_B1CC8F53861C28C2* _data; // 0x310
		::System::Boolean _isSenderUser; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRECORDSHAREWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_AF5BA1C65F12F4B1* get__model()
		{
			return ((::Class_2_AF5BA1C65F12F4B1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRECORDSHAREWIDGETCONTROLLER_GET__MODEL_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRECORDSHAREWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUpdateChatMessageRow(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRECORDSHAREWIDGETCONTROLLER_ONUPDATECHATMESSAGEROW_OFFSET))(this, args);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRECORDSHAREWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRECORDSHAREWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRECORDSHAREWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void SetupShareContent(::Class_2_292898978640E62C_1_Class_2_F4F2A8D14967B70F* view, ::Class_3_F7A504CEEF0222DC* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_292898978640E62C_1_Class_2_F4F2A8D14967B70F*, ::Class_3_F7A504CEEF0222DC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRECORDSHAREWIDGETCONTROLLER_SETUPSHARECONTENT_OFFSET))(this, view, data);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRECORDSHAREWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRECORDSHAREWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRECORDSHAREWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRECORDSHAREWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRECORDSHAREWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
