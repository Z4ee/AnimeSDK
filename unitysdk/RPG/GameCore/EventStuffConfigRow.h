#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_EVENTSTUFFCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x196F74A0)
#define RPG_GAMECORE_EVENTSTUFFCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x196F7BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EventStuffConfigRow_TypeDefinitionIndex = 13565;

	class EventStuffConfigRow : public ::System::Object
	{
	public:
		::System::String* MissionStartString; // 0x10
		::RPG::Client::TextID EventContentTextID; // 0x18
		::System::UInt32 MissionID; // 0x28
		::System::UInt32 EventStuffID; // 0x2C
		::System::UInt32 StuffID; // 0x30
		::System::Boolean ForceComplete; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTSTUFFCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EventStuffConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EventStuffConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTSTUFFCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
