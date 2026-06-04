#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYGRIDFIGHTTRAITSELECTEDCHARACTER_METHOD_4_239BEE13C24729F8_OFFSET UNITYSDK_OFFSET(0x1954C340)
#define RPG_GAMECORE_BYGRIDFIGHTTRAITSELECTEDCHARACTER_METHOD_4_5FFCF766ADEDF3C7_OFFSET UNITYSDK_OFFSET(0x1954C170)
#define RPG_GAMECORE_BYGRIDFIGHTTRAITSELECTEDCHARACTER_METHOD_4_9BAD93DCE0C44881_OFFSET UNITYSDK_OFFSET(0x1954C0A0)
#define RPG_GAMECORE_BYGRIDFIGHTTRAITSELECTEDCHARACTER_METHOD_4_C0BA0278A990A249_OFFSET UNITYSDK_OFFSET(0x1954C3C0)
#define RPG_GAMECORE_BYGRIDFIGHTTRAITSELECTEDCHARACTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1954C120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByGridFightTraitSelectedCharacter_TypeDefinitionIndex = 21294;

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

		static ::System::Void Method_4_239BEE13C24729F8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightTraitSelectedCharacter*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightTraitSelectedCharacter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTTRAITSELECTEDCHARACTER_METHOD_4_239BEE13C24729F8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C0BA0278A990A249(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightTraitSelectedCharacter* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightTraitSelectedCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTTRAITSELECTEDCHARACTER_METHOD_4_C0BA0278A990A249_OFFSET))(a1, a2);
		}
	};
}
