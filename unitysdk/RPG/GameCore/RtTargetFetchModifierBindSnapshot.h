#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTTARGETFETCHMODIFIERBINDSNAPSHOT_METHOD_4_291D735F9538D9C2_OFFSET UNITYSDK_OFFSET(0x1CCF0540)
#define RPG_GAMECORE_RTTARGETFETCHMODIFIERBINDSNAPSHOT_METHOD_4_29379D95BD177F01_OFFSET UNITYSDK_OFFSET(0x1CCF04C0)
#define RPG_GAMECORE_RTTARGETFETCHMODIFIERBINDSNAPSHOT_METHOD_4_9DE80F95740A1380_OFFSET UNITYSDK_OFFSET(0x1CCF0330)
#define RPG_GAMECORE_RTTARGETFETCHMODIFIERBINDSNAPSHOT_METHOD_4_AB0DFA14DBDF23D4_OFFSET UNITYSDK_OFFSET(0x1CCF03F0)
#define RPG_GAMECORE_RTTARGETFETCHMODIFIERBINDSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCF03B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetFetchModifierBindSnapshot_TypeDefinitionIndex = 23968;

	class RtTargetFetchModifierBindSnapshot : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x10
		::RPG::GameCore::DynamicString* ModifierName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHMODIFIERBINDSNAPSHOT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9DE80F95740A1380(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetFetchModifierBindSnapshot*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetFetchModifierBindSnapshot*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHMODIFIERBINDSNAPSHOT_METHOD_4_9DE80F95740A1380_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AB0DFA14DBDF23D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetFetchModifierBindSnapshot* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetFetchModifierBindSnapshot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHMODIFIERBINDSNAPSHOT_METHOD_4_AB0DFA14DBDF23D4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_29379D95BD177F01(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetFetchModifierBindSnapshot*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetFetchModifierBindSnapshot*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHMODIFIERBINDSNAPSHOT_METHOD_4_29379D95BD177F01_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_291D735F9538D9C2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetFetchModifierBindSnapshot* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetFetchModifierBindSnapshot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHMODIFIERBINDSNAPSHOT_METHOD_4_291D735F9538D9C2_OFFSET))(a1, a2);
		}
	};
}
