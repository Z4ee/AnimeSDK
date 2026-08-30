#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::Rendering { class BatchAnimEventObjCB_ExecuteEventFun; }

#define RPG_CUSTOMRP_BAEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1929D8A0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int BAEvent_TypeDefinitionIndex = 36908;

	class BAEvent : public ::System::Object
	{
	public:
		::System::String* functionName; // 0x10
		::UnityEngine::Rendering::BatchAnimEventObjCB_ExecuteEventFun* fun; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_BAEVENT__CTOR_OFFSET))(this);
		}
	};
}
