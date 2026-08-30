#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYGRIDFIGHTTRAITSELECTEDCHARACTER_METHOD_4_5E5583D82220CEBE_OFFSET UNITYSDK_OFFSET(0x1CF1DE90)
#define RPG_GAMECORE_BYGRIDFIGHTTRAITSELECTEDCHARACTER_METHOD_4_5FFCF766ADEDF3C7_OFFSET UNITYSDK_OFFSET(0x1CF1DC90)
#define RPG_GAMECORE_BYGRIDFIGHTTRAITSELECTEDCHARACTER_METHOD_4_60C00F9DC898F58E_OFFSET UNITYSDK_OFFSET(0x1CF1DC50)
#define RPG_GAMECORE_BYGRIDFIGHTTRAITSELECTEDCHARACTER_METHOD_4_C9115DAD124286F1_OFFSET UNITYSDK_OFFSET(0x1CF1DE60)
#define RPG_GAMECORE_BYGRIDFIGHTTRAITSELECTEDCHARACTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF1DC80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByGridFightTraitSelectedCharacter_TypeDefinitionIndex = 22272;

	class ByGridFightTraitSelectedCharacter : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* CharacterID; // 0x20
		::RPG::GameCore::DynamicString* TeamTrait; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTTRAITSELECTEDCHARACTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_60C00F9DC898F58E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByGridFightTraitSelectedCharacter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByGridFightTraitSelectedCharacter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTTRAITSELECTEDCHARACTER_METHOD_4_60C00F9DC898F58E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5FFCF766ADEDF3C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByGridFightTraitSelectedCharacter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByGridFightTraitSelectedCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTTRAITSELECTEDCHARACTER_METHOD_4_5FFCF766ADEDF3C7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C9115DAD124286F1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightTraitSelectedCharacter*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightTraitSelectedCharacter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTTRAITSELECTEDCHARACTER_METHOD_4_C9115DAD124286F1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5E5583D82220CEBE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightTraitSelectedCharacter* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightTraitSelectedCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTTRAITSELECTEDCHARACTER_METHOD_4_5E5583D82220CEBE_OFFSET))(a1, a2);
		}
	};
}
