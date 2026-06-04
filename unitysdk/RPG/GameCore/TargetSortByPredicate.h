#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTBYPREDICATE_METHOD_3_47CB8CA94423044A_OFFSET UNITYSDK_OFFSET(0x19D2C130)
#define RPG_GAMECORE_TARGETSORTBYPREDICATE_METHOD_3_4AC0256DFFBB97E2_OFFSET UNITYSDK_OFFSET(0x19D2E260)
#define RPG_GAMECORE_TARGETSORTBYPREDICATE_METHOD_3_7458ED9591F1A647_OFFSET UNITYSDK_OFFSET(0x19D2E1F0)
#define RPG_GAMECORE_TARGETSORTBYPREDICATE_METHOD_3_89BA15031B47B4AB_OFFSET UNITYSDK_OFFSET(0x19D1E8B0)
#define RPG_GAMECORE_TARGETSORTBYPREDICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19D1E890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByPredicate_TypeDefinitionIndex = 22663;

	class TargetSortByPredicate : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::PredicateConfig* Predicate; // 0x10
		::System::Boolean InverseSort; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPREDICATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7458ED9591F1A647(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByPredicate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByPredicate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPREDICATE_METHOD_3_7458ED9591F1A647_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_89BA15031B47B4AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByPredicate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByPredicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPREDICATE_METHOD_3_89BA15031B47B4AB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_47CB8CA94423044A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByPredicate*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByPredicate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPREDICATE_METHOD_3_47CB8CA94423044A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4AC0256DFFBB97E2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByPredicate* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByPredicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPREDICATE_METHOD_3_4AC0256DFFBB97E2_OFFSET))(a1, a2);
		}
	};
}
