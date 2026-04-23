#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYRANKACTIVATEDFROMLINEUP_METHOD_4_7A0BB6489ABF64BC_OFFSET UNITYSDK_OFFSET(0x1875E9F0)
#define RPG_GAMECORE_BYRANKACTIVATEDFROMLINEUP_METHOD_4_7E5EF800C23538CA_OFFSET UNITYSDK_OFFSET(0x1875EAC0)
#define RPG_GAMECORE_BYRANKACTIVATEDFROMLINEUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1875EA70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByRankActivatedFromLineup_TypeDefinitionIndex = 21984;

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
	};
}
