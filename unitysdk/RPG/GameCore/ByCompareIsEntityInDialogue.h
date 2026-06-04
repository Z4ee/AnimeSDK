#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREISENTITYINDIALOGUE_METHOD_4_89EFB39455EF7E96_OFFSET UNITYSDK_OFFSET(0x1951A300)
#define RPG_GAMECORE_BYCOMPAREISENTITYINDIALOGUE_METHOD_4_A8A2823953CD53DB_OFFSET UNITYSDK_OFFSET(0x1951A480)
#define RPG_GAMECORE_BYCOMPAREISENTITYINDIALOGUE_METHOD_4_B522C25022764568_OFFSET UNITYSDK_OFFSET(0x1951A230)
#define RPG_GAMECORE_BYCOMPAREISENTITYINDIALOGUE_METHOD_4_E4764EA925126D3A_OFFSET UNITYSDK_OFFSET(0x1951A500)
#define RPG_GAMECORE_BYCOMPAREISENTITYINDIALOGUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1951A2B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareIsEntityInDialogue_TypeDefinitionIndex = 19737;

	class ByCompareIsEntityInDialogue : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetEntity; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISENTITYINDIALOGUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B522C25022764568(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareIsEntityInDialogue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareIsEntityInDialogue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISENTITYINDIALOGUE_METHOD_4_B522C25022764568_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_89EFB39455EF7E96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareIsEntityInDialogue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareIsEntityInDialogue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISENTITYINDIALOGUE_METHOD_4_89EFB39455EF7E96_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A8A2823953CD53DB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareIsEntityInDialogue*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareIsEntityInDialogue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISENTITYINDIALOGUE_METHOD_4_A8A2823953CD53DB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E4764EA925126D3A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareIsEntityInDialogue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareIsEntityInDialogue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISENTITYINDIALOGUE_METHOD_4_E4764EA925126D3A_OFFSET))(a1, a2);
		}
	};
}
