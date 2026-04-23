#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYCOMPARESPECIALSPRATIO_METHOD_4_0AD23D08ABDAF911_OFFSET UNITYSDK_OFFSET(0x1873C3A0)
#define RPG_GAMECORE_BYCOMPARESPECIALSPRATIO_METHOD_4_1AF099FFF0498863_OFFSET UNITYSDK_OFFSET(0x1873C2D0)
#define RPG_GAMECORE_BYCOMPARESPECIALSPRATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1873C350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSpecialSPRatio_TypeDefinitionIndex = 21920;

	class ByCompareSpecialSPRatio : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPECIALSPRATIO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1AF099FFF0498863(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSpecialSPRatio*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSpecialSPRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPECIALSPRATIO_METHOD_4_1AF099FFF0498863_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0AD23D08ABDAF911(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSpecialSPRatio* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSpecialSPRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPECIALSPRATIO_METHOD_4_0AD23D08ABDAF911_OFFSET))(a1, a2);
		}
	};
}
