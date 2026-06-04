#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MonopolyEventType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MONOPOLYEVENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1995D2F0)
#define RPG_GAMECORE_MONOPOLYEVENTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1995DC40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyEventConfigRow_TypeDefinitionIndex = 11467;

	class MonopolyEventConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* AutoTriggerEffectIDList; // 0x10
		::System::String* PicPath; // 0x18
		::Il2CppArray<::System::UInt32>* EventOptionIDList; // 0x20
		::RPG::GameCore::MonopolyEventType Type; // 0x28
		::System::Boolean IsDataReport; // 0x2C
		::System::Boolean Skippable; // 0x2D
		::System::Boolean IsSpecial; // 0x2E
		::RPG::Client::TextID EventName; // 0x30
		::RPG::Client::TextID EventContent; // 0x40
		::System::UInt32 EventID; // 0x50
		::System::UInt32 DiceNum; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyEventConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyEventConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
