#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARETEAMFORMATIONROWINDEX_METHOD_4_28DDF6F09803A9BA_OFFSET UNITYSDK_OFFSET(0x1953A7C0)
#define RPG_GAMECORE_BYCOMPARETEAMFORMATIONROWINDEX_METHOD_4_8A70500B1D5CABEB_OFFSET UNITYSDK_OFFSET(0x1953ABA0)
#define RPG_GAMECORE_BYCOMPARETEAMFORMATIONROWINDEX_METHOD_4_978C418616085B34_OFFSET UNITYSDK_OFFSET(0x1953A890)
#define RPG_GAMECORE_BYCOMPARETEAMFORMATIONROWINDEX_METHOD_4_C7D66C1E12B28494_OFFSET UNITYSDK_OFFSET(0x1953AB20)
#define RPG_GAMECORE_BYCOMPARETEAMFORMATIONROWINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1953A840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareTeamFormationRowIndex_TypeDefinitionIndex = 21669;

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

		static ::System::Void Method_4_28DDF6F09803A9BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTeamFormationRowIndex*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTeamFormationRowIndex*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMFORMATIONROWINDEX_METHOD_4_28DDF6F09803A9BA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_978C418616085B34(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTeamFormationRowIndex* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTeamFormationRowIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMFORMATIONROWINDEX_METHOD_4_978C418616085B34_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C7D66C1E12B28494(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTeamFormationRowIndex*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTeamFormationRowIndex*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMFORMATIONROWINDEX_METHOD_4_C7D66C1E12B28494_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8A70500B1D5CABEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTeamFormationRowIndex* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTeamFormationRowIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMFORMATIONROWINDEX_METHOD_4_8A70500B1D5CABEB_OFFSET))(a1, a2);
		}
	};
}
