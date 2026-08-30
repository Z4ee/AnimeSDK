#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHAVEOBSTACLE_METHOD_4_27B2FC9789CFE512_OFFSET UNITYSDK_OFFSET(0x1BBE6D40)
#define RPG_GAMECORE_BYHAVEOBSTACLE_METHOD_4_3A1CE2DF91184804_OFFSET UNITYSDK_OFFSET(0x1BBE6B80)
#define RPG_GAMECORE_BYHAVEOBSTACLE_METHOD_4_4A240770F08CCC41_OFFSET UNITYSDK_OFFSET(0x1BBE6B40)
#define RPG_GAMECORE_BYHAVEOBSTACLE_METHOD_4_AD987135B536CB9C_OFFSET UNITYSDK_OFFSET(0x1BBE6D70)
#define RPG_GAMECORE_BYHAVEOBSTACLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBE6B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHaveObstacle_TypeDefinitionIndex = 19802;

	class ByHaveObstacle : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* From; // 0x20
		::RPG::GameCore::TargetEvaluator* To; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEOBSTACLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4A240770F08CCC41(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHaveObstacle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHaveObstacle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEOBSTACLE_METHOD_4_4A240770F08CCC41_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3A1CE2DF91184804(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHaveObstacle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHaveObstacle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEOBSTACLE_METHOD_4_3A1CE2DF91184804_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_27B2FC9789CFE512(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveObstacle*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveObstacle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEOBSTACLE_METHOD_4_27B2FC9789CFE512_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AD987135B536CB9C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveObstacle* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveObstacle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEOBSTACLE_METHOD_4_AD987135B536CB9C_OFFSET))(a1, a2);
		}
	};
}
