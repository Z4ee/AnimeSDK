#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYISATTACKER_METHOD_4_B2A897558D566C6F_OFFSET UNITYSDK_OFFSET(0x18A996F0)
#define RPG_GAMECORE_MARBLEBYISATTACKER_METHOD_4_D6F8E8E15D90D4AF_OFFSET UNITYSDK_OFFSET(0x18A997D0)
#define RPG_GAMECORE_MARBLEBYISATTACKER__CTOR_OFFSET UNITYSDK_OFFSET(0x18A99780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByIsAttacker_TypeDefinitionIndex = 15966;

	class MarbleByIsAttacker : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYISATTACKER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B2A897558D566C6F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByIsAttacker*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByIsAttacker*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYISATTACKER_METHOD_4_B2A897558D566C6F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D6F8E8E15D90D4AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByIsAttacker* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByIsAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYISATTACKER_METHOD_4_D6F8E8E15D90D4AF_OFFSET))(a1, a2);
		}
	};
}
