#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYCOMPARENPCMONSTERRANK_METHOD_4_53FD4634835A9909_OFFSET UNITYSDK_OFFSET(0x18735690)
#define RPG_GAMECORE_BYCOMPARENPCMONSTERRANK_METHOD_4_59040F8C3BA882B6_OFFSET UNITYSDK_OFFSET(0x18735770)
#define RPG_GAMECORE_BYCOMPARENPCMONSTERRANK__CTOR_OFFSET UNITYSDK_OFFSET(0x18735710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareNpcMonsterRank_TypeDefinitionIndex = 19770;

	class ByCompareNpcMonsterRank : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::System::UInt32 CompareValue; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENPCMONSTERRANK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_53FD4634835A9909(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareNpcMonsterRank*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareNpcMonsterRank*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENPCMONSTERRANK_METHOD_4_53FD4634835A9909_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_59040F8C3BA882B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareNpcMonsterRank* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareNpcMonsterRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENPCMONSTERRANK_METHOD_4_59040F8C3BA882B6_OFFSET))(a1, a2);
		}
	};
}
