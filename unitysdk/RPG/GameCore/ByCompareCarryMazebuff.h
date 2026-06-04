#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECARRYMAZEBUFF_METHOD_4_526643EBA1BB42BD_OFFSET UNITYSDK_OFFSET(0x19506A90)
#define RPG_GAMECORE_BYCOMPARECARRYMAZEBUFF_METHOD_4_670AEEE6D79F2D58_OFFSET UNITYSDK_OFFSET(0x195067C0)
#define RPG_GAMECORE_BYCOMPARECARRYMAZEBUFF_METHOD_4_8F5972F05556A933_OFFSET UNITYSDK_OFFSET(0x195068E0)
#define RPG_GAMECORE_BYCOMPARECARRYMAZEBUFF_METHOD_4_B68EF1160C355BBA_OFFSET UNITYSDK_OFFSET(0x19506B30)
#define RPG_GAMECORE_BYCOMPARECARRYMAZEBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x19506860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareCarryMazebuff_TypeDefinitionIndex = 18914;

	class ByCompareCarryMazebuff : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::UInt32 BuffID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECARRYMAZEBUFF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_670AEEE6D79F2D58(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCarryMazebuff*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCarryMazebuff*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECARRYMAZEBUFF_METHOD_4_670AEEE6D79F2D58_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8F5972F05556A933(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCarryMazebuff* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCarryMazebuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECARRYMAZEBUFF_METHOD_4_8F5972F05556A933_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_526643EBA1BB42BD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCarryMazebuff*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCarryMazebuff*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECARRYMAZEBUFF_METHOD_4_526643EBA1BB42BD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B68EF1160C355BBA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCarryMazebuff* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCarryMazebuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECARRYMAZEBUFF_METHOD_4_B68EF1160C355BBA_OFFSET))(a1, a2);
		}
	};
}
