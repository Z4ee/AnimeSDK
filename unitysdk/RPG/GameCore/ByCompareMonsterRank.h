#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYCOMPAREMONSTERRANK_METHOD_4_BA509E69529046CA_OFFSET UNITYSDK_OFFSET(0x1700FDD0)
#define RPG_GAMECORE_BYCOMPAREMONSTERRANK_METHOD_4_C9091CDE88048324_OFFSET UNITYSDK_OFFSET(0x1700FEB0)
#define RPG_GAMECORE_BYCOMPAREMONSTERRANK__CTOR_OFFSET UNITYSDK_OFFSET(0x1700FE50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareMonsterRank_TypeDefinitionIndex = 21244;

	class ByCompareMonsterRank : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::System::UInt32 CompareValue; // 0x2C
		::System::Boolean ResultWhenNotMonster; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERRANK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BA509E69529046CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareMonsterRank*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareMonsterRank*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERRANK_METHOD_4_BA509E69529046CA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C9091CDE88048324(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareMonsterRank* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareMonsterRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERRANK_METHOD_4_C9091CDE88048324_OFFSET))(a1, a2);
		}
	};
}
