#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYSAVEMODELWHENDEAD_METHOD_4_3FB6C7AE18855606_OFFSET UNITYSDK_OFFSET(0x195D5CA0)
#define RPG_GAMECORE_BYSAVEMODELWHENDEAD_METHOD_4_74A13E7C8691FA86_OFFSET UNITYSDK_OFFSET(0x195D5A00)
#define RPG_GAMECORE_BYSAVEMODELWHENDEAD_METHOD_4_80FCEC40B7C5ED79_OFFSET UNITYSDK_OFFSET(0x195D5B20)
#define RPG_GAMECORE_BYSAVEMODELWHENDEAD_METHOD_4_E8FFD6042FF1A213_OFFSET UNITYSDK_OFFSET(0x195D5D40)
#define RPG_GAMECORE_BYSAVEMODELWHENDEAD__CTOR_OFFSET UNITYSDK_OFFSET(0x195D5AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BySaveModelWhenDead_TypeDefinitionIndex = 21881;

	class BySaveModelWhenDead : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSAVEMODELWHENDEAD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_74A13E7C8691FA86(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BySaveModelWhenDead*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BySaveModelWhenDead*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSAVEMODELWHENDEAD_METHOD_4_74A13E7C8691FA86_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_80FCEC40B7C5ED79(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BySaveModelWhenDead* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BySaveModelWhenDead*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSAVEMODELWHENDEAD_METHOD_4_80FCEC40B7C5ED79_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3FB6C7AE18855606(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySaveModelWhenDead*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySaveModelWhenDead*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSAVEMODELWHENDEAD_METHOD_4_3FB6C7AE18855606_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E8FFD6042FF1A213(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySaveModelWhenDead* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySaveModelWhenDead*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSAVEMODELWHENDEAD_METHOD_4_E8FFD6042FF1A213_OFFSET))(a1, a2);
		}
	};
}
