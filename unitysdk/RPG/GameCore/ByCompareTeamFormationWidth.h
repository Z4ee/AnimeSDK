#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARETEAMFORMATIONWIDTH_METHOD_4_79C6A43135D3DE20_OFFSET UNITYSDK_OFFSET(0x1953B330)
#define RPG_GAMECORE_BYCOMPARETEAMFORMATIONWIDTH_METHOD_4_B15F8CD3B4DA7016_OFFSET UNITYSDK_OFFSET(0x1953AFB0)
#define RPG_GAMECORE_BYCOMPARETEAMFORMATIONWIDTH_METHOD_4_CA1BA682114DDE90_OFFSET UNITYSDK_OFFSET(0x1953B080)
#define RPG_GAMECORE_BYCOMPARETEAMFORMATIONWIDTH_METHOD_4_D0FCA84B2AD86B9D_OFFSET UNITYSDK_OFFSET(0x1953B2B0)
#define RPG_GAMECORE_BYCOMPARETEAMFORMATIONWIDTH__CTOR_OFFSET UNITYSDK_OFFSET(0x1953B030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareTeamFormationWidth_TypeDefinitionIndex = 21670;

	class ByCompareTeamFormationWidth : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::RPG::GameCore::TeamType Team; // 0x24
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMFORMATIONWIDTH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B15F8CD3B4DA7016(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTeamFormationWidth*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTeamFormationWidth*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMFORMATIONWIDTH_METHOD_4_B15F8CD3B4DA7016_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CA1BA682114DDE90(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTeamFormationWidth* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTeamFormationWidth*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMFORMATIONWIDTH_METHOD_4_CA1BA682114DDE90_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D0FCA84B2AD86B9D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTeamFormationWidth*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTeamFormationWidth*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMFORMATIONWIDTH_METHOD_4_D0FCA84B2AD86B9D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_79C6A43135D3DE20(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTeamFormationWidth* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTeamFormationWidth*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMFORMATIONWIDTH_METHOD_4_79C6A43135D3DE20_OFFSET))(a1, a2);
		}
	};
}
