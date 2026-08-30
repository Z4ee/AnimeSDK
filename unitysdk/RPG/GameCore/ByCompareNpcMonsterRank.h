#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARENPCMONSTERRANK_METHOD_4_2378A679F8734943_OFFSET UNITYSDK_OFFSET(0x1BBAB7F0)
#define RPG_GAMECORE_BYCOMPARENPCMONSTERRANK_METHOD_4_35EE094DB9C5B5E9_OFFSET UNITYSDK_OFFSET(0x1BBABA40)
#define RPG_GAMECORE_BYCOMPARENPCMONSTERRANK_METHOD_4_59040F8C3BA882B6_OFFSET UNITYSDK_OFFSET(0x1BBAB840)
#define RPG_GAMECORE_BYCOMPARENPCMONSTERRANK_METHOD_4_F6BB7EC9A3A5F86F_OFFSET UNITYSDK_OFFSET(0x1BBABA80)
#define RPG_GAMECORE_BYCOMPARENPCMONSTERRANK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBAB830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareNpcMonsterRank_TypeDefinitionIndex = 20552;

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

		static ::System::Void Method_4_2378A679F8734943(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareNpcMonsterRank*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareNpcMonsterRank*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENPCMONSTERRANK_METHOD_4_2378A679F8734943_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_59040F8C3BA882B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareNpcMonsterRank* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareNpcMonsterRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENPCMONSTERRANK_METHOD_4_59040F8C3BA882B6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_35EE094DB9C5B5E9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareNpcMonsterRank*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareNpcMonsterRank*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENPCMONSTERRANK_METHOD_4_35EE094DB9C5B5E9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F6BB7EC9A3A5F86F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareNpcMonsterRank* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareNpcMonsterRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENPCMONSTERRANK_METHOD_4_F6BB7EC9A3A5F86F_OFFSET))(a1, a2);
		}
	};
}
