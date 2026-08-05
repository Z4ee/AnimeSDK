#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class Class_1_D6A378FF4AC4FA02;
class Class_2_CEC585D0736F3660;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CHATPLUSSHOWOBJ_GET_ISTRIGGERINLOADING_OFFSET UNITYSDK_OFFSET(0x177BC350)
#define MOLEMOLE_CHATPLUSSHOWOBJ_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x177BC340)
#define MOLEMOLE_CHATPLUSSHOWOBJ_ONPLAYCHAT_OFFSET UNITYSDK_OFFSET(0x177BC590)
#define MOLEMOLE_CHATPLUSSHOWOBJ_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x177BC3C0)
#define MOLEMOLE_CHATPLUSSHOWOBJ_PLAYCHATPLUSTIMELINE_OFFSET UNITYSDK_OFFSET(0x177BCAB0)
#define MOLEMOLE_CHATPLUSSHOWOBJ_PLAYCHAT_OFFSET UNITYSDK_OFFSET(0x177BC410)
#define MOLEMOLE_CHATPLUSSHOWOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x177BC360)
#define MOLEMOLE_CHATPLUSSHOWOBJ__ONPLAYCHAT_B__10_0_OFFSET UNITYSDK_OFFSET(0x177BCDF0)

namespace MoleMole
{
	inline static constexpr unsigned int ChatPlusShowObj_TypeDefinitionIndex = 71338;

	class ChatPlusShowObj : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Action_1<::Class_2_CEC585D0736F3660*>* _finishCallback; // 0x28
		::System::Action_1<::Class_2_CEC585D0736F3660*>* _onChatUIClose; // 0x30
		::Class_1_D6A378FF4AC4FA02* _chatParams; // 0x38

		::System::Void _ctor(::Class_1_D6A378FF4AC4FA02* chatParam)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D6A378FF4AC4FA02*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPLUSSHOWOBJ__CTOR_OFFSET))(this, chatParam);
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
