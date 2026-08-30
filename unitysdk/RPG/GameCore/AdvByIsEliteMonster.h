#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYISELITEMONSTER_METHOD_4_5B3F24A705D75220_OFFSET UNITYSDK_OFFSET(0x1D6AF850)
#define RPG_GAMECORE_ADVBYISELITEMONSTER_METHOD_4_7EB9179B438D3085_OFFSET UNITYSDK_OFFSET(0x1D6AF890)
#define RPG_GAMECORE_ADVBYISELITEMONSTER_METHOD_4_AB43506BAB4BA5BF_OFFSET UNITYSDK_OFFSET(0x1D6AFA10)
#define RPG_GAMECORE_ADVBYISELITEMONSTER_METHOD_4_B64C1A714F43DA61_OFFSET UNITYSDK_OFFSET(0x1D6AFA40)
#define RPG_GAMECORE_ADVBYISELITEMONSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AF880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByIsEliteMonster_TypeDefinitionIndex = 21569;

	class AdvByIsEliteMonster : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYISELITEMONSTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5B3F24A705D75220(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByIsEliteMonster*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByIsEliteMonster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYISELITEMONSTER_METHOD_4_5B3F24A705D75220_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7EB9179B438D3085(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByIsEliteMonster* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByIsEliteMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYISELITEMONSTER_METHOD_4_7EB9179B438D3085_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AB43506BAB4BA5BF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByIsEliteMonster*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByIsEliteMonster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYISELITEMONSTER_METHOD_4_AB43506BAB4BA5BF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B64C1A714F43DA61(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByIsEliteMonster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByIsEliteMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYISELITEMONSTER_METHOD_4_B64C1A714F43DA61_OFFSET))(a1, a2);
		}
	};
}
