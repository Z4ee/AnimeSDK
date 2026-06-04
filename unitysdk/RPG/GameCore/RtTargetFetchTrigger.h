#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_RTTARGETFETCHTRIGGER_METHOD_4_24B6C4172B23077A_OFFSET UNITYSDK_OFFSET(0x19BF5310)
#define RPG_GAMECORE_RTTARGETFETCHTRIGGER_METHOD_4_7D29D3CE0EEA79E1_OFFSET UNITYSDK_OFFSET(0x19BF5280)
#define RPG_GAMECORE_RTTARGETFETCHTRIGGER_METHOD_4_839948727DC06B92_OFFSET UNITYSDK_OFFSET(0x19BF4FE0)
#define RPG_GAMECORE_RTTARGETFETCHTRIGGER_METHOD_4_C619AE74D3D7FB71_OFFSET UNITYSDK_OFFSET(0x19BF50C0)
#define RPG_GAMECORE_RTTARGETFETCHTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF5070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetFetchTrigger_TypeDefinitionIndex = 22919;

	class RtTargetFetchTrigger : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetEvaluator* Owner; // 0x10
		::System::Boolean OnlySearchCurrentModifier; // 0x18
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* TriggerTags; // 0x20
		::System::String* TriggerName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHTRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_839948727DC06B92(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetFetchTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetFetchTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHTRIGGER_METHOD_4_839948727DC06B92_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C619AE74D3D7FB71(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetFetchTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetFetchTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHTRIGGER_METHOD_4_C619AE74D3D7FB71_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7D29D3CE0EEA79E1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetFetchTrigger*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetFetchTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHTRIGGER_METHOD_4_7D29D3CE0EEA79E1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_24B6C4172B23077A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetFetchTrigger* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetFetchTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHTRIGGER_METHOD_4_24B6C4172B23077A_OFFSET))(a1, a2);
		}
	};
}
