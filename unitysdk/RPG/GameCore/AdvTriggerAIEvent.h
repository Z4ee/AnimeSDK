#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_AIEventType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADVTRIGGERAIEVENT_METHOD_3_5EA6646A8C987F74_OFFSET UNITYSDK_OFFSET(0x1CDDE0B0)
#define RPG_GAMECORE_ADVTRIGGERAIEVENT_METHOD_3_AA1268C0A3062A81_OFFSET UNITYSDK_OFFSET(0x1CDDE0F0)
#define RPG_GAMECORE_ADVTRIGGERAIEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDDE0E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvTriggerAIEvent_TypeDefinitionIndex = 23126;

	class AdvTriggerAIEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* InstanceID; // 0x20
		::System::String* UserDefineEvent; // 0x28
		::RPG::GameCore::ST_AIEventType SystemEvent; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRIGGERAIEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5EA6646A8C987F74(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvTriggerAIEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvTriggerAIEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRIGGERAIEVENT_METHOD_3_5EA6646A8C987F74_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AA1268C0A3062A81(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvTriggerAIEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvTriggerAIEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRIGGERAIEVENT_METHOD_3_AA1268C0A3062A81_OFFSET))(a1, a2);
		}
	};
}
