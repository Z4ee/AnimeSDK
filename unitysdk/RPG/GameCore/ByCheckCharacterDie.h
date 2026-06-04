#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_0B97624EA2BF3959;
class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKCHARACTERDIE_METHOD_4_1370A4CB3E88D236_OFFSET UNITYSDK_OFFSET(0x194F8C30)
#define RPG_GAMECORE_BYCHECKCHARACTERDIE_METHOD_4_95A7D1655A1477F1_OFFSET UNITYSDK_OFFSET(0x194F8E20)
#define RPG_GAMECORE_BYCHECKCHARACTERDIE_METHOD_4_B29085ED53055365_OFFSET UNITYSDK_OFFSET(0x194F8DA0)
#define RPG_GAMECORE_BYCHECKCHARACTERDIE_METHOD_4_CC6D6BA0DAE0D73C_OFFSET UNITYSDK_OFFSET(0x194F8B60)
#define RPG_GAMECORE_BYCHECKCHARACTERDIE__CTOR_OFFSET UNITYSDK_OFFSET(0x194F8BE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckCharacterDie_TypeDefinitionIndex = 22160;

	class ByCheckCharacterDie : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 CharacterID; // 0x20
		::Class_1_0B97624EA2BF3959* OverrideConfig; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCHARACTERDIE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CC6D6BA0DAE0D73C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckCharacterDie*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckCharacterDie*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCHARACTERDIE_METHOD_4_CC6D6BA0DAE0D73C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1370A4CB3E88D236(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckCharacterDie* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckCharacterDie*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCHARACTERDIE_METHOD_4_1370A4CB3E88D236_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B29085ED53055365(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckCharacterDie*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckCharacterDie*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCHARACTERDIE_METHOD_4_B29085ED53055365_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_95A7D1655A1477F1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckCharacterDie* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckCharacterDie*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCHARACTERDIE_METHOD_4_95A7D1655A1477F1_OFFSET))(a1, a2);
		}
	};
}
