#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYDEPLOYPUZZLEBASEPOINTISANSWER_METHOD_4_40B407372A51B07F_OFFSET UNITYSDK_OFFSET(0x1BBD4C70)
#define RPG_GAMECORE_BYDEPLOYPUZZLEBASEPOINTISANSWER_METHOD_4_90BDD8F54A7D76DF_OFFSET UNITYSDK_OFFSET(0x1BBD4E70)
#define RPG_GAMECORE_BYDEPLOYPUZZLEBASEPOINTISANSWER_METHOD_4_D1157BC87209D95F_OFFSET UNITYSDK_OFFSET(0x1BBD4CF0)
#define RPG_GAMECORE_BYDEPLOYPUZZLEBASEPOINTISANSWER_METHOD_4_ED20FC1510B80D3B_OFFSET UNITYSDK_OFFSET(0x1BBD4EC0)
#define RPG_GAMECORE_BYDEPLOYPUZZLEBASEPOINTISANSWER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBD4CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByDeployPuzzleBasePointIsAnswer_TypeDefinitionIndex = 21733;

	class ByDeployPuzzleBasePointIsAnswer : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDEPLOYPUZZLEBASEPOINTISANSWER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_40B407372A51B07F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByDeployPuzzleBasePointIsAnswer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByDeployPuzzleBasePointIsAnswer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDEPLOYPUZZLEBASEPOINTISANSWER_METHOD_4_40B407372A51B07F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D1157BC87209D95F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByDeployPuzzleBasePointIsAnswer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByDeployPuzzleBasePointIsAnswer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDEPLOYPUZZLEBASEPOINTISANSWER_METHOD_4_D1157BC87209D95F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_90BDD8F54A7D76DF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDeployPuzzleBasePointIsAnswer*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDeployPuzzleBasePointIsAnswer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDEPLOYPUZZLEBASEPOINTISANSWER_METHOD_4_90BDD8F54A7D76DF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_ED20FC1510B80D3B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDeployPuzzleBasePointIsAnswer* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDeployPuzzleBasePointIsAnswer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDEPLOYPUZZLEBASEPOINTISANSWER_METHOD_4_ED20FC1510B80D3B_OFFSET))(a1, a2);
		}
	};
}
