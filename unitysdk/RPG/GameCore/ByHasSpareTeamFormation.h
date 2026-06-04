#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASSPARETEAMFORMATION_METHOD_4_284602E848201C34_OFFSET UNITYSDK_OFFSET(0x19550280)
#define RPG_GAMECORE_BYHASSPARETEAMFORMATION_METHOD_4_C0EA522D2FD49F29_OFFSET UNITYSDK_OFFSET(0x195505A0)
#define RPG_GAMECORE_BYHASSPARETEAMFORMATION_METHOD_4_E1C97AC6E973EBAA_OFFSET UNITYSDK_OFFSET(0x19550520)
#define RPG_GAMECORE_BYHASSPARETEAMFORMATION_METHOD_4_FCB989898B621DC4_OFFSET UNITYSDK_OFFSET(0x19550350)
#define RPG_GAMECORE_BYHASSPARETEAMFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x19550300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasSpareTeamFormation_TypeDefinitionIndex = 21405;

	class ByHasSpareTeamFormation : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::TeamType Team; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSPARETEAMFORMATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_284602E848201C34(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasSpareTeamFormation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasSpareTeamFormation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSPARETEAMFORMATION_METHOD_4_284602E848201C34_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FCB989898B621DC4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasSpareTeamFormation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasSpareTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSPARETEAMFORMATION_METHOD_4_FCB989898B621DC4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E1C97AC6E973EBAA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSpareTeamFormation*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSpareTeamFormation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSPARETEAMFORMATION_METHOD_4_E1C97AC6E973EBAA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C0EA522D2FD49F29(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSpareTeamFormation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSpareTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSPARETEAMFORMATION_METHOD_4_C0EA522D2FD49F29_OFFSET))(a1, a2);
		}
	};
}
