#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_EVENTSTUFFCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x188B9910)
#define RPG_GAMECORE_EVENTSTUFFCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x188B9FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EventStuffConfigRow_TypeDefinitionIndex = 13494;

	class EventStuffConfigRow : public ::System::Object
	{
	public:
		::System::String* MissionStartString; // 0x10
		::System::UInt32 StuffID; // 0x18
		::System::UInt32 MissionID; // 0x1C
		::RPG::Client::TextID EventContentTextID; // 0x20
		::System::Boolean ForceComplete; // 0x30
		::System::UInt32 EventStuffID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTSTUFFCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::EventStuffConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EventStuffConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTSTUFFCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
