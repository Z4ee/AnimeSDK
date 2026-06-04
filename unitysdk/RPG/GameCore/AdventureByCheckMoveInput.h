#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYCHECKMOVEINPUT_METHOD_4_0D1B265559100449_OFFSET UNITYSDK_OFFSET(0x19440AA0)
#define RPG_GAMECORE_ADVENTUREBYCHECKMOVEINPUT_METHOD_4_2759A13DC9C2D40A_OFFSET UNITYSDK_OFFSET(0x19440BE0)
#define RPG_GAMECORE_ADVENTUREBYCHECKMOVEINPUT_METHOD_4_3C5F0F0A1D565443_OFFSET UNITYSDK_OFFSET(0x194409D0)
#define RPG_GAMECORE_ADVENTUREBYCHECKMOVEINPUT_METHOD_4_584B6980652A0FA2_OFFSET UNITYSDK_OFFSET(0x19440C60)
#define RPG_GAMECORE_ADVENTUREBYCHECKMOVEINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x19440A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByCheckMoveInput_TypeDefinitionIndex = 19104;

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

		static ::System::Void Method_4_2759A13DC9C2D40A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByCheckMoveInput*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByCheckMoveInput*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCHECKMOVEINPUT_METHOD_4_2759A13DC9C2D40A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_584B6980652A0FA2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByCheckMoveInput* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByCheckMoveInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCHECKMOVEINPUT_METHOD_4_584B6980652A0FA2_OFFSET))(a1, a2);
		}
	};
}
