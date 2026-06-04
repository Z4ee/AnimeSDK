#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MuseumRandomEventType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MUSEUMRANDOMEVENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x199BF130)
#define RPG_GAMECORE_MUSEUMRANDOMEVENTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x199BF870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumRandomEventConfigRow_TypeDefinitionIndex = 13574;

	class MuseumRandomEventConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TriggerTypeParameter; // 0x10
		::Il2CppArray<::System::UInt32>* EventTypeParameter; // 0x18
		::RPG::GameCore::MuseumRandomEventType EventType; // 0x20
		::System::UInt32 RandomEventID; // 0x24
		::RPG::Client::TextID EventTitle; // 0x28
		::RPG::Client::TextID Event; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMRANDOMEVENTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MuseumRandomEventConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MuseumRandomEventConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMRANDOMEVENTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
