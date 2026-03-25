#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MonopolyOptionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MONOPOLYEVENTOPTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17439C50)
#define RPG_GAMECORE_MONOPOLYEVENTOPTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1743A590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyEventOptionRow_TypeDefinitionIndex = 11021;

	class MonopolyEventOptionRow : public ::System::Object
	{
	public:
		::System::String* EffectContentText; // 0x10
		::Il2CppArray<::System::UInt32>* EffectIDList; // 0x18
		::Il2CppArray<::System::UInt32>* NextOptionList; // 0x20
		::RPG::Client::TextID EffectContent; // 0x28
		::System::Boolean IsHideEffect; // 0x38
		::RPG::GameCore::MonopolyOptionType OptionType; // 0x3C
		::RPG::Client::TextID OptionBubbleTalk; // 0x40
		::System::UInt32 EventOptionID; // 0x50
		::System::UInt32 TextDisplayParam1; // 0x54
		::System::UInt32 DiceScoreRequirement; // 0x58
		::System::UInt32 TextDisplayParam2; // 0x5C
		::RPG::Client::TextID OptionContent; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTOPTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MonopolyEventOptionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyEventOptionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTOPTIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
