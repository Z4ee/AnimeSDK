#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKTRIALCHARACTERDIE_METHOD_4_6DF8962DB4E5015B_OFFSET UNITYSDK_OFFSET(0x195017D0)
#define RPG_GAMECORE_BYCHECKTRIALCHARACTERDIE_METHOD_4_A6D25909D8706D7A_OFFSET UNITYSDK_OFFSET(0x19501590)
#define RPG_GAMECORE_BYCHECKTRIALCHARACTERDIE_METHOD_4_D2DC705C7257DFD8_OFFSET UNITYSDK_OFFSET(0x19501660)
#define RPG_GAMECORE_BYCHECKTRIALCHARACTERDIE_METHOD_4_FC2BA87B00CA8003_OFFSET UNITYSDK_OFFSET(0x19501850)
#define RPG_GAMECORE_BYCHECKTRIALCHARACTERDIE__CTOR_OFFSET UNITYSDK_OFFSET(0x19501610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckTrialCharacterDie_TypeDefinitionIndex = 22161;

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

		static ::System::Void Method_4_6DF8962DB4E5015B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTrialCharacterDie*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTrialCharacterDie*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTRIALCHARACTERDIE_METHOD_4_6DF8962DB4E5015B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FC2BA87B00CA8003(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTrialCharacterDie* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTrialCharacterDie*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTRIALCHARACTERDIE_METHOD_4_FC2BA87B00CA8003_OFFSET))(a1, a2);
		}
	};
}
