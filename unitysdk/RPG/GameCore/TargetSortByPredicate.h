#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTBYPREDICATE_METHOD_3_61F6BB80BD73D32A_OFFSET UNITYSDK_OFFSET(0x1D0C9580)
#define RPG_GAMECORE_TARGETSORTBYPREDICATE_METHOD_3_89BA15031B47B4AB_OFFSET UNITYSDK_OFFSET(0x1D0C9460)
#define RPG_GAMECORE_TARGETSORTBYPREDICATE_METHOD_3_B1E3FA0A3D9C75E6_OFFSET UNITYSDK_OFFSET(0x1D0C95D0)
#define RPG_GAMECORE_TARGETSORTBYPREDICATE_METHOD_3_D71F840DAD37429B_OFFSET UNITYSDK_OFFSET(0x1D0C9400)
#define RPG_GAMECORE_TARGETSORTBYPREDICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0C9450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByPredicate_TypeDefinitionIndex = 23126;

	class TargetSortByPredicate : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::PredicateConfig* Predicate; // 0x10
		::System::Boolean InverseSort; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPREDICATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D71F840DAD37429B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByPredicate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByPredicate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPREDICATE_METHOD_3_D71F840DAD37429B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_89BA15031B47B4AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByPredicate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByPredicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPREDICATE_METHOD_3_89BA15031B47B4AB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_61F6BB80BD73D32A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByPredicate*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByPredicate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPREDICATE_METHOD_3_61F6BB80BD73D32A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B1E3FA0A3D9C75E6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByPredicate* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByPredicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPREDICATE_METHOD_3_B1E3FA0A3D9C75E6_OFFSET))(a1, a2);
		}
	};
}
