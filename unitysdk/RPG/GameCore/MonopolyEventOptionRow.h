#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MonopolyOptionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MONOPOLYEVENTOPTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B1B3100)
#define RPG_GAMECORE_MONOPOLYEVENTOPTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1B3A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyEventOptionRow_TypeDefinitionIndex = 11569;

	class MonopolyEventOptionRow : public ::System::Object
	{
	public:
		::System::String* EffectContentText; // 0x10
		::Il2CppArray<::System::UInt32>* NextOptionList; // 0x18
		::Il2CppArray<::System::UInt32>* EffectIDList; // 0x20
		::System::UInt32 DiceScoreRequirement; // 0x28
		::System::UInt32 TextDisplayParam2; // 0x2C
		::System::UInt32 EventOptionID; // 0x30
		::System::Boolean IsHideEffect; // 0x34
		::RPG::Client::TextID OptionContent; // 0x38
		::System::UInt32 TextDisplayParam1; // 0x48
		::RPG::GameCore::MonopolyOptionType OptionType; // 0x4C
		::RPG::Client::TextID EffectContent; // 0x50
		::RPG::Client::TextID OptionBubbleTalk; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTOPTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyEventOptionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyEventOptionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTOPTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
