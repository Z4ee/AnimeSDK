#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISENTITYACTIONSTATE_METHOD_4_5D4B0071FE73973E_OFFSET UNITYSDK_OFFSET(0x1A8E08D0)
#define RPG_GAMECORE_BYISENTITYACTIONSTATE_METHOD_4_6F9ADF696BEE7F9F_OFFSET UNITYSDK_OFFSET(0x1A8E0910)
#define RPG_GAMECORE_BYISENTITYACTIONSTATE_METHOD_4_7DEE599E6F40A37B_OFFSET UNITYSDK_OFFSET(0x1A8E0AC0)
#define RPG_GAMECORE_BYISENTITYACTIONSTATE_METHOD_4_C61471CF11ADDDF5_OFFSET UNITYSDK_OFFSET(0x1A8E0A90)
#define RPG_GAMECORE_BYISENTITYACTIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8E0900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsEntityActionState_TypeDefinitionIndex = 22237;

	class ByIsEntityActionState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISENTITYACTIONSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5D4B0071FE73973E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsEntityActionState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsEntityActionState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISENTITYACTIONSTATE_METHOD_4_5D4B0071FE73973E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6F9ADF696BEE7F9F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsEntityActionState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsEntityActionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISENTITYACTIONSTATE_METHOD_4_6F9ADF696BEE7F9F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C61471CF11ADDDF5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEntityActionState*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEntityActionState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISENTITYACTIONSTATE_METHOD_4_C61471CF11ADDDF5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7DEE599E6F40A37B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEntityActionState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEntityActionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISENTITYACTIONSTATE_METHOD_4_7DEE599E6F40A37B_OFFSET))(a1, a2);
		}
	};
}
