#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARETEAMFORMATIONROWINDEX_METHOD_4_8478907E5C7436FC_OFFSET UNITYSDK_OFFSET(0x1A8AEB70)
#define RPG_GAMECORE_BYCOMPARETEAMFORMATIONROWINDEX_METHOD_4_978C418616085B34_OFFSET UNITYSDK_OFFSET(0x1A8AE8E0)
#define RPG_GAMECORE_BYCOMPARETEAMFORMATIONROWINDEX_METHOD_4_C5C3DFFCCEA96F8A_OFFSET UNITYSDK_OFFSET(0x1A8AEBA0)
#define RPG_GAMECORE_BYCOMPARETEAMFORMATIONROWINDEX_METHOD_4_C8A3CFCF4E9D1585_OFFSET UNITYSDK_OFFSET(0x1A8AE8A0)
#define RPG_GAMECORE_BYCOMPARETEAMFORMATIONROWINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8AE8D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareTeamFormationRowIndex_TypeDefinitionIndex = 22096;

	class ByCompareTeamFormationRowIndex : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30
		::System::Boolean ActiveRow; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMFORMATIONROWINDEX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C8A3CFCF4E9D1585(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTeamFormationRowIndex*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTeamFormationRowIndex*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMFORMATIONROWINDEX_METHOD_4_C8A3CFCF4E9D1585_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_978C418616085B34(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTeamFormationRowIndex* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTeamFormationRowIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMFORMATIONROWINDEX_METHOD_4_978C418616085B34_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8478907E5C7436FC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTeamFormationRowIndex*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTeamFormationRowIndex*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMFORMATIONROWINDEX_METHOD_4_8478907E5C7436FC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C5C3DFFCCEA96F8A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTeamFormationRowIndex* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTeamFormationRowIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMFORMATIONROWINDEX_METHOD_4_C5C3DFFCCEA96F8A_OFFSET))(a1, a2);
		}
	};
}
