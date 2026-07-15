#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYCHECKMOVEINPUT_METHOD_4_0D1B265559100449_OFFSET UNITYSDK_OFFSET(0x1AE4CD60)
#define RPG_GAMECORE_ADVENTUREBYCHECKMOVEINPUT_METHOD_4_6C650B4435E54EA6_OFFSET UNITYSDK_OFFSET(0x1AE4CED0)
#define RPG_GAMECORE_ADVENTUREBYCHECKMOVEINPUT_METHOD_4_90640F4DAA0343F3_OFFSET UNITYSDK_OFFSET(0x1AE4CEA0)
#define RPG_GAMECORE_ADVENTUREBYCHECKMOVEINPUT_METHOD_4_DB43D42584C348C2_OFFSET UNITYSDK_OFFSET(0x1AE4CD20)
#define RPG_GAMECORE_ADVENTUREBYCHECKMOVEINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE4CD50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByCheckMoveInput_TypeDefinitionIndex = 19459;

	class AdventureByCheckMoveInput : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCHECKMOVEINPUT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DB43D42584C348C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByCheckMoveInput*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByCheckMoveInput*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCHECKMOVEINPUT_METHOD_4_DB43D42584C348C2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0D1B265559100449(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByCheckMoveInput* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByCheckMoveInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCHECKMOVEINPUT_METHOD_4_0D1B265559100449_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_90640F4DAA0343F3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByCheckMoveInput*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByCheckMoveInput*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCHECKMOVEINPUT_METHOD_4_90640F4DAA0343F3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6C650B4435E54EA6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByCheckMoveInput* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByCheckMoveInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCHECKMOVEINPUT_METHOD_4_6C650B4435E54EA6_OFFSET))(a1, a2);
		}
	};
}
