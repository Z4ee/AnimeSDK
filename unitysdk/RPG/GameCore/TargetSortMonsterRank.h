#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTMONSTERRANK_METHOD_3_483EE1E0DE3AEFD2_OFFSET UNITYSDK_OFFSET(0x1D5BC580)
#define RPG_GAMECORE_TARGETSORTMONSTERRANK_METHOD_3_50B2CA8244C7A84D_OFFSET UNITYSDK_OFFSET(0x1D5BC460)
#define RPG_GAMECORE_TARGETSORTMONSTERRANK_METHOD_3_9103C94BDB67658E_OFFSET UNITYSDK_OFFSET(0x1D5BC410)
#define RPG_GAMECORE_TARGETSORTMONSTERRANK_METHOD_3_DF1B862EC1F63999_OFFSET UNITYSDK_OFFSET(0x1D5BC5C0)
#define RPG_GAMECORE_TARGETSORTMONSTERRANK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5BC450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortMonsterRank_TypeDefinitionIndex = 23712;

	class TargetSortMonsterRank : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean HighestFirst; // 0x10
		::RPG::GameCore::MonsterRank MaxRank; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTMONSTERRANK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9103C94BDB67658E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortMonsterRank*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortMonsterRank*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTMONSTERRANK_METHOD_3_9103C94BDB67658E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_50B2CA8244C7A84D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortMonsterRank* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortMonsterRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTMONSTERRANK_METHOD_3_50B2CA8244C7A84D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_483EE1E0DE3AEFD2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortMonsterRank*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortMonsterRank*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTMONSTERRANK_METHOD_3_483EE1E0DE3AEFD2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DF1B862EC1F63999(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortMonsterRank* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortMonsterRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTMONSTERRANK_METHOD_3_DF1B862EC1F63999_OFFSET))(a1, a2);
		}
	};
}
