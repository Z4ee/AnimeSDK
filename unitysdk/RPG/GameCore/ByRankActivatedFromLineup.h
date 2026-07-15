#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYRANKACTIVATEDFROMLINEUP_METHOD_4_543713DD3961389B_OFFSET UNITYSDK_OFFSET(0x1B2B70C0)
#define RPG_GAMECORE_BYRANKACTIVATEDFROMLINEUP_METHOD_4_7E5EF800C23538CA_OFFSET UNITYSDK_OFFSET(0x1B2B7100)
#define RPG_GAMECORE_BYRANKACTIVATEDFROMLINEUP_METHOD_4_AA77A8DF4D5FD2B5_OFFSET UNITYSDK_OFFSET(0x1B2B72B0)
#define RPG_GAMECORE_BYRANKACTIVATEDFROMLINEUP_METHOD_4_E3EE051342BDEEB2_OFFSET UNITYSDK_OFFSET(0x1B2B72E0)
#define RPG_GAMECORE_BYRANKACTIVATEDFROMLINEUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2B70F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByRankActivatedFromLineup_TypeDefinitionIndex = 22233;

	class ByRankActivatedFromLineup : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 AvatarID; // 0x20
		::System::UInt32 Rank; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANKACTIVATEDFROMLINEUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_543713DD3961389B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByRankActivatedFromLineup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByRankActivatedFromLineup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANKACTIVATEDFROMLINEUP_METHOD_4_543713DD3961389B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7E5EF800C23538CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByRankActivatedFromLineup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByRankActivatedFromLineup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANKACTIVATEDFROMLINEUP_METHOD_4_7E5EF800C23538CA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AA77A8DF4D5FD2B5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRankActivatedFromLineup*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRankActivatedFromLineup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANKACTIVATEDFROMLINEUP_METHOD_4_AA77A8DF4D5FD2B5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E3EE051342BDEEB2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRankActivatedFromLineup* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRankActivatedFromLineup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANKACTIVATEDFROMLINEUP_METHOD_4_E3EE051342BDEEB2_OFFSET))(a1, a2);
		}
	};
}
