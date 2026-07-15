#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREMONSTERRANK_METHOD_4_1BB8E6C2AF39A92C_OFFSET UNITYSDK_OFFSET(0x19CF7390)
#define RPG_GAMECORE_BYCOMPAREMONSTERRANK_METHOD_4_A8AADFA3790F2F3A_OFFSET UNITYSDK_OFFSET(0x19CF73D0)
#define RPG_GAMECORE_BYCOMPAREMONSTERRANK_METHOD_4_AB030E40884CC6F5_OFFSET UNITYSDK_OFFSET(0x19CF70E0)
#define RPG_GAMECORE_BYCOMPAREMONSTERRANK_METHOD_4_C9091CDE88048324_OFFSET UNITYSDK_OFFSET(0x19CF7130)
#define RPG_GAMECORE_BYCOMPAREMONSTERRANK__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF7120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareMonsterRank_TypeDefinitionIndex = 22210;

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

		static ::System::Void Method_4_AB030E40884CC6F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareMonsterRank*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareMonsterRank*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERRANK_METHOD_4_AB030E40884CC6F5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C9091CDE88048324(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareMonsterRank* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareMonsterRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERRANK_METHOD_4_C9091CDE88048324_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1BB8E6C2AF39A92C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterRank*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterRank*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERRANK_METHOD_4_1BB8E6C2AF39A92C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A8AADFA3790F2F3A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterRank* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERRANK_METHOD_4_A8AADFA3790F2F3A_OFFSET))(a1, a2);
		}
	};
}
