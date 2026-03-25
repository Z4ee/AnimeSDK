#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYCOMPARESTANCECOUNT_METHOD_4_09851FBB9E7342DF_OFFSET UNITYSDK_OFFSET(0x17018B60)
#define RPG_GAMECORE_BYCOMPARESTANCECOUNT_METHOD_4_3B18B028373F0FAD_OFFSET UNITYSDK_OFFSET(0x17018C30)
#define RPG_GAMECORE_BYCOMPARESTANCECOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x17018BE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareStanceCount_TypeDefinitionIndex = 21721;

	class ByCompareStanceCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTANCECOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_09851FBB9E7342DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareStanceCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareStanceCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTANCECOUNT_METHOD_4_09851FBB9E7342DF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3B18B028373F0FAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareStanceCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareStanceCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTANCECOUNT_METHOD_4_3B18B028373F0FAD_OFFSET))(a1, a2);
		}
	};
}
