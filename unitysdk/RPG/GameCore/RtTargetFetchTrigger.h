#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }

#define RPG_GAMECORE_RTTARGETFETCHTRIGGER_METHOD_4_15E78BC6453444CF_OFFSET UNITYSDK_OFFSET(0x18DD9E10)
#define RPG_GAMECORE_RTTARGETFETCHTRIGGER_METHOD_4_410F089613F24C62_OFFSET UNITYSDK_OFFSET(0x18DD9EF0)
#define RPG_GAMECORE_RTTARGETFETCHTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18DD9EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetFetchTrigger_TypeDefinitionIndex = 23251;

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

		static ::System::Void Method_4_15E78BC6453444CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetFetchTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetFetchTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHTRIGGER_METHOD_4_15E78BC6453444CF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_410F089613F24C62(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetFetchTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetFetchTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHTRIGGER_METHOD_4_410F089613F24C62_OFFSET))(a1, a2);
		}
	};
}
