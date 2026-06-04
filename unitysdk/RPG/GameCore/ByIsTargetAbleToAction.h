#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISTARGETABLETOACTION_METHOD_4_5DED6DBB9ABB294B_OFFSET UNITYSDK_OFFSET(0x1956F910)
#define RPG_GAMECORE_BYISTARGETABLETOACTION_METHOD_4_93AD9CF67267CADE_OFFSET UNITYSDK_OFFSET(0x1956F890)
#define RPG_GAMECORE_BYISTARGETABLETOACTION_METHOD_4_B190FD30111E5B01_OFFSET UNITYSDK_OFFSET(0x1956F710)
#define RPG_GAMECORE_BYISTARGETABLETOACTION_METHOD_4_CFD227DB0A8F2C77_OFFSET UNITYSDK_OFFSET(0x1956F640)
#define RPG_GAMECORE_BYISTARGETABLETOACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1956F6C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsTargetAbleToAction_TypeDefinitionIndex = 21783;

	class ByIsTargetAbleToAction : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETABLETOACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CFD227DB0A8F2C77(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTargetAbleToAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTargetAbleToAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETABLETOACTION_METHOD_4_CFD227DB0A8F2C77_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B190FD30111E5B01(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTargetAbleToAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTargetAbleToAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETABLETOACTION_METHOD_4_B190FD30111E5B01_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_93AD9CF67267CADE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTargetAbleToAction*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTargetAbleToAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETABLETOACTION_METHOD_4_93AD9CF67267CADE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5DED6DBB9ABB294B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTargetAbleToAction* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTargetAbleToAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETABLETOACTION_METHOD_4_5DED6DBB9ABB294B_OFFSET))(a1, a2);
		}
	};
}
