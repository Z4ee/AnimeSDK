#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREISENTITYINDIALOGUE_METHOD_4_6CE4170281EB75CC_OFFSET UNITYSDK_OFFSET(0x1CECE7F0)
#define RPG_GAMECORE_BYCOMPAREISENTITYINDIALOGUE_METHOD_4_89EFB39455EF7E96_OFFSET UNITYSDK_OFFSET(0x1CECE640)
#define RPG_GAMECORE_BYCOMPAREISENTITYINDIALOGUE_METHOD_4_D2EF4B8791121047_OFFSET UNITYSDK_OFFSET(0x1CECE600)
#define RPG_GAMECORE_BYCOMPAREISENTITYINDIALOGUE_METHOD_4_FDD44E1C4902E3C2_OFFSET UNITYSDK_OFFSET(0x1CECE7C0)
#define RPG_GAMECORE_BYCOMPAREISENTITYINDIALOGUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CECE630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareIsEntityInDialogue_TypeDefinitionIndex = 20643;

	class ByCompareIsEntityInDialogue : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetEntity; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISENTITYINDIALOGUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D2EF4B8791121047(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareIsEntityInDialogue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareIsEntityInDialogue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISENTITYINDIALOGUE_METHOD_4_D2EF4B8791121047_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_89EFB39455EF7E96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareIsEntityInDialogue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareIsEntityInDialogue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISENTITYINDIALOGUE_METHOD_4_89EFB39455EF7E96_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FDD44E1C4902E3C2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareIsEntityInDialogue*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareIsEntityInDialogue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISENTITYINDIALOGUE_METHOD_4_FDD44E1C4902E3C2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6CE4170281EB75CC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareIsEntityInDialogue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareIsEntityInDialogue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISENTITYINDIALOGUE_METHOD_4_6CE4170281EB75CC_OFFSET))(a1, a2);
		}
	};
}
