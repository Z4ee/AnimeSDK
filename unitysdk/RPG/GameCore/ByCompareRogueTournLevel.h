#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPAREROGUETOURNLEVEL_METHOD_4_0B41E09874335DF3_OFFSET UNITYSDK_OFFSET(0x1952D440)
#define RPG_GAMECORE_BYCOMPAREROGUETOURNLEVEL_METHOD_4_7D3B1E207CEEE0AA_OFFSET UNITYSDK_OFFSET(0x1952D510)
#define RPG_GAMECORE_BYCOMPAREROGUETOURNLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1952D4C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareRogueTournLevel_TypeDefinitionIndex = 20066;

	class ByCompareRogueTournLevel : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUETOURNLEVEL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0B41E09874335DF3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareRogueTournLevel*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareRogueTournLevel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUETOURNLEVEL_METHOD_4_0B41E09874335DF3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7D3B1E207CEEE0AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareRogueTournLevel* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareRogueTournLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUETOURNLEVEL_METHOD_4_7D3B1E207CEEE0AA_OFFSET))(a1, a2);
		}
	};
}
