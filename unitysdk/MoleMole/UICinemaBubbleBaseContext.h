#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_207C741E4BA7C817;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UICINEMABUBBLEBASECONTEXT_SETUPGRAPHCUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x19327E20)
#define MOLEMOLE_UICINEMABUBBLEBASECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19327EA0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaBubbleBaseContext_TypeDefinitionIndex = 83379;

	class UICinemaBubbleBaseContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Func_1<::System::Int32>* onSuccessClickReturnScore; // 0x28
		::System::Action_1<::System::String*>* graphEventDisatcher; // 0x30
		::System::String* bubbleTextKey; // 0x38
		::System::String* onMissEventName; // 0x40
		::System::Action_1<::System::Boolean>* onFinish; // 0x48
		::System::Action* onBeforePerClick; // 0x50
		::System::String* onSuccessEventName; // 0x58
		::System::String* onClickEventName; // 0x60
		::System::Action* onMiss; // 0x68
		::System::String* onShowEventName; // 0x70
		::System::Int32 bubbleLocationIdx; // 0x78
		::System::Single timeDuration; // 0x7C
		::System::Int32 hitNum; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMABUBBLEBASECONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void SetupGraphCustomEvent(::Class_1_207C741E4BA7C817* playEvent, ::System::Action_1<::System::String*>* eventDispatcher)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_207C741E4BA7C817*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMABUBBLEBASECONTEXT_SETUPGRAPHCUSTOMEVENT_OFFSET))(this, playEvent, eventDispatcher);
		}
	};
}
