#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETSORTMONSTERRANK_METHOD_3_50B2CA8244C7A84D_OFFSET UNITYSDK_OFFSET(0x177D2B60)
#define RPG_GAMECORE_TARGETSORTMONSTERRANK_METHOD_3_618D6C731AACAABC_OFFSET UNITYSDK_OFFSET(0x177D39B0)
#define RPG_GAMECORE_TARGETSORTMONSTERRANK__CTOR_OFFSET UNITYSDK_OFFSET(0x177D2B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortMonsterRank_TypeDefinitionIndex = 22263;

	class TargetSortMonsterRank : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean HighestFirst; // 0x10
		::RPG::GameCore::MonsterRank MaxRank; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTMONSTERRANK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_618D6C731AACAABC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortMonsterRank*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortMonsterRank*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTMONSTERRANK_METHOD_3_618D6C731AACAABC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_50B2CA8244C7A84D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortMonsterRank* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortMonsterRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTMONSTERRANK_METHOD_3_50B2CA8244C7A84D_OFFSET))(a1, a2);
		}
	};
}
