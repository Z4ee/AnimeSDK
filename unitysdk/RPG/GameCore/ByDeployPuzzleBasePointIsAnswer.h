#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYDEPLOYPUZZLEBASEPOINTISANSWER_METHOD_4_6B473086341B0748_OFFSET UNITYSDK_OFFSET(0x19545C10)
#define RPG_GAMECORE_BYDEPLOYPUZZLEBASEPOINTISANSWER_METHOD_4_B27DF922B3F42002_OFFSET UNITYSDK_OFFSET(0x19545F30)
#define RPG_GAMECORE_BYDEPLOYPUZZLEBASEPOINTISANSWER_METHOD_4_CB4D59AD13D4B2CD_OFFSET UNITYSDK_OFFSET(0x19546010)
#define RPG_GAMECORE_BYDEPLOYPUZZLEBASEPOINTISANSWER_METHOD_4_D1157BC87209D95F_OFFSET UNITYSDK_OFFSET(0x19545DB0)
#define RPG_GAMECORE_BYDEPLOYPUZZLEBASEPOINTISANSWER__CTOR_OFFSET UNITYSDK_OFFSET(0x19545CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByDeployPuzzleBasePointIsAnswer_TypeDefinitionIndex = 20758;

	class ByDeployPuzzleBasePointIsAnswer : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDEPLOYPUZZLEBASEPOINTISANSWER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6B473086341B0748(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByDeployPuzzleBasePointIsAnswer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByDeployPuzzleBasePointIsAnswer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDEPLOYPUZZLEBASEPOINTISANSWER_METHOD_4_6B473086341B0748_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D1157BC87209D95F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByDeployPuzzleBasePointIsAnswer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByDeployPuzzleBasePointIsAnswer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDEPLOYPUZZLEBASEPOINTISANSWER_METHOD_4_D1157BC87209D95F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B27DF922B3F42002(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDeployPuzzleBasePointIsAnswer*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDeployPuzzleBasePointIsAnswer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDEPLOYPUZZLEBASEPOINTISANSWER_METHOD_4_B27DF922B3F42002_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CB4D59AD13D4B2CD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDeployPuzzleBasePointIsAnswer* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDeployPuzzleBasePointIsAnswer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDEPLOYPUZZLEBASEPOINTISANSWER_METHOD_4_CB4D59AD13D4B2CD_OFFSET))(a1, a2);
		}
	};
}
