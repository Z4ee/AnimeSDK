#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISTARGETABLETOACTION_METHOD_4_79D7D4C9E7F6F63B_OFFSET UNITYSDK_OFFSET(0x1CDAFCE0)
#define RPG_GAMECORE_BYISTARGETABLETOACTION_METHOD_4_B190FD30111E5B01_OFFSET UNITYSDK_OFFSET(0x1CDAFB60)
#define RPG_GAMECORE_BYISTARGETABLETOACTION_METHOD_4_BE4D7C86BB1F989D_OFFSET UNITYSDK_OFFSET(0x1CDAFD10)
#define RPG_GAMECORE_BYISTARGETABLETOACTION_METHOD_4_E1C324151ED10104_OFFSET UNITYSDK_OFFSET(0x1CDAFB20)
#define RPG_GAMECORE_BYISTARGETABLETOACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDAFB50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsTargetAbleToAction_TypeDefinitionIndex = 22778;

	class ByIsTargetAbleToAction : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETABLETOACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E1C324151ED10104(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTargetAbleToAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTargetAbleToAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETABLETOACTION_METHOD_4_E1C324151ED10104_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B190FD30111E5B01(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTargetAbleToAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTargetAbleToAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETABLETOACTION_METHOD_4_B190FD30111E5B01_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_79D7D4C9E7F6F63B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTargetAbleToAction*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTargetAbleToAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETABLETOACTION_METHOD_4_79D7D4C9E7F6F63B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BE4D7C86BB1F989D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTargetAbleToAction* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTargetAbleToAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETABLETOACTION_METHOD_4_BE4D7C86BB1F989D_OFFSET))(a1, a2);
		}
	};
}
