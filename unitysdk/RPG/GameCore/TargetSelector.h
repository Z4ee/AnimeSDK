#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSELECTOR_METHOD_4_38016205646F6A8A_OFFSET UNITYSDK_OFFSET(0x1E1BF210)
#define RPG_GAMECORE_TARGETSELECTOR_METHOD_4_66E6ADA0BD2CCAEC_OFFSET UNITYSDK_OFFSET(0x1E1BF1B0)
#define RPG_GAMECORE_TARGETSELECTOR_METHOD_4_8D1DCF530879EF63_OFFSET UNITYSDK_OFFSET(0x1E1BF3A0)
#define RPG_GAMECORE_TARGETSELECTOR_METHOD_4_D7CFDDA004D2CF8C_OFFSET UNITYSDK_OFFSET(0x1E1BF350)
#define RPG_GAMECORE_TARGETSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BF200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSelector_TypeDefinitionIndex = 23624;

	class TargetSelector : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::PredicateConfig* Predicate; // 0x10
		::RPG::GameCore::TargetEvaluator* SuccTarget; // 0x18
		::RPG::GameCore::TargetEvaluator* FailTarget; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSELECTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_66E6ADA0BD2CCAEC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSelector*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSelector*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSELECTOR_METHOD_4_66E6ADA0BD2CCAEC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_38016205646F6A8A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSelector* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSELECTOR_METHOD_4_38016205646F6A8A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D7CFDDA004D2CF8C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSelector*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSelector*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSELECTOR_METHOD_4_D7CFDDA004D2CF8C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8D1DCF530879EF63(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSelector* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSELECTOR_METHOD_4_8D1DCF530879EF63_OFFSET))(a1, a2);
		}
	};
}
