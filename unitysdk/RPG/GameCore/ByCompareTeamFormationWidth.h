#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARETEAMFORMATIONWIDTH_METHOD_4_2EACFDCFAE2979D0_OFFSET UNITYSDK_OFFSET(0x1A8AF570)
#define RPG_GAMECORE_BYCOMPARETEAMFORMATIONWIDTH_METHOD_4_9E02A8ABE2D538E1_OFFSET UNITYSDK_OFFSET(0x1A8AF300)
#define RPG_GAMECORE_BYCOMPARETEAMFORMATIONWIDTH_METHOD_4_C403968E28C17BE7_OFFSET UNITYSDK_OFFSET(0x1A8AF5A0)
#define RPG_GAMECORE_BYCOMPARETEAMFORMATIONWIDTH_METHOD_4_CA1BA682114DDE90_OFFSET UNITYSDK_OFFSET(0x1A8AF340)
#define RPG_GAMECORE_BYCOMPARETEAMFORMATIONWIDTH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8AF330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareTeamFormationWidth_TypeDefinitionIndex = 22097;

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

		static ::System::Void Method_4_9E02A8ABE2D538E1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTeamFormationWidth*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTeamFormationWidth*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMFORMATIONWIDTH_METHOD_4_9E02A8ABE2D538E1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CA1BA682114DDE90(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTeamFormationWidth* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTeamFormationWidth*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMFORMATIONWIDTH_METHOD_4_CA1BA682114DDE90_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2EACFDCFAE2979D0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTeamFormationWidth*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTeamFormationWidth*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMFORMATIONWIDTH_METHOD_4_2EACFDCFAE2979D0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C403968E28C17BE7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTeamFormationWidth* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTeamFormationWidth*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMFORMATIONWIDTH_METHOD_4_C403968E28C17BE7_OFFSET))(a1, a2);
		}
	};
}
