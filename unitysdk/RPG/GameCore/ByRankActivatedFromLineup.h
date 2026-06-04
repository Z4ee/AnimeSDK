#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYRANKACTIVATEDFROMLINEUP_METHOD_4_7A0BB6489ABF64BC_OFFSET UNITYSDK_OFFSET(0x195D4FB0)
#define RPG_GAMECORE_BYRANKACTIVATEDFROMLINEUP_METHOD_4_7E5EF800C23538CA_OFFSET UNITYSDK_OFFSET(0x195D5080)
#define RPG_GAMECORE_BYRANKACTIVATEDFROMLINEUP_METHOD_4_AEBC956C923E45C4_OFFSET UNITYSDK_OFFSET(0x195D5230)
#define RPG_GAMECORE_BYRANKACTIVATEDFROMLINEUP_METHOD_4_C6775E802C6DE044_OFFSET UNITYSDK_OFFSET(0x195D52B0)
#define RPG_GAMECORE_BYRANKACTIVATEDFROMLINEUP__CTOR_OFFSET UNITYSDK_OFFSET(0x195D5030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByRankActivatedFromLineup_TypeDefinitionIndex = 21807;

	class ByRankActivatedFromLineup : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 AvatarID; // 0x20
		::System::UInt32 Rank; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANKACTIVATEDFROMLINEUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7A0BB6489ABF64BC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByRankActivatedFromLineup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByRankActivatedFromLineup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANKACTIVATEDFROMLINEUP_METHOD_4_7A0BB6489ABF64BC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7E5EF800C23538CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByRankActivatedFromLineup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByRankActivatedFromLineup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANKACTIVATEDFROMLINEUP_METHOD_4_7E5EF800C23538CA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AEBC956C923E45C4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRankActivatedFromLineup*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRankActivatedFromLineup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANKACTIVATEDFROMLINEUP_METHOD_4_AEBC956C923E45C4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C6775E802C6DE044(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRankActivatedFromLineup* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRankActivatedFromLineup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANKACTIVATEDFROMLINEUP_METHOD_4_C6775E802C6DE044_OFFSET))(a1, a2);
		}
	};
}
