#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class Class_1_0E846B689DE3EFD2;
class Class_1_D65512A83CF70AB7;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CHATPLUSSHOWOBJ_GET_ISTRIGGERINLOADING_OFFSET UNITYSDK_OFFSET(0x1A04F1A0)
#define MOLEMOLE_CHATPLUSSHOWOBJ_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1A04F190)
#define MOLEMOLE_CHATPLUSSHOWOBJ_ONPLAYCHAT_OFFSET UNITYSDK_OFFSET(0x1A04F3E0)
#define MOLEMOLE_CHATPLUSSHOWOBJ_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x1A04F210)
#define MOLEMOLE_CHATPLUSSHOWOBJ_PLAYCHATPLUSTIMELINE_OFFSET UNITYSDK_OFFSET(0x1A04F900)
#define MOLEMOLE_CHATPLUSSHOWOBJ_PLAYCHAT_OFFSET UNITYSDK_OFFSET(0x1A04F260)
#define MOLEMOLE_CHATPLUSSHOWOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1A04F1B0)
#define MOLEMOLE_CHATPLUSSHOWOBJ__ONPLAYCHAT_B__10_0_OFFSET UNITYSDK_OFFSET(0x1A04FC30)

namespace MoleMole
{
	inline static constexpr unsigned int ChatPlusShowObj_TypeDefinitionIndex = 71308;

	class ChatPlusShowObj : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Action_1<::Class_1_D65512A83CF70AB7*>* _onChatUIClose; // 0x28
		::Class_1_0E846B689DE3EFD2* _chatParams; // 0x30
		::System::Action_1<::Class_1_D65512A83CF70AB7*>* _finishCallback; // 0x38

		::System::Void _ctor(::Class_1_0E846B689DE3EFD2* chatParam)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0E846B689DE3EFD2*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPLUSSHOWOBJ__CTOR_OFFSET))(this, chatParam);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPLUSSHOWOBJ_GET_PRIORITY_OFFSET))(this);
		}

		::System::Boolean get_IsTriggerInLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPLUSSHOWOBJ_GET_ISTRIGGERINLOADING_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPLUSSHOWOBJ_ONPROCESS_OFFSET))(this);
		}

		::System::Void PlayChat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPLUSSHOWOBJ_PLAYCHAT_OFFSET))(this);
		}

		::System::Void OnPlayChat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPLUSSHOWOBJ_ONPLAYCHAT_OFFSET))(this);
		}

		::System::Void PlayChatPlusTimeLine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPLUSSHOWOBJ_PLAYCHATPLUSTIMELINE_OFFSET))(this);
		}

		::System::Void _OnPlayChat_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPLUSSHOWOBJ__ONPLAYCHAT_B__10_0_OFFSET))(this);
		}
	};
}
