#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARETARGETCOUNT_METHOD_4_2739012C4882F40D_OFFSET UNITYSDK_OFFSET(0x1BBC4470)
#define RPG_GAMECORE_BYCOMPARETARGETCOUNT_METHOD_4_5E212403CED349A2_OFFSET UNITYSDK_OFFSET(0x1BBC4DE0)
#define RPG_GAMECORE_BYCOMPARETARGETCOUNT_METHOD_4_63A961384C99836B_OFFSET UNITYSDK_OFFSET(0x1BBC4B00)
#define RPG_GAMECORE_BYCOMPARETARGETCOUNT_METHOD_4_A8B0773DEEE84565_OFFSET UNITYSDK_OFFSET(0x1BBC45D0)
#define RPG_GAMECORE_BYCOMPARETARGETCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBC45C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareTargetCount_TypeDefinitionIndex = 23263;

	class ByCompareTargetCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean AliveOnly; // 0x28
		::RPG::GameCore::DynamicFloat* Number; // 0x30
		::RPG::GameCore::CompareType CompareType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2739012C4882F40D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTargetCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTargetCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETCOUNT_METHOD_4_2739012C4882F40D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A8B0773DEEE84565(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTargetCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTargetCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETCOUNT_METHOD_4_A8B0773DEEE84565_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_63A961384C99836B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTargetCount*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTargetCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETCOUNT_METHOD_4_63A961384C99836B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5E212403CED349A2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTargetCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTargetCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETCOUNT_METHOD_4_5E212403CED349A2_OFFSET))(a1, a2);
		}
	};
}
