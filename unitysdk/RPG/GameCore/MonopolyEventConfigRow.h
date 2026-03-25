#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MonopolyEventType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MONOPOLYEVENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17438850)
#define RPG_GAMECORE_MONOPOLYEVENTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17439140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyEventConfigRow_TypeDefinitionIndex = 11019;

	class MonopolyEventConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* AutoTriggerEffectIDList; // 0x10
		::Il2CppArray<::System::UInt32>* EventOptionIDList; // 0x18
		::System::String* PicPath; // 0x20
		::System::UInt32 DiceNum; // 0x28
		::System::UInt32 EventID; // 0x2C
		::RPG::Client::TextID EventContent; // 0x30
		::RPG::Client::TextID EventName; // 0x40
		::System::Boolean Skippable; // 0x50
		::System::Boolean IsSpecial; // 0x51
		::System::Boolean IsDataReport; // 0x52
		::RPG::GameCore::MonopolyEventType Type; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MonopolyEventConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyEventConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
