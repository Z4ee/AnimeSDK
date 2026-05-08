#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEventType.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIREALTIMEQTEBUTTONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15200830)

namespace MoleMole
{
	inline static constexpr unsigned int UIRealtimeQTEButtonContext_TypeDefinitionIndex = 54807;

	class UIRealtimeQTEButtonContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* TaskCustomTag; // 0x28
		::MoleMole::InputLogicEventType LogicEventType; // 0x30
		::MoleMole::InputActionEventType ActionEventType; // 0x34
		::MoleMole::LogicButtonInputType ButtonInputType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTEBUTTONCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
