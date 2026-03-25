#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCHECKTRIALCHARACTERDIE_METHOD_4_A6D25909D8706D7A_OFFSET UNITYSDK_OFFSET(0x17001480)
#define RPG_GAMECORE_BYCHECKTRIALCHARACTERDIE_METHOD_4_D2DC705C7257DFD8_OFFSET UNITYSDK_OFFSET(0x17001550)
#define RPG_GAMECORE_BYCHECKTRIALCHARACTERDIE__CTOR_OFFSET UNITYSDK_OFFSET(0x17001500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckTrialCharacterDie_TypeDefinitionIndex = 21669;

	class ByCheckTrialCharacterDie : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 CharacterID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTRIALCHARACTERDIE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A6D25909D8706D7A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckTrialCharacterDie*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckTrialCharacterDie*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTRIALCHARACTERDIE_METHOD_4_A6D25909D8706D7A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D2DC705C7257DFD8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckTrialCharacterDie* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckTrialCharacterDie*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTRIALCHARACTERDIE_METHOD_4_D2DC705C7257DFD8_OFFSET))(a1, a2);
		}
	};
}
