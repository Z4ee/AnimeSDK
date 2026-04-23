#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVENTUREBYCHECKMOVEINPUT_METHOD_4_0D1B265559100449_OFFSET UNITYSDK_OFFSET(0x1866DEB0)
#define RPG_GAMECORE_ADVENTUREBYCHECKMOVEINPUT_METHOD_4_3C5F0F0A1D565443_OFFSET UNITYSDK_OFFSET(0x1866DDE0)
#define RPG_GAMECORE_ADVENTUREBYCHECKMOVEINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1866DE60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByCheckMoveInput_TypeDefinitionIndex = 19177;

	class AdventureByCheckMoveInput : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCHECKMOVEINPUT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3C5F0F0A1D565443(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByCheckMoveInput*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByCheckMoveInput*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCHECKMOVEINPUT_METHOD_4_3C5F0F0A1D565443_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0D1B265559100449(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByCheckMoveInput* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByCheckMoveInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCHECKMOVEINPUT_METHOD_4_0D1B265559100449_OFFSET))(a1, a2);
		}
	};
}
