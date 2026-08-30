#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_RTTARGETFETCHTRIGGER_METHOD_4_0D1CE01421F4E439_OFFSET UNITYSDK_OFFSET(0x1D4B5140)
#define RPG_GAMECORE_RTTARGETFETCHTRIGGER_METHOD_4_B54DE0E899321615_OFFSET UNITYSDK_OFFSET(0x1D4B4ED0)
#define RPG_GAMECORE_RTTARGETFETCHTRIGGER_METHOD_4_C619AE74D3D7FB71_OFFSET UNITYSDK_OFFSET(0x1D4B4F30)
#define RPG_GAMECORE_RTTARGETFETCHTRIGGER_METHOD_4_D10DAD75EBADC4E7_OFFSET UNITYSDK_OFFSET(0x1D4B50F0)
#define RPG_GAMECORE_RTTARGETFETCHTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B4F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetFetchTrigger_TypeDefinitionIndex = 23966;

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

		static ::System::Void Method_4_B54DE0E899321615(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetFetchTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetFetchTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHTRIGGER_METHOD_4_B54DE0E899321615_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C619AE74D3D7FB71(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetFetchTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetFetchTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHTRIGGER_METHOD_4_C619AE74D3D7FB71_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D10DAD75EBADC4E7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetFetchTrigger*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetFetchTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHTRIGGER_METHOD_4_D10DAD75EBADC4E7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0D1CE01421F4E439(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetFetchTrigger* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetFetchTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHTRIGGER_METHOD_4_0D1CE01421F4E439_OFFSET))(a1, a2);
		}
	};
}
