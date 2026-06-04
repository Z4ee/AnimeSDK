#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTTARGETFETCHMODIFIERBINDSNAPSHOT_METHOD_4_740FBA9BD7774A0B_OFFSET UNITYSDK_OFFSET(0x19BF3A70)
#define RPG_GAMECORE_RTTARGETFETCHMODIFIERBINDSNAPSHOT_METHOD_4_AB0DFA14DBDF23D4_OFFSET UNITYSDK_OFFSET(0x19BF38F0)
#define RPG_GAMECORE_RTTARGETFETCHMODIFIERBINDSNAPSHOT_METHOD_4_CE7B9868D0B819EA_OFFSET UNITYSDK_OFFSET(0x19BF37C0)
#define RPG_GAMECORE_RTTARGETFETCHMODIFIERBINDSNAPSHOT_METHOD_4_EDA2248822B7241E_OFFSET UNITYSDK_OFFSET(0x19BF39C0)
#define RPG_GAMECORE_RTTARGETFETCHMODIFIERBINDSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF3870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetFetchModifierBindSnapshot_TypeDefinitionIndex = 22921;

	class RtTargetFetchModifierBindSnapshot : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x10
		::RPG::GameCore::DynamicString* ModifierName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHMODIFIERBINDSNAPSHOT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CE7B9868D0B819EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetFetchModifierBindSnapshot*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetFetchModifierBindSnapshot*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHMODIFIERBINDSNAPSHOT_METHOD_4_CE7B9868D0B819EA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AB0DFA14DBDF23D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetFetchModifierBindSnapshot* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetFetchModifierBindSnapshot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHMODIFIERBINDSNAPSHOT_METHOD_4_AB0DFA14DBDF23D4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EDA2248822B7241E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetFetchModifierBindSnapshot*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetFetchModifierBindSnapshot*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHMODIFIERBINDSNAPSHOT_METHOD_4_EDA2248822B7241E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_740FBA9BD7774A0B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetFetchModifierBindSnapshot* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetFetchModifierBindSnapshot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHMODIFIERBINDSNAPSHOT_METHOD_4_740FBA9BD7774A0B_OFFSET))(a1, a2);
		}
	};
}
