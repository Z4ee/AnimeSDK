#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASSPARETEAMFORMATION_METHOD_4_192738CCF053E8D2_OFFSET UNITYSDK_OFFSET(0x1CF23300)
#define RPG_GAMECORE_BYHASSPARETEAMFORMATION_METHOD_4_20910BB46DCB6001_OFFSET UNITYSDK_OFFSET(0x1CF230F0)
#define RPG_GAMECORE_BYHASSPARETEAMFORMATION_METHOD_4_3E276BECF895015C_OFFSET UNITYSDK_OFFSET(0x1CF23330)
#define RPG_GAMECORE_BYHASSPARETEAMFORMATION_METHOD_4_FCB989898B621DC4_OFFSET UNITYSDK_OFFSET(0x1CF23130)
#define RPG_GAMECORE_BYHASSPARETEAMFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF23120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasSpareTeamFormation_TypeDefinitionIndex = 22387;

	class ByHasSpareTeamFormation : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::TeamType Team; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSPARETEAMFORMATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_20910BB46DCB6001(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasSpareTeamFormation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasSpareTeamFormation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSPARETEAMFORMATION_METHOD_4_20910BB46DCB6001_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FCB989898B621DC4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasSpareTeamFormation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasSpareTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSPARETEAMFORMATION_METHOD_4_FCB989898B621DC4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_192738CCF053E8D2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSpareTeamFormation*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSpareTeamFormation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSPARETEAMFORMATION_METHOD_4_192738CCF053E8D2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3E276BECF895015C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSpareTeamFormation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSpareTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSPARETEAMFORMATION_METHOD_4_3E276BECF895015C_OFFSET))(a1, a2);
		}
	};
}
