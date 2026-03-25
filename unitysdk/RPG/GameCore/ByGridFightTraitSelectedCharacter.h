#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_BYGRIDFIGHTTRAITSELECTEDCHARACTER_METHOD_4_5FFCF766ADEDF3C7_OFFSET UNITYSDK_OFFSET(0x17022E70)
#define RPG_GAMECORE_BYGRIDFIGHTTRAITSELECTEDCHARACTER_METHOD_4_9BAD93DCE0C44881_OFFSET UNITYSDK_OFFSET(0x17022DA0)
#define RPG_GAMECORE_BYGRIDFIGHTTRAITSELECTEDCHARACTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17022E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByGridFightTraitSelectedCharacter_TypeDefinitionIndex = 20709;

	class ByGridFightTraitSelectedCharacter : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* CharacterID; // 0x20
		::RPG::GameCore::DynamicString* TeamTrait; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTTRAITSELECTEDCHARACTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9BAD93DCE0C44881(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByGridFightTraitSelectedCharacter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByGridFightTraitSelectedCharacter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTTRAITSELECTEDCHARACTER_METHOD_4_9BAD93DCE0C44881_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5FFCF766ADEDF3C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByGridFightTraitSelectedCharacter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByGridFightTraitSelectedCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTTRAITSELECTEDCHARACTER_METHOD_4_5FFCF766ADEDF3C7_OFFSET))(a1, a2);
		}
	};
}
